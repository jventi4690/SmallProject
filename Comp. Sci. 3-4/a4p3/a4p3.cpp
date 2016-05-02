#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double amount = 0;
    double grades = 0;
    double gradetotal = 0;
    double ave = 0;
    double A = 0;
    double B = 0;
    double C = 0;
    double D = 0;
    double F = 0;
    while (grades != -1)
    {
        cout << "Enter a score out of 100 and enter -1 when your done: " << endl;
        cin >> grades;
        amount = amount + 1;
        gradetotal = gradetotal + grades;
        if (grades != -1)
        {
            ave = gradetotal / amount;
        }
        if (grades <= 59)
        {
            F = F + 1;
        }
        else if (grades <= 69)
        {
            D = D + 1;
        }
        else if (grades <= 79)
        {
            C = C + 1;
        }
        else if (grades <= 89)
        {
            B = B + 1;
        }
        else if (grades <= 99)
        {
            A = A + 1;
        }

    }
    cout << "The average is: " << ave << endl;
    cout << A << " kids got an A, " <<endl;
    cout<< B << " kids got a B, " <<endl;
    cout<< C << " kids got a C, " <<endl;
    cout<< D << " kids got a D," <<endl;
    cout<< F - 1 << " kids got an F.";


















    return 0;
}
