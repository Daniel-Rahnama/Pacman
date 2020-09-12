#include "../include/Game.hpp"

#include <iostream>

Game::Game() {

}

void Game::Run(Renderer& renderer, Controller& controller) {
    Uint32 Title_Timestamp = SDL_GetTicks();
    Uint32 Frame_Start;
    Uint32 Frame_End;
    Uint32 Frame_Duration;
    unsigned int Frame_Count = 0;

    unsigned int score = 0;

    bool running = true;

    while (running) {
        Frame_Start = SDL_GetTicks();

        controller.HandleInput(running);

        Update(running);

        renderer.Render();

        Frame_End = SDL_GetTicks();

        Frame_Duration = Frame_End - Frame_Start;
        Frame_Count++;

        if (Frame_End - Title_Timestamp >= 1000) {
            renderer.UpdateWindowTitle(score, Frame_Count);
            Frame_Count = 0;
            Title_Timestamp = Frame_End;
        }

        if (Frame_Duration < TARGET_FRAME_DURATION) {
            SDL_Delay(TARGET_FRAME_DURATION - Frame_Duration);
        }
    }
    std::cout << "Game Over!" << std::endl;
    std::cout << "Score: " << score << std::endl;
}

void Game::Update(bool& running) {

}