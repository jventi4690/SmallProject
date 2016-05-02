#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double A = 0;
    double B = 0;
    double C = 0;
    double x = 0;
    double x2 = 0;
    double desc = 0;
    double a1 = 0;
    double a2 = 0;
    cout<<"Enter A"<<endl;
    cin>>A;
    cout<<"Enter B"<<endl;
    cin>>B;
    cout<<"Enter C"<<endl;
    cin >> C;
    x = (-B+sqrt((B*B)-4*A*C)/(2*A));
    x2 = (-B-sqrt((B*B)-4*A*C)/(2*A));
    desc = ((B*B)-4*A*C);
    if (desc > 0)
    {
        cout << "Real roots are the deal roots, haha " << x;
    }
    if (desc == 0)
    {
        cout << "Double root? more like trouble roots! " << x2;
    }
    if (desc < 0)
    {
        a1 = (-B)/2;
        a2 = (-(B*B)-4*A*C);
        cout<<"imaginary roots, i dont have a rhyme, and thats a crime!!! " << endl;
        cout<<"The solutions are: " << endl;
        cout<<a1 << endl;
        cout<<"---" << endl;
        cout<<" 2" << endl;
        cout<<" " << endl;
        cout<<a2 << endl;
        cout<<"---" << endl;
        cout<<" 2";
    }
    return 0;
}
