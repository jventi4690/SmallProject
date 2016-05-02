#include <iostream>

using namespace std;

int main()
{
    int total2 = 0;
    int num = 0;
    for (int total=0; total != 70000; num++)
    {
        total = num * 7;
        total2 = total2 + total;
    }
    cout << total2 << endl;
    return 0;
}
