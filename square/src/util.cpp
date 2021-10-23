#include <square/detail/base.h>
#include <square/util.h>

namespace sq
{
    void set_viewport(int x, int y, unsigned int width, unsigned int height)
    {
        glViewport(x, y, width, height);
    }
} // namespace sq
