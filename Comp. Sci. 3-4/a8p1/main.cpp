#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int grade = 0;
    int total = 0;
    int mean = 0;
    cout << "Enter how many grades you would like to enter: " << endl;
    cin >> number;
    float grades[number];
    for(int yolo = 0; yolo != number; yolo++)
    {
        cout << "Enter a grade: " << endl;
        cin >> grade;
        cout << endl;
        grades[yolo] = grade;
    }
    for (int swag = 0; swag != number; swag++)
    {
        total = total + grades[swag];
    }
    mean = (total / number);
    cout << "The mean is : " << mean << endl;
    cout << endl;
    cout << "The grades below the mean are: " << endl;
    for (int hashtag = 0; hashtag != number; hashtag++)
    {
        if (grades[hashtag] < mean)
        {
            cout << grades[hashtag] << endl;
        }
    }
    return 0;
}
