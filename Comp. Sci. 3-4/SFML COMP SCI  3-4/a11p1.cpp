#include <SFML/Graphics.hpp>
#include <math.h>
int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Assaignment 11 Part 1");

    sf::CircleShape Circle1(50);
    Circle1.setFillColor(sf::Color(200,0,0));
    Circle1.setPosition(100,100);

    sf::CircleShape Circle2(100);
    Circle2.setFillColor(sf::Color(0,200,0));
    Circle2.setPosition(100,200);

    sf::CircleShape Circle3(25);
    Circle3.setFillColor(sf::Color(0,0,200));
    Circle3.setPosition(300,300);

    sf::CircleShape Circle4(10);
    Circle4.setFillColor(sf::Color(200,0,200));
    Circle4.setPosition(50,50);

    sf::RectangleShape Rectangle1(sf::Vector2f(100,200));
    Rectangle1.setSize(sf::Vector2f(100,100));
    Rectangle1.setFillColor(sf::Color(150,75,100));
    Rectangle1.setPosition(800,800);

    sf::RectangleShape Rectangle2(sf::Vector2f(100,200));
    Rectangle2.setSize(sf::Vector2f(50,100));
    Rectangle2.setFillColor(sf::Color(50,25,100));
    Rectangle2.setPosition(600,725);

    sf::RectangleShape Rectangle3(sf::Vector2f(100,200));
    Rectangle3.setSize(sf::Vector2f(100,75));
    Rectangle3.setFillColor(sf::Color(100,50,0));
    Rectangle3.setPosition(700,600);

    sf::RectangleShape Rectangle4(sf::Vector2f(100,200));
    Rectangle4.setSize(sf::Vector2f(25,25));
    Rectangle4.setFillColor(sf::Color(10,50,100));
    Rectangle4.setPosition(550,800);

    sf::CircleShape Triangle1(50,3);
    Triangle1.setFillColor(sf::Color(100,50,50));
    Triangle1.setPosition(800,100);

    sf::CircleShape Triangle2(75,3);
    Triangle2.setFillColor(sf::Color(25,150,75));
    Triangle2.setPosition(700,150);

    sf::CircleShape Triangle3(100,3);
    Triangle3.setFillColor(sf::Color(75,25,25));
    Triangle3.setPosition(500,25);

    sf::CircleShape Triangle4(25,3);
    Triangle4.setFillColor(sf::Color(0,100,25));
    Triangle4.setPosition(700,100);

    sf::RectangleShape Line1(sf::Vector2f(100,200));
    Line1.setSize(sf::Vector2f(100,1));
    Line1.setFillColor(sf::Color(100,0,25));
    Line1.setPosition(100,800);

    sf::RectangleShape Line2(sf::Vector2f(100,200));
    Line2.setSize(sf::Vector2f(1,150));
    Line2.setFillColor(sf::Color(25,0,100));
    Line2.setPosition(250,800);

    sf::RectangleShape Line3(sf::Vector2f(100,200));
    Line3.setSize(sf::Vector2f(1,50));
    Line3.setFillColor(sf::Color(50,100,25));
    Line3.setPosition(50,750);

    sf::RectangleShape Line4(sf::Vector2f(100,200));
    Line4.setSize(sf::Vector2f(200,1));
    Line4.setFillColor(sf::Color(25,50,0));
    Line4.setPosition(50,650);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(Circle1);
        window.draw(Circle2);
        window.draw(Circle3);
        window.draw(Circle4);
        window.draw(Rectangle1);
        window.draw(Rectangle2);
        window.draw(Rectangle3);
        window.draw(Rectangle4);
        window.draw(Triangle1);
        window.draw(Triangle2);
        window.draw(Triangle3);
        window.draw(Triangle4);
        window.draw(Line1);
        window.draw(Line2);
        window.draw(Line3);
        window.draw(Line4);
        window.display();
    }

    return 0;
}
