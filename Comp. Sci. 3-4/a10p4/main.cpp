#include <iostream>
#include <iomanip>

using namespace std;
int converter1(double,double,double);
int converter2(double,double,double);
int main()
{
    double x = 0;
    double y = 0;
    double z = 0;
    double C = 0;
    double a = 32;
    double b = 32;
    double c = 32;
    int choice = 0;
    cout << "Do you want C-F (1) or F-C (2): " << endl;
    cin >> choice;
    if (choice == 1)
    {
        C = converter1 (x,y,z);
    }
    if (choice == 2)
    {
        C = converter2 (a,b,c);
    }
}
int converter1(double x,double y,double z)
{
    double holder = x;
    double counter = y;
    double changed = z;
    while (counter < 101)
    {
        changed = holder;
        changed = ((changed * 9) / 5) + 32;
        cout << " " << holder << " | " << changed << " " << endl;
        counter++;
        holder++;
    }
}
int converter2(double a,double b,double c)
{
    double holder2 = a;
    double counter2 = b;
    double changed2 = c;
    while (counter2 < 213)
    {
        changed2 = holder2;
        changed2 = ((changed2 - 32) * 5) / 9;
        cout << " " << holder2 << " | " << changed2 << " " << endl;
        counter2++;
        holder2++;
    }
}

