#ifndef GMOCK_WITHOUT_INHERITANCE_TURTLE_H
#define GMOCK_WITHOUT_INHERITANCE_TURTLE_H

#include <string>

struct Turtle {
    std::string sayHello();
    void forward(int distance);
    void turn(int degrees);
};

#endif //GMOCK_WITHOUT_INHERITANCE_TURTLE_H
