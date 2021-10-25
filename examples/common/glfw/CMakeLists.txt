message(STATUS "Fetching GLFW...")

FetchContent_Declare(
    glfw
    GIT_REPOSITORY "https://github.com/glfw/glfw"
    GIT_TAG 814b7929c5add4b0541ccad26fb81f28b71dc4d8
)

set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
set(GLFW_BUILD_DOCS OFF)

FetchContent_MakeAvailable(glfw)
