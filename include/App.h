#pragma once

#include <SDL.h>
#include <string>

class App
{
public:
    App(const std::string &title, int width, int height);
    ~App();
    int run();

private:
    void handleEvent(const SDL_Event &event);

    SDL_Window *m_window = nullptr;
    bool m_running = false;
};