#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double sum = 0;
    double sum2 = 0;
    double input= 0;
    double left = 10;
    unsigned long long num1 = 0;
    unsigned long long num2 = 0;
    unsigned long long LCM = 1;
    unsigned long long big = 0;
    unsigned long long small = 0;
    unsigned long long total = 0;
    while (left > 0)
    {
        cout << "Enter a number or 0 to stop (it will stop after 10 otherwise): " << endl;
        cin >> input;
        if (input == 0)
        {
            cout << "  1" << endl;
            cout << "-----" << endl;
            cout << "  " << sum * 10 << endl;
            return 0;
        }
        else if (input > 0 or input < 0)
        {
            sum = sum + (1 / input);
            input = 0;
            left = left - 1;
        }
    }
    cout << "  1" << endl;
    cout << "-----" << endl;
    cout << sum * 10 << endl;

    return 0;

}

