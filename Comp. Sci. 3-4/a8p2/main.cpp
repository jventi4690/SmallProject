#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int rolls[6] = {0,0,0,0,0,0};
    int times = 0;
    cout << "How many time would you like to roll the dice: " << endl;
    cin >> times;
    for (int whyshaun = 0; whyshaun != times; whyshaun++)
    {
        int random = rand()%6 + 1;
        random = random - 1;
        rolls[random]++;
    }
    cout << "1 was rolled " << rolls[0] << " time(s)." << endl;
    cout << "2 was rolled " << rolls[1] << " time(s)." << endl;
    cout << "3 was rolled " << rolls[2] << " time(s)." << endl;
    cout << "4 was rolled " << rolls[3] << " time(s)." << endl;
    cout << "5 was rolled " << rolls[4] << " time(s)." << endl;
    cout << "6 was rolled " << rolls[5] << " time(s)." << endl;
    return 0;
}
