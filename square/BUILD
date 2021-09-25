cc_library(
    name = "square",
    srcs = glob(["src/**/*.cpp"]),
    hdrs = glob(["include/**/*.h"]),
    includes = ["include"],
    visibility = ["//examples/dev:__pkg__"],
)

cc_test(
    name = "test",
    srcs = glob(["test/**/*.cpp"]),
    defines = ["SQ_BUILD_TEST"],
    deps = [":square"],
)
