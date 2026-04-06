#include "App.h"
#include <iostream>

App::App(const std::string &title, int width, int height)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cerr << "SDL_Init failed: " << SDL_GetError() << '\n';
        return;
    }

    m_window = SDL_CreateWindow(
        title.c_str(),
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        width, height,
        SDL_WINDOW_RESIZABLE);

    if (!m_window)
    {
        std::cerr << "SDL_CreateWindow failed: " << SDL_GetError() << '\n';
        return;
    }

    m_running = true;
}

App::~App()
{
    if (m_window)
        SDL_DestroyWindow(m_window);
    SDL_Quit();
}

int App::run()
{
    if (!m_running)
        return 1;

    SDL_Event event;
    while (m_running)
    {
        while (SDL_PollEvent(&event))
            handleEvent(event);

        SDL_Delay(16);
    }

    return 0;
}

void App::handleEvent(const SDL_Event &event)
{
    if (event.type == SDL_QUIT)
        m_running = false;

    if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
        m_running = false;
}