#include <square/detail/base.h>
#include <square/nodes/clear_buffer.h>

namespace sq
{
    const Instance &clear_color_buffer(const Instance &instance)
    {
        glClearColor(instance.clearColor.r, instance.clearColor.g, instance.clearColor.b, instance.clearColor.a);
        glClear(GL_COLOR_BUFFER_BIT);
        return instance;
    }
} // namespace sq
