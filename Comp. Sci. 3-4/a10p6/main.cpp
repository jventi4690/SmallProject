#include <iostream>
#include <math.h>

using namespace std;
void number(int);
int main()
{
    int num = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    number(num);
    return 0;
}
void number(int num)
{
    int reverse = 0;
    while(num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num % 10;
        num = num / 10;
    }
    cout << "Boom! Reversatized: " << reverse;
}
