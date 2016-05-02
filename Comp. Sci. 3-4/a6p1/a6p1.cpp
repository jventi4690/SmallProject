#include <iostream>

using namespace std;

int main()
{
    bool stop = false;
    char X = 'X';
    char O = 'O';
    char s1 = '1';
    char s2 = '2';
    char s3 = '3';
    char s4 = '4';
    char s5 = '5';
    char s6 = '6';
    char s7 = '7';
    char s8 = '8';
    char s9 = '9';
    bool so1 = false;
    bool so2 = false;
    bool so3 = false;
    bool so4 = false;
    bool so5 = false;
    bool so6 = false;
    bool so7 = false;
    bool so8 = false;
    bool so9 = false;
    int p1c = 0;
    int p2c = 0;
    int turn = 1;
    int turns = 0;
    cout << "Welcome to tic tac toe!" << endl;
    while (stop != true)
    {
        if (turn == 1)
        {
            cout << "Player 1" << endl;
            cout << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            cout << "Enter where you want to go: " << endl;
            cin >> p1c;
            if (p1c == 1)
            {
                if (so1 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so1 = true;
                    s1 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 2)
            {
                if (so2 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so2 = true;
                    s2 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 3)
            {
                if (so3 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so3 = true;
                    s3 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 4)
            {
                if (so4 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so4 = true;
                    s4 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 5)
            {
                if (so5 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so5 = true;
                    s5 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 6)
            {
                if (so6 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so6 = true;
                    s6 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 7)
            {
                if (so7 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so7 = true;
                    s7 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 8)
            {
                if (so8 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so8 = true;
                    s8 = 'X';
                    turn++;
                    turns++;
                }
            }
            if (p1c == 9)
            {
                if (so9 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so9 = true;
                    s9 = 'X';
                    turn++;
                    turns++;
                }
            }
        }
        if (s1 == 'X' && s2 == 'X' && s3 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s4 == 'X' && s5 == 'X' && s6 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s7 == 'X' && s8 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s1 == 'X' && s5 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s3 == 'X' && s5 == 'X' && s7 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s1 == 'X' && s4 == 'X' && s7 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s2 == 'X' && s5 == 'X' && s8 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s3 == 'X' && s6 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (turns == 9)
        {
            cout << "All of the spaces are taken, cats game!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        else if (turn == 2)
        {
            cout << "Player 2" << endl;
            cout << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            cout << "Enter where you want to go: " << endl;
            cin >> p2c;
             if (p2c == 1)
            {
                if (so1 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so1 = true;
                    s1 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 2)
            {
                if (so2 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so2 = true;
                    s2 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 3)
            {
                if (so3 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so3 = true;
                    s3 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 4)
            {
                if (so4 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so4 = true;
                    s4 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 5)
            {
                if (so5 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so5 = true;
                    s5 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 6)
            {
                if (so6 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so6 = true;
                    s6 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 7)
            {
                if (so7 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so7 = true;
                    s7 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 8)
            {
                if (so8 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so8 = true;
                    s8 = 'O';
                    turn--;
                    turns++;
                }
            }
            if (p2c == 9)
            {
                if (so9 == true)
                {
                    cout << "You can't do that." << endl;
                }
                else
                {
                    so9 = true;
                    s9 = 'O';
                    turn--;
                    turns++;
                }
            }
        if (s1 == 'X' && s2 == 'X' && s3 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s4 == 'X' && s5 == 'X' && s6 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s7 == 'X' && s8 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s1 == 'X' && s5 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s3 == 'X' && s5 == 'X' && s7 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s1 == 'X' && s4 == 'X' && s7 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s2 == 'X' && s5 == 'X' && s8 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (s3 == 'X' && s6 == 'X' && s9 == 'X')
        {
            cout << "Player 1 wins!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        if (turns == 9)
        {
            cout << "All of the spaces are taken, cats game!" << endl;
            cout << s1 << "|" << s2 << "|" << s3 << endl;
            cout << "-+-+-" << endl;
            cout << s4 << "|" << s5 << "|" << s6 << endl;
            cout << "-+-+-" << endl;
            cout << s7 << "|" << s8 << "|" << s9 << endl;
            return 0;
        }
        }
    }
}


