#include <iostream>

using namespace std;

int main()
{
    int eleven[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int countdown = 11;
    int twelve = 0;
    for(int i = 0; i < 11; i++)
    {
        cout << "Enter " << countdown << " more numbers: " << endl;
        countdown--;
        cin >> eleven[i];
    }
    twelve = ((3*eleven[0])+(eleven[1])+(3*eleven[2])+(eleven[3])+(3*eleven[4])+(eleven[5])+(3*eleven[6])+(eleven[7])+(3*eleven[8])+(eleven[9])+(3*eleven[10]))%10;
    cout << twelve;
    return 0;
}
