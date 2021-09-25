#include <square/square.h>

TEST_CASE("greet")
{
    const auto s = sq::greet();
    CHECK(s == "Hello World!");
}
