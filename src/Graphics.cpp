#include "Graphics.hpp"

Graphics::Graphics(sf::RenderWindow& wnd)
    :
    wnd(wnd)
{}

void Graphics::BeginFrame()
{
    wnd.clear();
}

void Graphics::EndFrame()
{
    wnd.display();
}

void Graphics::PutPixel(int x, int y, sf::Color c)
{
    sf::RectangleShape pixel({1.0f, 1.0f});
    pixel.setFillColor(c);
    pixel.setPosition(sf::Vector2f(x,y));
    wnd.draw(pixel);
}