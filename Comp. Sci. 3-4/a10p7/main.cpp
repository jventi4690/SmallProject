#include <iostream>
#include <math.h>
using namespace std;
int divi(int,int);
int print(int);
int equa(int);
int main()
{
    int p = 0;
    int counter = 0;
    int x = 0;
    int y = 0;
    while (counter < 1001)
    {
        x = divi(x,y);
        if (x != 0)
        {
            cout << x << endl;
            counter++;
        }
    }
    return 0;
}
int divi(int x, int y)
{
    x++;
    x++;
    y = equa(x);

    if (y == 0)
    {
        return x;
    }
    else
    {
        return 0;
    }
}
int equa(int p)
{
    int x = 0;
    int y = 0;
    x = pow(2,(p-1));
    y = (pow(2,p))-1;
    p = x * y;
}
