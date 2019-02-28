#include "Game.hpp"

int main()
{
    sf::RenderWindow wnd
    (
        sf::VideoMode(Graphics::ScreenWidth, Graphics::ScreenHeight),
        "SFML Provider"
    );
    Game game(wnd);

    while (wnd.isOpen())
    {
        sf::Event event;
        while(wnd.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                wnd.close();
            }
        }
        game.Go();
    }

    return 0;
}