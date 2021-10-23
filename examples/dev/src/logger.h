#pragma once

#include <iostream>

#define LOGI(fmt, ...) std::fprintf(stdout, fmt "\n", ##__VA_ARGS__)
#define LOGE(fmt, ...) std::fprintf(stderr, fmt "\n", ##__VA_ARGS__)
