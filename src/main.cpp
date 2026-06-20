#include <SFML/Graphics.hpp>

using sf::RenderWindow;
using sf::Event;
using sf::VideoMode;
using sf::Color;

int main()
{

    RenderWindow window(VideoMode(800, 600), "Pomodoro-Timer");

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }

        window.clear(Color::Black); // rendering code only after this
        window.display();
    }

    return 0;
}