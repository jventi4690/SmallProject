#include <iostream>

using namespace std;

int main()
{
    float milesatstart = 0;
    float milesatend = 0;
    float milestraveled = 0;
    float gallonsatstart = 0;
    float gallonsatend = 0;
    float gallonsused = 0;
    float mpg = 0;
    cout << "How many miles were on your odometer when you started driving: " << endl;
    cin >> milesatstart;
    cout << "How many miles were on your odometer when you ended your drive: " << endl;
    cin >> milesatend;
    milestraveled = milesatend - milesatstart;
    cout << "How many gallons of gas did you have when you started driving: " << endl;
    cin >> gallonsatstart;
    cout << "How many gallons of gas did you have when you ended your drive: " << endl;
    cin >> gallonsatend;
    gallonsused = gallonsatstart - gallonsatend;
    mpg = milestraveled / gallonsused;
    cout << "You traveled at " << mpg << " mpg, used " << gallonsused << " gallons of gas, and traveled " << milestraveled << " miles." << endl;
}
