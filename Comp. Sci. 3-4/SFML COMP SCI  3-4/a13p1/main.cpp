#include <iostream>

using namespace std;

class SpaceShip
{
public:
    int fuel2;
    void name();
    void blastoff();
    string thread;
};
void SpaceShip::blastoff()
{
    cout << "Your spaceship's fuel level is " << fuel2;
}
void SpaceShip::name()
{
    cout << " on the 'ol trusty " << thread << endl;
}
int main()
{
    SpaceShip name;
    SpaceShip fuel;
    name.thread = "S.S. S";
    fuel.fuel2 = 10;
    cout << "Your currently have enough fuel for " << fuel.fuel2 << " more jumps." << endl;
    name.name();
    fuel.blastoff();
    return 0;
}
