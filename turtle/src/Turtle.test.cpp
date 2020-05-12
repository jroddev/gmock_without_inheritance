#include <gtest/gtest.h>
#include "Turtle.h"

TEST(TurtleTest, SayHello) {

    auto turtle = Turtle{};
    auto result = turtle.sayHello();

    EXPECT_EQ(result, "Turtle says Hello");

}