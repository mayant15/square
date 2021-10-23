#include <square/detail/base.h>
#include <square/instance.h>

namespace sq
{
    Instance create_instance(const InitOptions &options)
    {
        // NOTE: Return value optimization can happen here. Trust the compiler, no need to complicate code with move :)
        // https://stackoverflow.com/questions/10476665/avoiding-copy-of-objects-with-the-return-statement
        Instance instance{};
        instance.width = options.width;
        instance.height = options.height;
        instance.clearColor = options.clearColor;
        return instance;
    }

    TEST_CASE("create_instance")
    {
        SUBCASE("set given width")
        {
            InitOptions op{};
            op.width = 100;
            const auto instance = create_instance(op);
            CHECK(instance.width == 100);
        }

        SUBCASE("set given height")
        {
            InitOptions op{};
            op.height = 100;
            const auto instance = create_instance(op);
            CHECK(instance.height == 100);
        }

        SUBCASE("set given clearColor")
        {
            InitOptions op{};
            op.clearColor = {1.0, 0.0, 0.0, 1.0};
            const auto instance = create_instance(op);
            CHECK(instance.clearColor == Color{1.0, 0.0, 0.0, 1.0});
        }
    }
} // namespace sq
