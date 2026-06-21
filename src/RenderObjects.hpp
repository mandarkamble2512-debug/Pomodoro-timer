#include <SFML/Graphics.hpp>

using sf::CircleShape;
using sf::RenderWindow;
using sf::Vector2f;
using sf::Color;

void DrawTimerCircle (RenderWindow& window, Vector2f Pos, int Radius)
{
    CircleShape TimerCircle(Radius);
    TimerCircle.setFillColor(Color(220, 20, 60));
    TimerCircle.setPosition(Pos);
    TimerCircle.setOrigin(Vector2f(Radius, Radius));
    TimerCircle.setPointCount(35);
    window.draw(TimerCircle);
}