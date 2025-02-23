cmake_minimum_required(VERSION 3.10.0)
project(Calculator VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Calculator
    src/main.cpp
    src/Parser.cpp
    src/classes/Subtract.cpp
    src/classes/Divide.cpp
    src/classes/Multiply.cpp
    src/classes/Sum.cpp
    src/classes/HandleVariables.cpp)

include(CTest)
enable_testing()

#add_subdirectory(src)
add_subdirectory(tests)

# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
#   DOWNLOAD_EXTRACT_TIMESTAMP TRUE
# )
# # For Windows: Prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)
