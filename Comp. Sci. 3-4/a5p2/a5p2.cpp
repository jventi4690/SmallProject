#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int number = rand()%1000 + 1;
    int guess = 0;
    int guesses = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int gus1 = 0;
    int gus2 = 0;
    int gus3 = 0;
    cout << "Lets play a game!" << endl;

    while(guess != number)
    {
        cout << "I have my number, so what is your guess?" << endl;
        cin >> guess;
        num1 = number / 100;
        num2 = (number / 10) %10;
        num3 = (number %10);
        gus1 = guess / 100;
        gus2 = (guess / 10) %10;
        gus3 = (guess  %10);
        guesses = guesses + 1;

        if(guess == number)
        {
            cout << "Congrats! You won!" << endl;
            cout << "You took " << guesses << " guesses.";
            number = 0;
            return 0;
        }
        else if(guess > number)
        {
            if (gus1 == num1)
            {
                num1 = gus1;
            }
            else if(gus1 != num1)
            {
                num1 = 0;
            }
            if (gus2 == num2)
            {
                num2 = gus2;
            }
            else if(gus2 != num2)
            {
                num2 = 0;
            }
            if (gus3 == num3)
            {
                num3 = gus3;
            }
            else if(gus3 != num3)
            {
                num3 = 0;
            }
            cout << num1 << "   " << num2 << "   " << num3 << endl;
            guess = 0;
            num1 = 0;
            num2 = 0;
            num3 = 0;
            gus1 = 0;
            gus2 = 0;
            gus3 = 0;
        }
        else if(guess < number)
        {
            if (gus1 == num1)
            {
                num1 = gus1;
            }
            else if(gus1 != num1)
            {
                num1 = 0;
            }
            if (gus2 == num2)
            {
                num2 = gus2;
            }
            else if(gus2 != num2)
            {
                num2 = 0;
            }
            if (gus3 == num3)
            {
                num3 = gus3;
            }
            else if(gus3 != num3)
            {
                num3 = 0;
            }
            cout << num1 << "   " << num2 << "   " << num3 << endl;
            guess = 0;
            num1 = 0;
            num2 = 0;
            num3 = 0;
            gus1 = 0;
            gus2 = 0;
            gus3 = 0;
        }
    }
    return 0;
}
