#include "../include/Main.hpp"

#include "../include/Game.hpp"
#include "../include/Renderer.hpp"
#include "../include/Controller.hpp"

int main() {
    Renderer renderer;

    Controller controller;

    Game().Run(renderer, controller);

    return 0;
}