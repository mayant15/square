#pragma once

#include "color.h"

namespace sq
{
    struct InitOptions
    {
        unsigned int width = 0;
        unsigned int height = 0;
        Color clearColor{};
    };

    struct Instance
    {
        unsigned int width = 0;
        unsigned int height = 0;
        Color clearColor{};
    };

    Instance create_instance(const InitOptions &options);
} // namespace sq
