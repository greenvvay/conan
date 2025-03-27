include_directories("${CMAKE_HOME_DIRECTORY}/src")

add_executable(tests test_math.cpp)
target_link_libraries(tests math_utils gtest gtest_main pthread)
add_test(NAME tests COMMAND tests)