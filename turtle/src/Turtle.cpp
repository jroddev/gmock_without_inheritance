#include "Turtle.h"
#include <iostream>

void Turtle::forward(int distance) {std::cout << "Move forward by " << distance << std::endl;}
void Turtle::turn(int degrees) {std::cout << "Turn " << degrees << " degrees" << std::endl;}

void Turtle::sayHello() {
    std::cout << "Turtle says Hello" << std::endl;
}
