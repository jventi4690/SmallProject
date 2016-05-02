#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int p = 0;
    int prime = 0;
    int prime2 = 1;
    int prime3 = 0;
    int YN = 0;
    int no = 0;
    while (p != 999)
    {
        prime = 0;
        prime2++;
        prime3 = 1;
        while (prime3 != (prime2 - 1))
        {
            prime3++;
            YN = prime2 %prime3;
            if (YN == 0)
            {
                no = 1;
                prime3 = (prime2 - 1);
            }
            else
            {
                no = 0;
                prime = 2;
            }
        }
        if (prime == 2)
        {
             if (no == 0)
             {
                p++;
                cout << prime2 << endl;
             }
        }
    }

    return 0;
}
