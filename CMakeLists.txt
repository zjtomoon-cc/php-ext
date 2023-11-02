#cmake_minimum_required( VERSION 2.6 )
#
#SET(CMAKE_C_COMPILER /usr/bin/clang)
#
#set(CMAKE_C_STANDARD 99)
#
#project(hello C)
#
#add_executable(hello hello/main.c)
#
#project(hello-lib C)
#add_library(hello-lib SHARED hello-lib/library.h hello-lib/library.c)
#

cmake_minimum_required(VERSION 3.0)

project(hello)

set(CMAKE_C_FLAGS "-g -Wall")

# Specify the extension source files
add_library(hello MODULE hello/hello.c)

# Include PHP headers
include_directories(/opt/homebrew/include/php)

# Link PHP extension with PHP library
target_link_libraries(hello php)

# Set extension properties
set_target_properties(hello PROPERTIES PREFIX "")
