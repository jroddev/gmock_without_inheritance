#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Turtle.h"
#include "Controller.h"

TEST(TurtleControllerTest, MoveLikeAKnight) {
    auto seq = testing::InSequence{};
    auto mockTurtle = Turtle{};
    auto controller = Controller{mockTurtle};

    EXPECT_CALL(mockTurtle, forward(1)).Times(2);;
    EXPECT_CALL(mockTurtle, turn(90));
    EXPECT_CALL(mockTurtle, forward(1));

    controller.moveLikeAKnight();
}