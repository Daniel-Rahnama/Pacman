#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "SDL2/SDL.h"

#include "Main.hpp"

class Renderer {
public:
    Renderer();
    ~Renderer();
    void Render();
    void UpdateWindowTitle(unsigned int, unsigned int);
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};

#endif /* RENDERER_HPP */