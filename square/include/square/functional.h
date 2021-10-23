#pragma once

namespace sq
{
    template <class OuterFunction, class... Functions>
    inline const auto compose(const OuterFunction &outer, Functions... funcs)
    {
        return [](const auto... args)
        {
            return std::invoke(outer, std::invoke(compose(... funcs), ... args));
        }
    }

    template <class Function>
    inline const auto compose(const Function &func)
    {
        return func;
    }
} // namespace sq
