#include <square/detail/base.h>
#include <square/functional.h>

namespace sq
{
    TEST_CASE("compose")
    {
        SUBCASE("two functions")
        {
            const auto add1 = [](int x) -> int
            { return x + 1; };
            const auto add2 = [](int x) -> int
            { return x + 2; };

            const auto add3 = compose(add1, add2);
            CHECK(add3(1) == 4);
        }

        SUBCASE("three functions")
        {
            const auto add1 = [](int x) -> int
            { return x + 1; };
            const auto add2 = [](int x) -> int
            { return x + 2; };
            const auto add3 = [](int x) -> int
            { return x + 3; };

            const auto add6 = compose(add3, add2, add1);
            CHECK(add6(1) == 7);
        }

        SUBCASE("two arguments")
        {
            const auto add = [](int x, int y) -> int
            { return x + y; };
            const auto add2 = [](int x) -> int
            { return x + 2; };

            const auto add_then_2 = compose(add2, add);
            CHECK(add_then_2(1, 3) == 6);
        }
    }
} // namespace sq
