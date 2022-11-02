cmake_minimum_required(VERSION 3.23)
project(core_dump)

set(cmake_c_compiler "clang")

add_executable(core_dump main.c foo.c foo.h)
