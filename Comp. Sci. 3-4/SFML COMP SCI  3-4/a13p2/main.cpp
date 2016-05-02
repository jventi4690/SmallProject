#include <iostream>

using namespace std;

class SpaceShip
{
public:
    int fuel2;
    int distance2;
    void name();
    void fuelleft();
    void distance();
    string thread;
};
void SpaceShip::fuelleft()
{
    cout << "Your spaceship's fuel level is at" << fuel2;
}
void SpaceShip::name()
{
    cout << " on the 'ol trusty " << thread << endl;
}
void SpaceShip::distance()
{
    cout << "You have traveled a total distance of " << distance2 << endl;
}
int main()
{

    SpaceShip name;
    SpaceShip fuel;
    SpaceShip distance2;
    name.thread = "S.S. S";
    fuel.fuel2 = 10;

    name.name();
    fuel.fuelleft();
    return 0;
}
