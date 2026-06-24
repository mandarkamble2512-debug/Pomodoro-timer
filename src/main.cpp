#include <SFML/Graphics.hpp>
#include "RenderObjects.hpp"
#include "Enum&Classes.hpp"

using sf::RenderWindow;
using sf::Event;
using sf::VideoMode;
using sf::Color;
using sf::Vector2u;

int NumberOfRotations = 0;
float DeltaAngleChangeInFiveMinuts = 1.2;
float DeltaAngleChangeInTwentyFiveMinuts = 0.24;
float ClockHandRotation = 0;
// float DeltaAngleChangeInFifteenMinuts;
WorkState TimerState = WorkState::Work;

void AppLoop (RenderWindow& window, Vector2u size) 
{
    DrawTimerCircle(window, Vector2f(size.x/2, size.y/2), 200);
    DrawClockHand(window, 0, 200, 50);
}

int main()
{
    RenderWindow window(VideoMode(400, 400), "Pomodoro-Timer");
    while (window.isOpen())
    {
        Vector2u size = window.getSize();
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.clear(Color(27, 54, 93)); // rendering code only after this
        AppLoop(window, size);
        window.display();
    }
    return 0;
}