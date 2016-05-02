#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;
int main()
{
    int side = 0;
    int numchoice = 0;
    cout << "Left(1) or right(2) side: " << endl;
    cin >> side;
    cout << "Enter a number between 0-9: " << endl;
    cin >> numchoice;
    sf::RenderWindow window(sf::VideoMode(800,600),"a12p4");
    sf::RectangleShape bar(sf::Vector2f(800,600));
    bar.setFillColor(sf::Color::Red);
    bar.setPosition(0,0);


    sf::RectangleShape line1(sf::Vector2f(120,50));
    line1.setSize(Vector2f(70,300));
    line1.setFillColor(sf::Color::White);
    line1.setPosition(100,150);

    sf::RectangleShape line2(sf::Vector2f(120,50));
    line2.setSize(Vector2f(70,300));
    line2.setFillColor(sf::Color::White);
    line2.setPosition(175,150);

    sf::RectangleShape line3(sf::Vector2f(120,50));
    line3.setSize(Vector2f(70,300));
    line3.setFillColor(sf::Color::White);
    line3.setPosition(250,150);

    sf::RectangleShape line4(sf::Vector2f(120,50));
    line4.setSize(Vector2f(70,300));
    line4.setFillColor(sf::Color::White);
    line4.setPosition(325,150);

    sf::RectangleShape line5(sf::Vector2f(120,50));
    line5.setSize(Vector2f(70,300));
    line5.setFillColor(sf::Color::White);
    line5.setPosition(400,150);

    sf::RectangleShape line6(sf::Vector2f(120,50));
    line6.setSize(Vector2f(70,300));
    line6.setFillColor(sf::Color::White);
    line6.setPosition(475,150);

    sf::RectangleShape line7(sf::Vector2f(120,50));
    line7.setSize(Vector2f(70,300));
    line7.setFillColor(sf::Color::White);
    line7.setPosition(550,150);


    sf::RectangleShape Lline1(sf::Vector2f(120,50));
    Lline1.setSize(Vector2f(70,300));
    Lline1.setFillColor(sf::Color::Black);
    Lline1.setPosition(100,150);

    sf::RectangleShape Lline2(sf::Vector2f(120,50));
    Lline2.setSize(Vector2f(70,300));
    Lline2.setFillColor(sf::Color::Black);
    Lline2.setPosition(175,150);

    sf::RectangleShape Lline3(sf::Vector2f(120,50));
    Lline3.setSize(Vector2f(70,300));
    Lline3.setFillColor(sf::Color::Black);
    Lline3.setPosition(250,150);

    sf::RectangleShape Lline4(sf::Vector2f(120,50));
    Lline4.setSize(Vector2f(70,300));
    Lline4.setFillColor(sf::Color::Black);
    Lline4.setPosition(325,150);

    sf::RectangleShape Lline5(sf::Vector2f(120,50));
    Lline5.setSize(Vector2f(70,300));
    Lline5.setFillColor(sf::Color::Black);
    Lline5.setPosition(400,150);

    sf::RectangleShape Lline6(sf::Vector2f(120,50));
    Lline6.setSize(Vector2f(70,300));
    Lline6.setFillColor(sf::Color::Black);
    Lline6.setPosition(475,150);

    sf::RectangleShape Lline7(sf::Vector2f(120,50));
    Lline7.setSize(Vector2f(70,300));
    Lline7.setFillColor(sf::Color::Black);
    Lline7.setPosition(550,150);

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
