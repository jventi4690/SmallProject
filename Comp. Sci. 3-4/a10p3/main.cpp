#include <iostream>
#include <math.h>
using namespace std;
void prime(int);
int main()
{
    int hold = 0;
    cout << "Enter a number: " << endl;
    cin >> hold;
    cout << hold << " = ";
    prime(hold);
}
void prime(int hold)
{
    int ans = 0;
    for (int num = 2; num <= hold; num++)
    {
        while (hold % num==0)
        {
            hold/=num;
            ans=1;
            cout << num;
            if (num <= hold)
            {
                cout << " * ";
            }
        }
    }
}
