#include "Render.h"

int RunWindow()
{
    SDL_Window* window;

    window = SDL_CreateWindow("Warship", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 800, SDL_WINDOW_OPENGL);
    SDL_Delay(5000);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}