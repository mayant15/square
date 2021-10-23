#pragma once

#include "color.h"

namespace sq
{

    /*!
     * @brief Options to initialize Square with
     */
    struct InitOptions
    {
        unsigned int width = 0;
        unsigned int height = 0;
        Color clearColor{};
    };

    /*!
     * @brief An instance of Square.
     *
     * Contains all the data required to run the render pipeline. Creating and storing
     * it is the user's responsibility. Use create_instance to create it.
     * Pass this to the render function.
     * 
     * @see sq::create_instance 
     */
    struct Instance
    {
        /*!
         * @brief Width of the viewport
         */
        unsigned int width = 0;

        /*!
         * @brief Height of the viewport
         */
        unsigned int height = 0;

        /*!
         * @brief Clear color for the viewport
         *
         * The entire viewport will be set to this color when sq::clear_color_buffer
         * is called.
         * 
         * @see sq::clear_color_buffer
         */
        Color clearColor{};

    private:
        Instance() = default;
        friend Instance create_instance(const InitOptions &options);
    };

    /*!
     * @brief Create a new Square instance
     * 
     * @param options Options to initialize the state with
     * @return Instance A new instance object
     */
    Instance create_instance(const InitOptions &options);
} // namespace sq
