#include <iostream>

using namespace std;

int main()
{
    int YN = 0;
    int YN2 = 0;
    cout << "Is Mitchell dumb? (1 = yes/ 2 = no)" << endl;
    cin >> YN;
    cout << endl;
    while (YN != 1)
    {
        cout << "Wrong." << endl;
        cout << "Try again." << endl;
        cout << "Is Mitchell dumb?" << endl;
        cin >> YN;
    }
    cout << "Great job!" << endl;
    cout << "Is Jude dumb? (1 = yes/ 2 = no)" << endl;
    cin >> YN;
    cout << endl;
    while (YN != 2)
    {
        cout << "Wrong." << endl;
        cout << "Try again." << endl;
        cout << "Is Jude dumb?" << endl;
        cin >> YN;
    }
    cout << "Great job!" << endl;
    cout << "Is Tommy dumb? (1 = yes/ 2 = no)" << endl;
    cin >> YN;
    cout << endl;
    while (YN != 1)
    {
        cout << "Wrong." << endl;
        cout << "Try again." << endl;
        cout << "Is Tommy dumb?" << endl;
        cin >> YN;
    }
    cout << "Great job!" << endl;
    cout << "Is Xavier dumb? (1 = yes/ 2 = no)" << endl;
    cin >> YN;
    cout << endl;
    while (YN != 1)
    {
        cout << "Wrong." << endl;
        cout << "Try again." << endl;
        cout << "Is Xavier dumb?" << endl;
        cin >> YN;
    }
    cout << "Great job!" << endl;
    cout << "Is Alex dumb? (1 = yes/ 2 = no)" << endl;
    cin >> YN;
    cout << endl;
    while (YN != 1)
    {
        cout << "Wrong." << endl;
        cout << "Try again." << endl;
        cout << "Is Alex dumb?" << endl;
        cin >> YN;
    }
    cout << "Great job!" << endl;
    return 0;
}
