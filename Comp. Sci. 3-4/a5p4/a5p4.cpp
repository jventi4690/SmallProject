#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int height = 0;
    int width = 0;
    int width1 = 0;
    int height1 = 0;
    cout << "How tall do you want your box: " << endl;
    cin >> height;
    cout << "How wide do you want your box: " << endl;
    cin >> width;
    width1 = width;
    height1 = height;
    if (height == 1)
    {
        while (width != 0)
        {
            cout << "*";
            width--;
        }
        return 0;
    }
    else if (width == 1)
    {
        while (height != 0)
        {
            cout << "*" << endl;
            height--;
        }
        return 0;
    }
    else
    {
        width1 = width;
        while (width1 != 0)
        {
            cout << "* ";
            width1 = width1 - 1;
        }
        cout << endl;
        height1 = height - 2;
        while (height1 != 0)
        {
            width1 = width;
            cout << "*";
            while (width1 != 2)
            {
                cout << "  ";
                width1 = width1 - 1;
            }
            cout << " *" << endl;
            height1 = height1 - 1;
        }
        width1 = width;
        while (width1 != 0)
        {
            cout << "* ";
            width1 = width1 - 1;
        }

        return 0;
    }
}
