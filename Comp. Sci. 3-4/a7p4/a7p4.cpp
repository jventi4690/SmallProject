#include <iostream>

using namespace std;

int main()
{
    float total = 0;
    float holder = 0;
    float interest = 0;
    cout << "Enter your bank account total: " << endl;
    cin >> total;
    cout << "Enter the interest rate in percent: " << endl;
    cin >> interest;
    cout << endl;
    cout << "-------------" << endl;
    cout << endl;
    for(int years = 0; years != 30; years++)
    {
        holder = (total / 100);
        holder = (holder * interest);
        total = (holder + total);
        cout << total << endl;
    }
    return 0;
}
