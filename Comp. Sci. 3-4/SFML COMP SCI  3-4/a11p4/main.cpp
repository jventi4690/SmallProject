#include <SFML/Graphics.hpp>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
    int counter = 200;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Assaignment 11 Part 4");
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            sf::CircleShape Circle1(50);
            Circle1.setFillColor(sf::Color(0,200,150));
            Circle1.setPosition(counter,100);
            window.clear();
            window.draw(Circle1);
            window.display();
            if (counter != 500)
            {
                counter++;
            }
        }
    return 0;
}
