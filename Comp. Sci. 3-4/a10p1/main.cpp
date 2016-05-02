#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int smallest(int,int,int);
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int low = 0;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;
    low = smallest(num1, num2, num3);
    cout << "The lowest number is " << low;
}
int smallest(int num1, int num2, int num3)
{
    int low = 0;
    if (num1 < num2 and num1 < num3)
    {
        low = num1;
        return low;
    }
    if (num2 < num1 and num2 < num3)
    {
        low = num2;
        return low;
    }
    if (num3 < num1 and num3 < num2)
    {
        low = num3;
        return low;
    }
}
