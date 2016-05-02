#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    int circleX = 0;
    int circleY = 0;
    int radius = 0;
    int squareX = 0;
    int squareY = 0;
    int height = 0;
    int width = 0;
    int triangle1X = 0;
    int triangle1Y = 0;
    int triangle2X = 0;
    int triangle2Y = 0;
    int triangle3X = 0;
    int triangle3Y = 0;
    cout << "What shape would you like? (1) Circle (2) Rectangle (3) Triangle" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter the x coordinate of the center: " << endl;
        cin >> circleX;
        cout << "Enter the y coordinate of the center: " << endl;
        cin >> circleY;
        cout << "Enter the radius: " << endl;
        cin >> radius;
    }
    if (choice == 2)
    {
        cout << "Enter the x coordinate of the top left point: " << endl;
        cin >> squareX;
        cout << "Enter the y coordinate of the top left point: " << endl;
        cin >> squareY;
        cout << "Enter the height: " << endl;
        cin >> height;
        cout << "Enter the width: " << endl;
        cin >> width;
    }
    if (choice == 3)
    {
        cout << "Enter the x of the first coordinate: " << endl;
        cin >> triangle1X;
        cout << "Enter the y of the first coordinate: " << endl;
        cin >> triangle1Y;
        cout << "Enter the x of the second coordinate: " << endl;
        cin >> triangle2X;
        cout << "Enter the y of the second coordinate: " << endl;
        cin >> triangle2Y;
        cout << "Enter the x of the third coordinate: " << endl;
        cin >> triangle3X;
        cout << "Enter the y of the third coordinate: " << endl;
        cin >> triangle3Y;
    }
    return 0;
}
