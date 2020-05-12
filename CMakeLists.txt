cmake_minimum_required(VERSION 3.15)
project(gmock_without_inheritance)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# Turtle Library
add_library(turtle turtle/Turtle.cpp turtle/Turtle.h)

add_executable(turtle_test turtle/Turtle.test.cpp)
target_link_libraries(turtle_test  turtle)
target_link_libraries(turtle_test  ${CONAN_LIBS})

#########

# Application Test
add_executable(gmock_without_inheritance_test src/main.test.cpp turtle_mocks/Turtle.h src/Controller.cpp src/Controller.h)
target_link_libraries(gmock_without_inheritance_test  ${CONAN_LIBS})
# Link with
target_include_directories(gmock_without_inheritance_test PRIVATE turtle_mocks/)


# Application Executable
add_executable(gmock_without_inheritance src/main.cpp src/Controller.cpp src/Controller.h)
target_include_directories(gmock_without_inheritance PRIVATE turtle/)
target_link_libraries(gmock_without_inheritance turtle)