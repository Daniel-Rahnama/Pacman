#include "../include/Controller.hpp"

void Controller::HandleInput(bool& running) {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
        }
        else if (event.type = SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
            case SDLK_UP: MoveUp(); break;
            case SDLK_DOWN: MoveDown(); break;
            case SDLK_LEFT: MoveLeft(); break;
            case SDLK_RIGHT: MoveRight(); break;
            }
        }
    }
}

void Controller::MoveUp() {

}

void Controller::MoveDown() {

}

void Controller::MoveLeft() {

}

void Controller::MoveRight() {
    
}