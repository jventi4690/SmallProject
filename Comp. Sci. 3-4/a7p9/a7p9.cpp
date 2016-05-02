#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    double throws = 0;
    double throws2 = 0;
    cout << "Enter the number of 'darts' you want to 'throw':" << endl;
    cin >> throws;
    srand(time(NULL));
    for (int countdown = throws; countdown >= 0; countdown--)
    {
        double x = rand() / (double)RAND_MAX;
        double y = rand() / (double)RAND_MAX;
        if (sqrt(pow(x,2)+pow(y,2)) <= 1)
        {
            throws2++;
        }
    }
    double pie = 4 * (throws2/throws);
    cout << pie;
    return 0;
}
