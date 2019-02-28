#include "Game.hpp"

Game::Game(sf::RenderWindow& wnd)
    :
    wnd(wnd),
    gfx(wnd)
{}

void Game::Go()
{
    gfx.BeginFrame();
    UpdateModel();
    ComposeFrame();
    gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
}
