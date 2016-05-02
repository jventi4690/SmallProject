#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace sf;
using namespace std;
int main()
{
    int side = 0;
    int x = 0;
    long long numchoice = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int num8 = 0;
    int num9 = 0;
    int num10 = 0;
    int num11 = 0;
    int num12 = 0;
    int num13 = 0;
    int num14 = 0;
    cout << "Enter 12 numbers between 0-9: " << endl;
    cin >> numchoice;
    sf::RenderWindow window(sf::VideoMode(800,600),"a12p4");
    sf::RectangleShape bar(sf::Vector2f(800,600));
    bar.setFillColor(sf::Color::Red);
    bar.setPosition(0,0);
    num1 = numchoice % 10;
    num2 = numchoice / 10 % 10;
    num3 = numchoice / 100 % 10;
    num4 = numchoice / 1000 % 10;
    num5 = numchoice / 10000 % 10;
    num6 = numchoice / 100000 % 10;
    num7 = numchoice / 1000000 % 10;
    num8 = numchoice / 10000000 % 10;
    num9 = numchoice / 100000000 % 10;
    num10 = numchoice / 1000000000 % 10;
    num11 = numchoice / 10000000000 % 10;
    num12 = numchoice / 100000000000 % 10;
    cout << num14 << num13 << num12 << num11 << num10 << num9 << num8 << num7 << num6 << num5 << num4 << num3 << num2 << num1;

    sf::RectangleShape line1(sf::Vector2f(120,50));
    line1.setSize(Vector2f(5,100));
    line1.setFillColor(sf::Color::White);
    line1.setPosition(x+0,150);

    sf::RectangleShape line2(sf::Vector2f(120,50));
    line2.setSize(Vector2f(5,100));
    line2.setFillColor(sf::Color::White);
    line2.setPosition(x+5,150);

    sf::RectangleShape line3(sf::Vector2f(120,50));
    line3.setSize(Vector2f(5,100));
    line3.setFillColor(sf::Color::White);
    line3.setPosition(x+10,150);

    sf::RectangleShape line4(sf::Vector2f(120,50));
    line4.setSize(Vector2f(5,100));
    line4.setFillColor(sf::Color::White);
    line4.setPosition(x+15,150);

    sf::RectangleShape line5(sf::Vector2f(120,50));
    line5.setSize(Vector2f(5,100));
    line5.setFillColor(sf::Color::White);
    line5.setPosition(x+20,150);

    sf::RectangleShape line6(sf::Vector2f(120,50));
    line6.setSize(Vector2f(5,100));
    line6.setFillColor(sf::Color::White);
    line6.setPosition(x+25,150);

    sf::RectangleShape line7(sf::Vector2f(120,50));
    line7.setSize(Vector2f(5,100));
    line7.setFillColor(sf::Color::White);
    line7.setPosition(x+30,150);


    sf::RectangleShape Lline1(sf::Vector2f(120,50));
    Lline1.setSize(Vector2f(5,100));
    Lline1.setFillColor(sf::Color::Black);
    Lline1.setPosition(x+0,150);

    sf::RectangleShape Lline2(sf::Vector2f(120,50));
    Lline2.setSize(Vector2f(5,100));
    Lline2.setFillColor(sf::Color::Black);
    Lline2.setPosition(x+5,150);

    sf::RectangleShape Lline3(sf::Vector2f(120,50));
    Lline3.setSize(Vector2f(5,100));
    Lline3.setFillColor(sf::Color::Black);
    Lline3.setPosition(x+10,150);

    sf::RectangleShape Lline4(sf::Vector2f(120,50));
    Lline4.setSize(Vector2f(5,100));
    Lline4.setFillColor(sf::Color::Black);
    Lline4.setPosition(x+15,150);

    sf::RectangleShape Lline5(sf::Vector2f(120,50));
    Lline5.setSize(Vector2f(5,100));
    Lline5.setFillColor(sf::Color::Black);
    Lline5.setPosition(x+20,150);

    sf::RectangleShape Lline6(sf::Vector2f(120,50));
    Lline6.setSize(Vector2f(5,100));
    Lline6.setFillColor(sf::Color::Black);
    Lline6.setPosition(x+25,150);

    sf::RectangleShape Lline7(sf::Vector2f(120,50));
    Lline7.setSize(Vector2f(5,100));
    Lline7.setFillColor(sf::Color::Black);
    Lline7.setPosition(x+30,150);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(bar);
        if (side == 1)
        {
            if (numchoice == 0)
            {
                window.draw(line1);
                window.draw(line2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(Lline7);
            }
            else if (numchoice == 1)
            {
                window.draw(line1);
                window.draw(line2);
                window.draw(Lline3);
                window.draw(Lline4);
                window.draw(line5);
                window.draw(line6);
                window.draw(Lline7);
            }
            else if (numchoice == 2)
            {
                window.draw(line1);
                window.draw(line2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
            else if (numchoice == 3)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(Lline7);
            }
            else if (numchoice == 4)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(line3);
                window.draw(line4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
            else if (numchoice == 5)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(line5);
                window.draw(line6);
                window.draw(Lline7);
            }
            else if (numchoice == 6)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
            else if (numchoice == 7)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(Lline4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
            else if (numchoice == 8)
            {
                window.draw(line1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(Lline5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
            else if (numchoice == 9)
            {
                window.draw(line1);
                window.draw(line2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(Lline7);
            }
        }
        else if (side == 2)
        {
            if (numchoice == 0)
            {
                window.draw(Lline1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(line7);
            }
            else if (numchoice == 1)
            {
                window.draw(Lline1);
                window.draw(Lline2);
                window.draw(line3);
                window.draw(line4);
                window.draw(Lline5);
                window.draw(Lline6);
                window.draw(line7);
            }
            else if (numchoice == 2)
            {
                window.draw(Lline1);
                window.draw(Lline2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(line7);
            }
            else if (numchoice == 3)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(line3);
                window.draw(line4);
                window.draw(line5);
                window.draw(Lline6);
                window.draw(line7);
            }
            else if (numchoice == 4)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(Lline3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(line7);
            }
            else if (numchoice == 5)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(Lline5);
                window.draw(Lline6);
                window.draw(line7);
            }
            else if (numchoice == 6)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(line5);
                window.draw(line6);
                window.draw(line7);
            }
            else if (numchoice == 7)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(line3);
                window.draw(line4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(line7);
            }
            else if (numchoice == 8)
            {
                window.draw(Lline1);
                window.draw(line2);
                window.draw(line3);
                window.draw(Lline4);
                window.draw(line5);
                window.draw(line6);
                window.draw(line7);
            }
            else if (numchoice == 9)
            {
                window.draw(Lline1);
                window.draw(Lline2);
                window.draw(Lline3);
                window.draw(line4);
                window.draw(Lline5);
                window.draw(line6);
                window.draw(line7);
            }
        }
        window.display();
    }
    return 0;
}
