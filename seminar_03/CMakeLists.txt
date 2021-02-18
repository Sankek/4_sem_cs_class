cmake_minimum_required(VERSION 3.17)
project(seminar_03)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.75.0)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(bimap bimap.cpp)
    add_executable(multi_index multi_index.cpp)

endif()

add_executable(main main.cpp)
add_executable(hash_equal_customer hash_equal_customer.cpp)
add_executable(hash_function hash_function.cpp)
add_executable(hash_table_state hash_table_state.cpp)
add_executable(range range.cpp)
