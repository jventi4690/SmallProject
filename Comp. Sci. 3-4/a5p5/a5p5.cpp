#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double number = 0;
    double counter = 0;
    double number2 = 1;
    double num = 0;
    double sum = 1;
    cout << "Input a number: " << endl;
    cin >> number;
    if (number == 0)
    {
        cout << "Your dumb.";
        return 0;
    }
    while (counter != number)
    {
        counter++;
        cout << counter;
        cout << "!=";
        number2 = number - counter;
        while (number2 != (number-1))
        {
            cout << num << "*";
            number2++;
            num++;
        }
        sum=(sum*counter);
        num = 1;
        cout <<counter<< "="<<sum;
        cout << endl;
    }


    return 0;
}
