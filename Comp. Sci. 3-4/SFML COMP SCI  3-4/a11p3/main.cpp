#include <SFML/Graphics.hpp>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
int main()
{
    sf::VertexArray triangle(sf::Triangles,3);
    int input1 = 0;
    int input2 = 0;
    int input3 = 0;
    int input1sub1 = 0;
    int input2sub1 = 0;
    int input3sub1 = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int s = 0;
    int area = 0;
    cout << "Enter the fist corner's first position: " << endl;
    cin >> input1;
    cout << "Enter the fist corner's second position: " << endl;
    cin >> input1sub1;
    cout << "Enter the second corner's first position: " << endl;
    cin >> input2;
    cout << "Enter the second corner's second position: " << endl;
    cin >> input2sub1;
    cout << "Enter the third corner's first position: " << endl;
    cin >> input3;
    cout << "Enter the third corner's second position: " << endl;
    cin >> input3sub1;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Assaignment 11 Part 3");
    triangle[0].position = sf::Vector2f(input1, input1sub1);
    triangle[1].position = sf::Vector2f(input2, input2sub1);
    triangle[2].position = sf::Vector2f(input3, input3sub1);
    triangle[0].color = sf::Color(200,0,0);
    triangle[1].color = sf::Color(0,200,0);
    triangle[2].color = sf::Color(0,0,200);
    a = sqrt(((input2 - input1)^2)+((input2sub1 - input1sub1)^2));
    b = sqrt(((input3 - input2)^2)+((input3sub1 - input2sub1)^2));
    c = sqrt(((input3 - input1)^2)+((input3sub1 - input1sub1)^2));
    s = (a + b + c)/2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));
    if ((a^2) + (b^2) == (c^2))
    {
        cout << "It is a right triangle." << endl;
    }
    cout << "The area is " << area << endl;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(triangle);
        window.display();
    }

    return 0;
}
