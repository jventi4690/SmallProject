#include <iostream>

using namespace std;

int main()
{
    char XD = 'O';
    int h = 0;
    int h3 = 0;
    cout << "Would you like to make a dimond or an X (X/D): " << endl;
    cin >> XD;
    if (XD == 'X')
    {
        cout << "Enter an odd number for the height: " << endl;
        cin >> h;
        for (int h2 = h; h2 != 0; h2--)
        {
            h3 = (h - h2) + 1;
            if (h3 != 0)
            {
                while (h3 > 0)
                {
                    cout << " ";
                    h3--;
                }
                cout << "*" << endl;
            }
        }
    }
    if (XD == 'D')
    {
        cout << "Enter an odd number for the height: " << endl;
        cin >> h;
    }
    return 0;
}
