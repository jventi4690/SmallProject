#include <iostream>

using namespace std;

int make(int,int,int);
int main()
{
    int A = 0;
    int h = 0;
    int w = 0;
    int w2 = 0;
    int one = 0;
    char CASH = '$';
    while (w != -1)
    {
        cout << "Enter the height: " << endl;
        cin >> h;
        cout << "Enter the width: " << endl;
        cin >> w;
        cout << "Enter a character: " << endl;
        cin >> CASH;
        cout << endl;
        cout << endl;
        if (w == -1)
        {
            return 0;
        }
        w2 = w;
        while (h != 0)
        {
           A = make(h,w,one);
           if (A == 1)
           {
               cout << CASH;
               w--;
           }
           if (A == 2)
           {
               w = w2;
               cout << endl;
               h--;
           }
        }
        cout << endl;
        cout << endl;
    }
}
int make(int h, int w, int one)
{
    while (h != 0)
    {
        while (w != 0)
        {
            one = 1;
            return one;
        }
        one = 2;
        return one;
    }
}
