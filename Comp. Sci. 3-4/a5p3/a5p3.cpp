#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int rrr = 0;
    int r = 0;
    int rr = 0;
    cout << "Enter the number of rows"<<endl;
    cin >> rrr;
    r = rrr;
    while (r > 0)
    {
        rr = rrr-r+1;
        while (rr != 0)
        {
            cout << r << "   ";
            rr--;
        }
        r--;
        cout << endl;
    }




    return 0;
}
