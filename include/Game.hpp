#ifndef GAME_HPP
#define GAME_HPP

#include "Main.hpp"

#include "Renderer.hpp"
#include "Controller.hpp"

class Game {
public:
    Game();
    void Run(Renderer&, Controller&);
private:
    void Update(bool&);
};

#endif /* GAME_HPP */