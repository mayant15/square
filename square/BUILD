cc_library(
    name = "glad",
    srcs = ["src/glad.c"],
    hdrs = [
        "include/square/detail/KHR/khrplatform.h",
        "include/square/detail/glad/glad.h",
    ],
    includes = ["include/square/detail"],
)

cc_library(
    name = "square",
    srcs = glob(["src/**/*.cpp"]),
    hdrs = glob(["include/**/*.h"]),
    includes = ["include"],
    deps = [":glad"],
    visibility = ["//examples/dev:__pkg__"],
)

# Basically same as above just add doctest.cpp and define the config macro
cc_test(
    name = "test",
    srcs = glob(["src/**/*.cpp", "include/**/*.h", "test/doctest.cpp"]),
    includes = ["include"],
    deps = [":glad"],
    defines = ["SQ_BUILD_TEST"],
)
