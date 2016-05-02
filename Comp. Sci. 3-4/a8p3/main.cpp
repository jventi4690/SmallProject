#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int queens[8] = {0,0,0,0,0,0,0,0};
    for (int countdown = 0; countdown != 8; countdown++)
    {
    cout << "Enter 8 numbers ranging from 0-7 (One at a time. 0 = slot 1, 1 = slot 2, etc.): " << endl;
    cin >> queens[countdown];
    }
    for (int st = 0; st != 8; st++)
    {
        for (int countdown = 0; countdown != queens[st]; countdown++)
        {
            cout << "*";
        }
        cout << "Q";
        for (int cd = 0; cd != 7 - queens[st]; cd++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
