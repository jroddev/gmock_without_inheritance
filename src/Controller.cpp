#include "Controller.h"
#include "Turtle.h"

Controller::Controller(Turtle &t): turtle(t) {

}

void Controller::moveLikeAKnight() {
    turtle.forward(1);
    turtle.forward(1);
    turtle.turn(90);
    turtle.forward(1);
}
