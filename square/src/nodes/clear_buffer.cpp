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

    // TODO: OpenGL test cases

    // TEST_CASE("clear_color_buffer")
    // {
    //     SUBCASE("return instance unchanged")
    //     {
    //         Instance instance{};
    //         instance.height = 100;
    //         const auto &other = clear_color_buffer(instance);
    //         CHECK(other.height == 100);
    //     }
    // }

} // namespace sq
