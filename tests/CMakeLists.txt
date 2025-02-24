include(FetchContent)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(CalculatorTest
    CalculatorTest.cpp
    ../src/classes/Sum.cpp
    ../src/classes/Multiply.cpp
)

target_link_libraries(CalculatorTest gtest_main)

add_test(NAME calc_gtest COMMAND CalculatorTest)