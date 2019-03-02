#pragma once
#include "Graphics.hpp"

class Game
{
public:
    Game(sf::RenderWindow& wnd);
    void Go();
private:
    void UpdateModel();
    void ComposeFrame();
private:
    sf::RenderWindow& wnd;
    Graphics gfx;
};