#include <square/detail/base.h>
#include <square/util.h>

namespace sq
{
    std::string greet()
    {
        return "Hello World!";
    }

    void set_viewport(int x, int y, unsigned int width, unsigned int height)
    {
        glViewport(x, y, width, height);
    }
} // namespace sq
