cmake_minimum_required(VERSION 3.15)
project(MyProject)

# Подключаем Conan
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan_toolchain.cmake")
    message(FATAL_ERROR "Conan toolchain file not found. Run 'conan install' first")
endif()

include_directories("${CMAKE_BINARY_DIR}/conan_toolchain.cmake")

# Основной проект
add_subdirectory(src)

# Тесты
option(BUILD_TESTING "Build tests" ON)
if(BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()