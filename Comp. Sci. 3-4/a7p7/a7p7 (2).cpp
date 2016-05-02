#include <iostream>

using namespace std;

int main()
{
    char XD = 'O';
    int h = 0;
    int h2 = 0;
    int countdown2 = 0;
    cout << "Would you like to make a dimond or an X (X/D): " << endl;
    cin >> XD;
    if (XD == 'X')
    {
        cout << "Enter an odd number for the height: " << endl;
        cin >> h;
        countdown2 = h - 2;
        for (int countdown = 0; countdown != (h - 1) / 2; countdown++)
        {
            cout << endl;
            for (int times = 0; times != countdown; times++)
            {
                cout << " ";
            }
            cout << "*";
            for (int times2 = 0; times2 != countdown2; times2++)
            {
                cout << " ";
            }
            countdown2 = countdown2 - 2;
            cout << "*";
        }
        cout << endl;
        for (int h2 = (h - 1) / 2; h2 != 0; h2--)
        {
            cout << " ";
        }
        cout << "*";
    }
    countdown2 = 1;
    for (int countdown = (h - 1) / 2; countdown != 0; countdown--)
    {
        cout << endl;
        for (int times = 0; times != countdown - 1; times++)
        {
            cout << " ";
        }
        cout << "*";
        for (int times2 = 0; times2 != countdown2; times2++)
        {
            cout << " ";
        }
        countdown2 = countdown2 + 2;
        cout << "*";
    }
    cout << endl;

    if (XD == 'D')
    {
        cout << "Enter an odd number for the height: " << endl;
        cin >> h;
        countdown2 = h - 2;
        for (int h2 = (h - 1) / 2; h2 != 0; h2--)
        {
            cout << " ";
        }
        cout << "*";
        countdown2 = 1;
        for (int countdown = (h - 1) / 2; countdown != 1; countdown--)
        {
            cout << endl;
            for (int times = 0; times != countdown - 1; times++)
            {
                cout << " ";
            }
            cout << "*";
            for (int times2 = 0; times2 != countdown2; times2++)
            {
                cout << " ";
            }
            countdown2 = countdown2 + 2;
            cout << "*";
        }
        countdown2 = h - 2;
        for (int countdown = 0; countdown != (h - 1) / 2; countdown++)
        {
            cout << endl;
            for (int times = 0; times != countdown; times++)
            {
                cout << " ";
            }
            cout << "*";
            for (int times2 = 0; times2 != countdown2; times2++)
            {
                cout << " ";
            }
            countdown2 = countdown2 - 2;
            cout << "*";
        }
        cout << endl;
        for (int h2 = (h - 1) / 2; h2 != 0; h2--)
        {
            cout << " ";
        }
        cout << "*";
    }
    return 0;
}
