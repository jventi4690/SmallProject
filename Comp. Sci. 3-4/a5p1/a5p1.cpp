#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    double number = rand()%1000 + 1;
    double guess = 0;
    double guesses = 0;
    cout << "Lets play a game!" << endl;
    cout << "I am going to pick a  number between 1 and 1000 and you will guess it!" << endl;
    cout << "Fun, right?" << endl;
    while(guess != number)
    {
        cout << "I have my number, so what is your guess?" << endl;
        cin >> guess;
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
            cout << "You guessed high!" << endl;
            guess = 0;
        }
        else if(guess < number)
        {
            cout << "You guessed low!" << endl;
            guess = 0;
        }
    }




    return 0;
}
