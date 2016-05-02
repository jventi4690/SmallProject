#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int number2 = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    number2 = number %2;
    if (number2 == 0)
    {
        cout << "The number is even.";
    }
        else
        {
            cout << "The number is not even.";
        }
    return 0;
}
