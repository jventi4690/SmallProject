#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double n = 0;
    double c = 0;
    double s = 0;
    cout << "Put in a number please " << endl;
    cin >> n;
    while (c != n)
    {
        cout << s << "+";
        c++;
        cout << c << "+";
        s = s + c;
    }

    cout << "=" << s;

    return 0;
}
