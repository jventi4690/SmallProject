#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double A;
    double B;
    double C;
    double angleA;
    double angleB;
    double angleC;
    cout<<"Enter the given sides of your triangle, use -1 to indicate the side you don't know."<<endl;
    cout<<"Enter the A side of your right triangle: " << endl;
    cin>>A;
    cout<<"Enter the B side of your right triangle: " << endl;
    cin>>B;
    cout<<"Enter the C side of your right triangle: " << endl;
    cin>>C;
    angleA = asin (A / C);
    angleB = asin (B / C);
    angleC = 90;
    if (A == -1)
    {
        A = sqrt ((C * C) - (B * B));
        angleA = asin (A / C) * 100;
        angleB = asin (B / C) * 100;
        angleC = 90;
        cout<<"The missing side of your triangle is: " << A << endl << "The angles of your triangle are: " << "%" << angleA << " " << "%" << angleB << " " << "%" << angleC;
    }

    if (B == -1)
    {
        B = sqrt ((C * C) - (A * A));
        angleA = asin (A / C) * 100;
        angleB = asin (B / C) * 100;
        angleC = 90;
        cout<<"The missing side of your trianlge is: "<<B<<endl << "The angles of your triangle are: " << "%" << angleA << " " << "%" << angleB << " " << "%" << angleC;
    }

    if (C == -1)
    {
        C = sqrt ((A * A) + (B * B));
        angleA = asin (A / C) * 100;
        angleB = asin (B / C) * 100;
        angleC = 90;
        cout<<"The missing side of your triangle is: "<<C<<endl<< "The angles of your triangle are: "<< "%" << angleA << " " << "%" << angleB << " " << "%" << angleC;
    }



    return 0;
}
