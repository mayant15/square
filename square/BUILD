cc_library(
    name = "glad",
    srcs = ["src/glad.c"],
    hdrs = [
        "include/square/detail/KHR/khrplatform.h",
        "include/square/detail/glad/glad.h",
    ],
    includes = ["include/square/detail"],
    # visibility = ["//examples/dev:__pkg__"],
)

cc_library(
    name = "square",
    srcs = glob(["src/**/*.cpp"]),
    hdrs = glob(["include/**/*.h"]),
    includes = ["include"],
    deps = [":glad"],
    visibility = ["//examples/dev:__pkg__"],
)

cc_test(
    name = "test",
    srcs = glob(["test/**/*.cpp"]),
    defines = ["SQ_BUILD_TEST"],
    deps = [":square"],
)
