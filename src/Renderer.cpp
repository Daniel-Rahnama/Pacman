#include "../include/Renderer.hpp"

#include "SDL2/SDL.h"
#include <iostream>
#include <string>

Renderer::Renderer() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) { 
        std::cout << "SDL could not initialize.\n";
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
    }

    window = SDL_CreateWindow("Pacman", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (window == nullptr) {
        std::cout << "Window could not be created.\n";
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
    }

    renderer = SDL_CreateRenderer(window, -1 ,SDL_RENDERER_ACCELERATED);

    if (renderer == nullptr) {
        std::cout << "Renderer could not be created.\n";
        std::cout << "SDL Error: " << SDL_GetError() << std::endl;
    }

    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0xFF);

    SDL_RenderClear(renderer);

    SDL_Texture* img = 
    int w = 226;
    int h = 248;
    SDL_QueryTexture(img, NULL, NULL, &w, &h);

    SDL_Rect* texr;
    texr->x = SCREEN_WIDTH;
    texr->y = SCREEN_HEIGHT;
    texr->w = 0;
    texr->y = 0;

    SDL_RenderCopy(renderer, img, NULL, texr);

    SDL_RenderPresent(renderer);
}

Renderer::~Renderer() {
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Renderer::Render() {

}

void Renderer::UpdateWindowTitle(unsigned int score, unsigned int fps) {
    std::string title = "Pacman Score: " + std::to_string(score) + " FPS: " + std::to_string(fps);
    SDL_SetWindowTitle(window, title.c_str());
}