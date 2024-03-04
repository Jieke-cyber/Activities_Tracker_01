cmake_minimum_required(VERSION 3.5)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES run_all_tests.cpp Activities_descripption_test.cpp
        Day_program_of_activities_test.cpp)
add_executable(runAllTests ${TEST_SOURCE_FILES})
target_link_libraries(runAllTests gtest gtest_main core)