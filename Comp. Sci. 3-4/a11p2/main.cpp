#include <SFML/Graphics.hpp>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int counter = 0;
    cout << "How many circles: " << endl;
    cin >> counter;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Assaignment 11 Part 2");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            window.close();
        }
        if(counter != 0)
        {
            int diameter = rand()%100 + 1;
            int color1 = rand()%200 + 1;
            int color2 = rand()%200 + 1;
            int color3 = rand()%200 + 1;
            int pos1 = rand()%700 + 1;
            int pos2 = rand()%500 + 1;
            sf::CircleShape Circle1(diameter);
            Circle1.setFillColor(sf::Color(color1,color2,color3));
            Circle1.setPosition(pos1,pos2);
            window.draw(Circle1);
            window.display();
            counter--;
        }
    }
    return 0;
}
