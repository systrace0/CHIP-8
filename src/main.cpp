#include <iostream>

#include "App.h"

constexpr int SCREEN_WIDTH = 640;
constexpr int SCREEN_HEIGHT = 420;

int main()
{
  App app("CHIP-8", SCREEN_WIDTH, SCREEN_HEIGHT);
  return app.run();
}
