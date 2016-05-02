#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    int user = 0;
    int dumb = 0;
    cout << "Enter a number: " << endl;
    cin >> user;
    cout << endl;
    cout << "-----------------" << endl;
    cout << endl;
    if (user == 1)
    {
        cout << "0";
        return 0;
    }
    else
    {
        cout << num1 << endl;
        cout << num2 << endl;
        for (int total = 2; total != user; total++)
            {
                num3 = (num1 + num2);
                cout << num3 << endl;
                total = total + 1;
                if (total == user)
                    {
                        return 0;
                    }
                num1 = (num2 + num3);
                cout << num1 << endl;
                total = total + 1;
                if (total == user)
                    {
                        return 0;
                    }
                num2 = num3 + num1;
                cout << num2 << endl;
            }
    }
    return 0;
}
