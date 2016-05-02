#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num = 0;
    cout << "Enter five numbers: " << endl;
    cin >> num;
    num1 = num / 10000;
    num2 = (num / 1000) %10;
    num3 = (num / 100) %10;
    num4 = (num / 10) %10;
    num5 = (num %10);
    cout << num1 << "   " << num2 << "   " << num3 << "   " << num4 << "   " << num5;
    return 0;
}
