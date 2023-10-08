cmake_minimum_required( VERSION 2.6 )

SET(CMAKE_C_COMPILER /usr/bin/clang)

set(CMAKE_C_STANDARD 99)

project(hello C)

add_executable(hello hello/main.c)

project(hello-lib C)
add_library(hello-lib SHARED hello-lib/library.h hello-lib/library.c)


