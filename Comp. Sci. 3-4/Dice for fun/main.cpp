#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int time = 0;
    int numbers[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for (int number = 0; number != 20; number++)
    {
        int random = rand()%20+1;
        number[random] =
    }
    return 0;
}
