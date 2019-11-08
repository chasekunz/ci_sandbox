cmake_minimum_required(VERSION 3.7)
project (add)

include_directories(include)

add_executable(addition src/addition.cpp src/arithmetic.cpp)

#gtest
find_package(GTest REQUIRED)
add_executable(arithmetic_test src/tests/arithmetic_test.cpp src/arithmetic.cpp)
target_include_directories(arithmetic_test PUBLIC include ${GTEST_INCLUDE_DIRS})
target_link_libraries(arithmetic_test ${GTEST_LIBRARIES} gtest gtest_main pthread)