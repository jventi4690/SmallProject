#include <iostream>

using namespace std;

int main()
{
    float pointsp = 0;
    float points = 0;
    float grade = 0;
    cout << "How many points are possible on the test: " << endl;
    cin >> pointsp;
    cout << "How many points did you score on the test: " << endl;
    cin >> points;
    grade = (points / pointsp) * 100;

    if (grade < 60)
    {
        cout << "You got a F.";
    }

    else if (grade < 70)
    {
        cout << "You got a D.";
    }

    else if (grade < 80)
    {
        cout << "You got a C.";
    }

    else if (grade < 90)
    {
        cout << "You got a B.";
    }

    else if (grade <= 100)
    {
        cout << "You got a A.";
    }
}
