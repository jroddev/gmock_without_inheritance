cmake_minimum_required(VERSION 3.15)
project(gmock_without_inheritance)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()


add_executable(turtle_test turtle/src/Turtle.cpp turtle/src/Turtle.h turtle/src/Turtle.test.cpp)
target_link_libraries(turtle_test  ${CONAN_LIBS})

add_executable(gmock_without_inheritance_test src/main.test.cpp turtle/mock/Turtle.h src/Controller.cpp src/Controller.h)
target_link_libraries(gmock_without_inheritance_test  ${CONAN_LIBS})
target_include_directories(gmock_without_inheritance_test PRIVATE turtle/mock/)

add_executable(gmock_without_inheritance src/main.cpp turtle/src/Turtle.cpp turtle/src/Turtle.h src/Controller.cpp src/Controller.h)
target_include_directories(gmock_without_inheritance PRIVATE turtle/src/)