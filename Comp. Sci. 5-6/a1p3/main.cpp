#include <iostream>

using namespace std;

int main()
{
    int win = 0;
    int farmer = 1;
    int chicken = 1;
    int fox = 1;
    int food = 1;
    int boat = 1;
    int start = 0;
    int movechoice = 0;
    cout << "Welcome Farmer! You seem to be in a bit of a dilemma." << endl;
    cout << "You are on one side of a river that can only be crossed using a boat." << endl;
    cout << "Luckily, you have a boat, but you also have a fox, a chicken, and a bag of chicken feed." << endl;
    cout << "The chicken can't be alone with the food, and the fox can't be alone with the fox." << endl;
    cout << "Also, the boat is very small and can only carry you plus one object or animal." << endl;
    cout << "You need to get all of them safely from side 1 to side 2." << endl;
    cout << "Good luck!" << endl;
    cout << "Start(1)?";
    cin >> start;
    cout << endl << endl << endl << endl << endl;
    while (win != 1)
    {
        if (farmer == 1)
        {
            cout << " farmer";
        }
        else
        {
            cout << "       ";
        }
        cout << "|~ ~ ~ ~ ~ |";
        if (farmer == 2)
        {
            cout << "farmer";
        }
        cout << endl;
        if (chicken == 1)
        {
            cout << "chicken";
        }
        else
        {
            cout << "       ";
        }
        cout << "|~ ~ ~ ~ ~ |";
        if (chicken == 2)
        {
            cout << "chicken";
        }
        cout << endl;
        if (fox == 1)
        {
            cout << "    fox";
        }
        else
        {
            cout << "       ";
        }
        cout << "|~ ~ ~ ~ ~ |";
        if (fox == 2)
        {
            cout << "fox";
        }
        cout << endl;
        if (food == 1)
        {
            cout << "   food";
        }
        else
        {
            cout << "       ";
        }
        cout << "|~ ~ ~ ~ ~ |";
        if (food == 2)
        {
            cout << "food";
        }
        cout << endl;
        if (boat == 1)
        {
            cout << "   boat";
        }
        else
        {
            cout << "       ";
        }
        cout << "|~ ~ ~ ~ ~ |";
        if (boat == 2)
        {
            cout << "boat";
        }
        cout << endl;
        cout << endl;
        cout << "Move chicken (1), move fox (2), move food (3), move farmer (4)" << endl;
        cin >> movechoice;
        cout << endl;
        if (movechoice == 1)
        {
            if (chicken != farmer)
            {
                cout << "You can't do that..." << endl;
            }
            else
            {
                if (chicken == 1)
                {
                    chicken = chicken++;
                }
                else
                {
                    chicken = chicken--;
                }
                if (farmer == 1)
                {
                    farmer = farmer++;
                }
                else
                {
                    farmer = farmer--;
                }
                if (boat == 1)
                {
                    boat = boat++;
                }
                else
                {
                    boat = boat--;
                }
            }

        }
        if (chicken == 1 and fox == 1 and farmer == 2)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and farmer == 1)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 1 and food == 1 and farmer == 2)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and food == 2 and farmer == 1)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and food == 2)
        {
            if (farmer == 1)
            {
                cout << " farmer";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (farmer == 2)
            {
                cout << "farmer";
            }
            cout << endl;
            if (chicken == 1)
            {
                cout << "chicken";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (chicken == 2)
            {
                cout << "chicken";
            }
            cout << endl;
            if (fox == 1)
            {
                cout << "    fox";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (fox == 2)
            {
                cout << "fox";
            }
            cout << endl;
            if (food == 1)
            {
                cout << "   food";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (food == 2)
            {
                cout << "food";
            }
            cout << endl;
            if (boat == 1)
            {
                cout << "   boat";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (boat == 2)
            {
                cout << "boat";
            }
            cout << endl << "You win!";
            return 0;
        }
        if (movechoice == 2)
        {
            if (fox != farmer)
            {
               cout << "You can't do that..." << endl;
            }
            else
            {
                if (fox == 1)
                {
                    fox = fox++;
                }
                else
                {
                    fox = fox--;
                }
                if (farmer == 1)
                {
                    farmer = farmer++;
                }
                else
                {
                    farmer = farmer--;
                }
                if (boat == 1)
                {
                    boat = boat++;
                }
                else
                {
                    boat = boat--;
                }
            }
        }
        if (chicken == 1 and fox == 1 and farmer == 2)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and farmer == 1)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 1 and food == 1 and farmer == 2)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and food == 2 and farmer == 1)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and food == 2)
        {
            if (farmer == 1)
            {
                cout << " farmer";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (farmer == 2)
            {
                cout << "farmer";
            }
            cout << endl;
            if (chicken == 1)
            {
                cout << "chicken";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (chicken == 2)
            {
                cout << "chicken";
            }
            cout << endl;
            if (fox == 1)
            {
                cout << "    fox";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (fox == 2)
            {
                cout << "fox";
            }
            cout << endl;
            if (food == 1)
            {
                cout << "   food";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (food == 2)
            {
                cout << "food";
            }
            cout << endl;
            if (boat == 1)
            {
                cout << "   boat";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (boat == 2)
            {
                cout << "boat";
            }
            cout << endl << "You win!";
            return 0;
        }
        if (movechoice == 3)
        {
            if (food != farmer)
            {
                cout << "You can't do that..." << endl;
            }
            else
            {
                if (food == 1)
                {
                    food = food++;
                }
                else
                {
                    food = food--;
                }
                if (farmer == 1)
                {
                    farmer = farmer++;
                }
                else
                {
                    farmer = farmer--;
                }
                if (boat == 1)
                {
                    boat = boat++;
                }
                else
                {
                    boat = boat--;
                }
            }
        }
        if (chicken == 1 and fox == 1 and farmer == 2)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and farmer == 1)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 1 and food == 1 and farmer == 2)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and food == 2 and farmer == 1)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and food == 2)
        {
            if (farmer == 1)
            {
                cout << " farmer";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (farmer == 2)
            {
                cout << "farmer";
            }
            cout << endl;
            if (chicken == 1)
            {
                cout << "chicken";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (chicken == 2)
            {
                cout << "chicken";
            }
            cout << endl;
            if (fox == 1)
            {
                cout << "    fox";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (fox == 2)
            {
                cout << "fox";
            }
            cout << endl;
            if (food == 1)
            {
                cout << "   food";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (food == 2)
            {
                cout << "food";
            }
            cout << endl;
            if (boat == 1)
            {
                cout << "   boat";
            }
            else
            {
                cout << "       ";
            }
            cout << "|~ ~ ~ ~ ~ |";
            if (boat == 2)
            {
                cout << "boat";
            }
            cout << endl << "You win!";
            return 0;
        }
        if (movechoice == 4)
        {
            if (farmer == 1)
            {
                farmer = farmer++;
            }
            else
            {
                farmer = farmer--;
            }
            if (boat == 1)
            {
                boat = boat++;
            }
            else
            {
                boat = boat--;
            }
        }
        if (chicken == 1 and fox == 1 and farmer == 2)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and farmer == 1)
        {
            cout << "The fox ate the chicken! Game over!";
            return 0;
        }
        if (chicken == 1 and food == 1 and farmer == 2)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and food == 2 and farmer == 1)
        {
            cout << "The chicken ate the food! Game over!";
            return 0;
        }
        if (chicken == 2 and fox == 2 and food == 2)
        {
            cout << endl << "You win!";
            return 0;
        }
    }
    return 0;
}
