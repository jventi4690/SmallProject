#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double sum = 0;
    double sum2 = 0;
    double input = 0;
    double left = 10;
    while (left > 0)
    {
        cout << "Enter a number or 0 to stop (it will stop after 10 otherwise): " << endl;
        cin >> input;
        if (input == 0)
        {
        cout << sum;
        return 0;
        }
        else if (input > 0 or input < 0)
        {
        sum = sum + (1 / input);
        input = 0;
        left = left - 1;
        }


    }
    cout << sum;


    return 0;
}
