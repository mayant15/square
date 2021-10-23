#pragma once

#include <string>
namespace sq
{
    /*!
     * @brief Set the viewport dimensions
     * 
     * @param x Desired origin X
     * @param y Desird origin Y
     * @param width Desired viewport width
     * @param height Desired viewport height
     */
    void set_viewport(int x, int y, unsigned int width, unsigned int height);
} // namespace sq