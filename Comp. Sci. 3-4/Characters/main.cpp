#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    char symbols = 0;
    while (symbols != 64)
    {
        cout << num << "  ";
        cout << symbols << endl;
        symbols++;
        num++;
    }
    return 0;
}
