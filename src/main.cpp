#include <iostream>
#include "Turtle.h"
#include "Controller.h"

int main() {
    std::cout << "Hello, Turtle!" << std::endl;

    auto turtle = Turtle{};
    turtle.sayHello();

    auto controller = Controller{turtle};
    controller.moveLikeAKnight();

    return 0;
}
