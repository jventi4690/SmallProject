#include <iostream>
#include <math.h>

using namespace std;
bool prime(int);
int main()
{
    int number = 0;
    bool is = true;
    cout << "Enter a number: ";
    cin >> number;
    is = prime(number);
    if (is == true)
    {
        cout << number << " is a prime number.";
    }
    else
    {
        cout << number << " is not a prime number.";
    }
}
bool prime(int prime2)
{
    int prime3 = 0;
    prime3 = prime2 - 1;
    while (prime3 > 1)
    {
        if (prime2 % prime3 == 0)
        {
            return false;
        }
        prime3--;
    }
    return true;
}
