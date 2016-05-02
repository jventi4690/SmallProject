#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int numbers[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int used[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int ii = 0; ii != 20; ii++)
    {
        int random = rand()%20+0;
        if (numbers[random] == used[random])
        {

        }
        else
        {
            cout << numbers[random] << endl;
            used[random] = numbers[random];
        }
    }
    return 0;
}
