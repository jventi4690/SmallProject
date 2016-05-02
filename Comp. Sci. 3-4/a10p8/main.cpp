#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int cntr = 0;
    cout << "This will literally go on forever if you don't stop it..." << endl;
    while (cntr != 1)
    {
        Beep(294,250);
        Beep(294,250);
        Beep(294,500);
        Beep(493,500);
        Beep(440,500);
        Beep(392,500);
        Beep(294,500);
        Sleep(1000);
        Beep(294,250);
        Beep(294,250);
        Beep(294,500);
        Beep(494,500);
        Beep(440,500);
        Beep(392,500);
        Beep(330,500);
        Sleep(1000);
        Beep(330,500);
        Beep(262,500);
        Beep(494,500);
        Beep(440,500);
        Beep(349,500);
        Beep(600,500);
        Beep(600,500);
        Beep(600,500);
        Beep(294,500);
        Beep(294,500);
        Beep(262,500);
        Beep(440,500);
        Beep(494,500);
        Beep(440,500);
        Sleep(1000);
    }
    return 0;
}
