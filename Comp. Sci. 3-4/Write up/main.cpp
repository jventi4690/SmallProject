#include <iostream>

using namespace std;

int main()
{
    char YN = 'O';
    char YN2 = 'O';
    int choice = 0;
    cout << "Hello Mr. Bartlo! Would you like to see my Tic Tac Toe write up? (y/n)" << endl;
    cin >> YN;
    if (YN == 'n')
    {
        cout << "Well ok then! Bye!";
        return 0;
    }
    else if (YN == 'y')
    {
        cout << "Great!" << endl;
        cout << "Which section would you like to see?" << endl;
        cout << "(1) = Flow (2) = Keeping Track (3) = Testing (4) Extra" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Welcome to flow!" << endl;
            cout << "First, I decided that I need to print out the board before anything else." << endl;
            cout << "Then I would need to ask the first player where he wanted to go." << endl;
            cout << "After they inputted this information, I needed to print up the board, but this" << endl;
            cout << "time have it updated with that information." << endl;
            cout << "I would have to keep doing this until someone either won or it was a cats game." << endl;
            cout << "After this happened, I had to make it end the game and declare the winner." << endl;
            cout << "If you want to read the other sections, you need." << endl;
            cout << "to close out and reopen the program." << endl;
            return 0;
        }
        if (choice == 2)
        {
            cout << "Welcome to Keeping Track!" << endl;
            cout << "To keep track of all of things, I normally space everything really well." << endl;
            cout << "If you look at my code, you'll see that I put spaces so that nothing" << endl;
            cout << "gets lost or jumbled up in the other lines." << endl;
            cout << "If you want to read the other sections, you need." << endl;
            cout << "to close out and reopen the program." << endl;
            return 0;
        }
        if (choice == 3)
        {
            cout << "Welcome to Testing!" << endl;
            cout << "To make sure that all of my code works, I would work on one thing at a time." << endl;
            cout << "First I made sure it showed the board and whose turn it was." << endl;
            cout << "Then that it didn't overlap spaces even if they already had a peice on them." << endl;
            cout << "Lastly I made sure that it reconized wins for both sides and cats games." << endl;
            cout << "If you want to read the other sections, you need." << endl;
            cout << "to close out and reopen the program." << endl;
            return 0;
        }
        while (choice == 4)
        {
            cout << "Because this was SO creative, you should give me extra credit!!!" << endl;
            cout << "Isn't that a GREAT idea? (y/n)" << endl;
            cin >> YN2;
            if (YN2 == 'n')
            {
                cout << "Wrong!" << endl;
                cout << "Try again!" << endl;
                cout << "Isn't it a great idea? (y/n)" << endl;
            }
            if (YN2 == 'y')
            {
                cout << "Correct!" << endl;
                cout << "I hope you enjoyed this!" << endl;
                return 0;
            }
        }
    }



    return 0;
}
