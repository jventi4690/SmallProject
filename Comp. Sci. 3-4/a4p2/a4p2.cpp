#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double amount = 0;
    double grades = 0;
    double gradetotal = 0;
    double ave = 0;
    while (grades != -1)







    {
        cout << "Enter a score and a -1 when your done: " << endl;
        cin >> grades;
        amount = amount + 1;
        gradetotal = gradetotal + grades;
        if (grades != -1)
        {
            ave = gradetotal / amount;
        }
    }
    cout << "Your average is " <<ave;


    return 0;
}
