#ifndef GMOCK_WITHOUT_INHERITANCE_TURTLE_H
#define GMOCK_WITHOUT_INHERITANCE_TURTLE_H

#include "gmock/gmock.h"
#include <string>

struct Turtle {
    MOCK_METHOD0(sayHello, std::string ());
    MOCK_METHOD1(forward, void (int distance));
    MOCK_METHOD1(turn, void (int degrees));
};

#endif //GMOCK_WITHOUT_INHERITANCE_TURTLE_H
