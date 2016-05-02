#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int numbers[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
    int used[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int ii = 0; ii != 20; ii++)
    {
        int random = rand()%100+0;
        if (numbers[random] == used[random])
        {
            ii = ii - 1;
        }
        else
        {
            cout << numbers[random] << endl;
            used[random] = numbers[random];
        }
    }
    return 0;
}
