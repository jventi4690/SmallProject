#include <iostream>

using namespace std;

int main()
{
    int h = 0;
    int v = 0;
    int stop = 0;
    int total = 0;
    cout << "Enter a number: " << endl;
    cin >> h;
    cout << "Enter a second number: " << endl;
    cin >> v;
    cout << endl;
    stop = (h * v);
    h++;
    for (int holder = 1; total != stop; holder++)
    {
        for (int yay = 1; yay != h; yay++)
        {
            total = yay * holder;
            cout << total << " ";
        }
        cout << endl;
    }
    return 0;
}
