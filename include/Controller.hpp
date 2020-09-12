#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "SDL2/SDL.h"

class Controller {
public:
    void HandleInput(bool&);
private:
    void MoveUp();
    void MoveDown();
    void MoveLeft();
    void MoveRight();
};

#endif /* CONTROLLER_HPP */