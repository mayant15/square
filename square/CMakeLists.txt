add_subdirectory(external/glad)

# Config

set(SQ_INCLUDE_DIRECTORY include)

set(SQ_SOURCES
    src/instance.cpp
    src/util.cpp
    src/functional.cpp

    src/nodes/clear_buffer.cpp
)

# Lib

add_library(square ${SQ_SOURCES})
target_include_directories(square PUBLIC ${SQ_INCLUDE_DIRECTORY})
target_link_libraries(square PUBLIC glad)

# Test

add_executable(square-test ${SQ_SOURCES} src/doctest.cpp)

target_include_directories(square-test PRIVATE ${SQ_INCLUDE_DIRECTORY})
target_link_libraries(square-test PRIVATE glad)
target_compile_definitions(square-test PRIVATE SQ_BUILD_TEST)
