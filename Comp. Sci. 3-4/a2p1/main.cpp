#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float weight = 0;
    float height = 0;
    float BMI = 0;
    cout << "What is your weight in pounds: " << endl;
    cin >> weight;
    cout << "What is your height in inches: " << endl;
    cin >> height;
    BMI = (weight * 703) / (height * height);
    cout << "Your BMI is: " << BMI << endl;

    if (BMI < 18.5)
    {
        cout << "You are underweight.";
    }

    else if (BMI < 25)
    {
        cout << "You are averagly weighted.";
    }

    else if (BMI < 30)
    {
        cout << "You are overweight.";
    }

    else if (BMI > 30)
    {
        cout << "You are obese.";
    }
}
