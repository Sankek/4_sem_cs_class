cmake_minimum_required(VERSION 3.17)
project(seminar_02)

find_package(Boost 1.75.0)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(circular_buffer circular_buffer.cpp)
    add_executable(multiarray multiarray.cpp)
endif()

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
add_executable(tuple_printer tuple_printer.cpp)
add_executable(forward_list forward_list.cpp)
add_executable(bitset bitset.cpp)

