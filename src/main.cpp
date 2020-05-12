#include <iostream>
#include "Turtle.h"
#include "Controller.h"

int main() {
    std::cout << "Hello, Turtle!" << std::endl;

    auto turtle = Turtle{};
    std::cout << turtle.sayHello() << std::endl;

    auto controller = Controller{turtle};
    controller.moveLikeAKnight();

    return 0;
}
