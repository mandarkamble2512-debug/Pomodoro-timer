#include <SFML/Graphics.hpp>

using sf::CircleShape;
using sf::RenderWindow;
using sf::Vector2f;
using sf::Color;
using sf::ConvexShape;

void DrawTimerCircle (RenderWindow& window, Vector2f Pos, int Radius)
{
    CircleShape TimerCircle(Radius);
    TimerCircle.setFillColor(Color(220, 20, 60));
    TimerCircle.setPosition(Pos);
    TimerCircle.setOrigin(Vector2f(Radius, Radius));
    TimerCircle.setPointCount(35);
    window.draw(TimerCircle);
}

void DrawClockHand(RenderWindow& window, float angleInDegrees, float length, float baseWidth) {
    ConvexShape hand;
    hand.setPointCount(3);
    hand.setPoint(0, sf::Vector2f(baseWidth / 2.f, 0.f));
    hand.setPoint(1, sf::Vector2f(baseWidth, length));
    hand.setPoint(2, sf::Vector2f(0.f, length));
    hand.setOrigin(baseWidth / 2.f, length);
    hand.setPosition(200.f, 200.f);
    hand.setFillColor(Color(135, 169, 135));
    hand.setRotation(angleInDegrees);

    
    window.draw(hand);
}