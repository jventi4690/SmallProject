#include <iostream>

using namespace std;

int main()
{
    float total = 0;
    float holder = 0;
    float interest = 0;
    float save = 0;
    float total2 = 0;
    float holder2 = 0;
    float interest2 = 0;
    float saved = 0;
    cout << "Enter your bank account total: " << endl;
    cin >> total;
    cout << "Enter the interest rate in percent: " << endl;
    cin >> interest;
    cout << "How much do you want to save each month: " << endl;
    cin >> save;
    total2 = total;
    interest2 = interest;
    holder2 = 0;
    cout << endl;
    cout << "-------------" << endl;
    cout << endl;
    for(int months = 0; months != 360; months++)
    {
        holder = (total / 100);
        holder = (holder * interest / 12);
        total = (holder + total);
        total = (total + save);
        cout << (total) << endl;
    }
    if (save == 0)
    {
        return 0;
    }
    else
    {
        for(int months2 = 0; months2 != 360; months2++)
        {
            holder2 = (total2 / 100);
            holder2 = (holder2 * interest2 / 12);
            total2 = (holder2 + total2);
        }
        cout << "You gained an extra $" << total2 << " from" << endl;
        cout << "your monthly saving. If you had not saved every month, you" << endl;
        cout << "would have made $" << (total - total2) << ".";
        return 0;
    }
}
