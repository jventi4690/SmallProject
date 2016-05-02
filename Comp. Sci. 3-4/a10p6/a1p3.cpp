#include <iostream>

using namespace std;

int main()

{
    float radius = 0;
    float circumference = 0;
    float diameter = 0;
    float area = 0;
    cout << "Enter a radius: " << endl;
    cin >> radius;
    diameter = radius * 2;
    circumference = 3.14159 * diameter;
    area = 3.14159 * (radius * radius);
    cout << "The diameter is: " << diameter << endl;
    cout << "The circumference is: " << circumference << endl;
    cout << "The area is: " << area << endl;






}
