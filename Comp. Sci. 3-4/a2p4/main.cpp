#include <iostream>

using namespace std;

int main()
{
    int firstnumber = 0;
    int secondnumber = 0;
    int outcome = 0;
    cout << "Enter one number: " << endl;
    cin >> firstnumber;
    cout << "Enter a second number: " << endl;
    cin >> secondnumber;
    outcome = firstnumber %secondnumber;
    if (outcome == 0)
    {
        cout << "The first number is a multiple of the second.";
    }
        else
        {
            cout << "The first number is not a multiple of the second.";
        }
    return 0;
}
