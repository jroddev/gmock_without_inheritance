#ifndef GMOCK_WITHOUT_INHERITANCE_CONTROLLER_H
#define GMOCK_WITHOUT_INHERITANCE_CONTROLLER_H

struct Turtle;

class Controller {
public:
    Controller(Turtle& t);
    void moveLikeAKnight();

private:
    Turtle& turtle;
};

#endif //GMOCK_WITHOUT_INHERITANCE_CONTROLLER_H
