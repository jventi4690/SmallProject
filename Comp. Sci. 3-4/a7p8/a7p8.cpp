#include <iostream>

using namespace std;

int main()
{
    int h = 0;
    int w = 0;
    cout << "Enter the height: " << endl;
    cin >> h;
    cout << "Enter the width: " << endl;
    cin >> w;
    for (int h2 = 0; h2 != h; h2++)
    {
        for(int times = 0; times != w; times++)
        {
            cout << "*";
        }
        cout << endl;
        h2 = h2 + 1;
        if (h2 == h)
        {
            break;
        }
        for (int times = 0; times != w; times++)
        {
            cout << "*";
            times = times + 1;
            if (times == w)
            {
                break;
            }
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
