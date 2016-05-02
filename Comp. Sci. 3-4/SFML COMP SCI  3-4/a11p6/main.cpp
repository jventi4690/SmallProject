#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
using namespace std;
using namespace sf;
int main()
{
    float pi=3.14;
    int x=0;
    int y=0;
    int w=0;
    cout<<"Enter the X cord: "<<endl;
    cin>>x;
    cout<<"Enter the Y cord: "<<endl;
    cin>>y;
    cout<<"Enter the width: "<<endl;
    cin>>w;
    int x1=(w*cos((4*pi)/5));
    int y1=(w*sin((4*pi)/5));
    int x2=(w*cos((8*pi)/5));
    int y2=(w*sin((8*pi)/5));
    int x3=(w*cos((2*pi)/5));
    int y3=(w*sin((2*pi)/5));
    int x4=(w*cos((6*pi)/5));
    int y4=(w*sin((6*pi)/5));
    int x5=(w*cos((10*pi)/5));
    int y5=(w*sin((10*pi)/5));
    RenderWindow window(VideoMode(800, 600), "Assignment 11-5");
    ConvexShape Star;
    Star.setPointCount(5);
    Star.setPoint(0, Vector2f(x1,y1));
    Star.setPoint(1, Vector2f(x2,y2));
    Star.setPoint(2, Vector2f(x3,y3));
    Star.setPoint(3, Vector2f(x4,y4));
    Star.setPoint(4, Vector2f(x5,y5));
    Star.setPosition(x,y);
    Star.setFillColor(Color::Red);
    Star.rotate(54);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(Star);
        window.display();
    }

    return 0;
}
