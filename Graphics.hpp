#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class Graphics
{
public:
    Graphics(sf::RenderWindow& wnd);
    void PutPixel(int x, int y, sf::Color c = sf::Color::White);
    void BeginFrame();
    void EndFrame();
public:
    static constexpr int ScreenWidth = 800;
    static constexpr int ScreenHeight = 600;
    sf::RenderWindow& wnd;
};