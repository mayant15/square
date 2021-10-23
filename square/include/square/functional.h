#pragma once

namespace sq
{
    /*!
     * @brief Create the composition of given functions.
     * 
     * @tparam OuterFunction Type of the outermost function
     * @tparam Functions Types for the inner functions
     * @param outer Reference to the outermost function
     * @param funcs References to inner functions
     * @return const auto A new function which is the composition of the given functions
     */
    template <class OuterFunction, class... Functions>
    inline const auto compose(const OuterFunction &outer, Functions... funcs)
    {
        return [](const auto... args)
        {
            return std::invoke(outer, std::invoke(compose(... funcs), ... args));
        }
    }

    /*!
     * @brief Base case for function composition, i.e. identity.
     * 
     * @tparam Function Type of the function to compose
     * @param func Reference to the function to compose
     * @return const auto func parameter itself, unchanged
     */
    template <class Function>
    inline const auto compose(const Function &func)
    {
        return func;
    }
} // namespace sq
