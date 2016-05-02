#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a1 = 1;
   int a2 = 0;
   int a3 = 0;
   int num = 0;
   int total = 0;
   int counter = 12;
   cout<<"Enter 12 numbers and a -1 for the missing one."<<endl;
   while(a1!=13)
   {
       cout<<"Enter " << counter << " more numbers: "<<endl;
       cin>>num;
       counter--;
       if(num!=-1)
       {
           a3=a1%2;
           if(a3==0)
           {
               total=total+num;
           }
           else
           {
               total=total+(3*num);
           }
           a1++;
       }
       else
       {
           a1++;
       }
   }
   for(int b1=0; b1!=10; b1++)
   {
       total=total+b1;
       a2=total;
       a2=a2%10;
       if(a2==0)
       {
           cout<< endl << "The missing digit is: "<< b1 <<endl;
       }
       else
       {
           total=total-b1;
       }
   }
}
