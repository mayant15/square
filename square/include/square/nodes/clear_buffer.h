#pragma once

#include <square/instance.h>

namespace sq
{
    /*!
     * @brief Clear the color buffer with the color specified in instance
     * 
     * @param instance Square instance to use
     * @return const Instance& A reference to the instance
     */
    const Instance &clear_color_buffer(const Instance &instance);
} // namespace sq
