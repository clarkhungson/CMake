cmake_minimum_required(VERSION 2.8.12)
project (lib_complex)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_library(lib_complex STATIC ${SOURCES})