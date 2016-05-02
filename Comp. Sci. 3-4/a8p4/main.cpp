#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int total = 0;
    int mean = 0;
    int grades2 = 0;
    cout << "Enter how many grades you would like to enter: " << endl;
    cin >> number;
    float answers[11];
    float grade[number];
    for(int yolo = 0; yolo != number; yolo++)
    {
        cout << "Enter a grade: " << endl;
        cin >> grades2;
        cout << endl;
        grade[yolo] = grades2;
    }
    cout << "  0-9: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 0 and grade[getthere] <= 9)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "10-19: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 10 and grade[getthere] <= 19)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "20-29: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 20 and grade[getthere] <= 29)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "30-39: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 30 and grade[getthere] <= 39)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "40-49: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 40 and grade[getthere] <= 49)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "50-59: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 50 and grade[getthere] <= 59)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "60-69: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 60 and grade[getthere] <= 69)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "70-79: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 70 and grade[getthere] <= 79)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "80-89: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 80 and grade[getthere] <= 89)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "90-99: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 90 and grade[getthere] <= 99)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "  100: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] > 99 and grade[getthere] < 101)
         {
             cout << "*";
         }
    }
    cout << endl;
    cout << "Hackz: ";
    for (int getthere = 0; getthere != number; getthere++)
    {
         if (grade[getthere] >= 101)
         {
             cout << "*";
         }
    }
    return 0;
}
