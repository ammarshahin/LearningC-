# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

# Set the project name
project (LearningCpp)

include(FetchContent)
FetchContent_Declare(
	googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
	)
	
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add an executable
add_executable(app src/main.cpp)
add_executable(HomeWork1 src/Mastering4CriticalSkillsUsingC++17/OOP/HomeWork1.cpp)
add_executable(namespace src/Mastering4CriticalSkillsUsingC++17/namespaces/namespace.cpp)
add_executable(structures src/Mastering4CriticalSkillsUsingC++17/structures/structures_inheritance.cpp)
add_executable(exception src/Mastering4CriticalSkillsUsingC++17/exceptions/exceptions.cpp)
add_executable(noexcept src/Mastering4CriticalSkillsUsingC++17/exceptions/noexcept.cpp)
add_executable(unique_pointer src/Advanced/SmartPointers/unique_pointer.cpp)
add_executable(mutex src/Multithreding/mutex.cpp)
add_executable(future src/Multithreding/future.cpp)
add_executable(lambda src/Advanced/Lambda/Lambda.cpp)
add_executable(optional src/Advanced/optional/main.cpp)
add_executable(lambda_test src/tests/Advanced/lambda_test.cpp)

target_link_libraries(
  lambda_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(lambda_test)