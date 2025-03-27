
add_library(math_utils "math/math.cpp")

include_directories("${CMAKE_HOME_DIRECTORY}/src")

add_executable(my_app main.cpp)
target_link_libraries(my_app math_utils)