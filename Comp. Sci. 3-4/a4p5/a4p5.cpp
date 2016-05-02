#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long num1 = 0;
    unsigned long long num2 = 0;
    unsigned long long LCM = 1;
    unsigned long long GCD = 1;
    unsigned long long big = 0;
    unsigned long long small = 0;
    unsigned long long total = 0;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    if (num1 > num2)
    {
        big = num1;
        small = num2;
    }
    else
    {
        big = num2;
        small = num1;
    }
    while (LCM != 0)
    {
        total = total + big;
        LCM = total %small;
        if (LCM == 0)
        {
            cout << "The LCM is " << total << endl;
            cout<<" "<<endl;
        }

    }
    while (GCD != 0)
    {
        GCD = big %small;
        if (GCD == 0)
        {
            cout << "the GCD is " << small << endl;
            break;
        }
            else
            {
                big = small;
                small = GCD;
            }
    }
    return 0;
}
