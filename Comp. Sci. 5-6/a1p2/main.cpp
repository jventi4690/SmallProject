#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double initial = 0;
    int holder = 0;
    int hundreds = 0;
    int fifties = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;
    int quarters = 0;
    int dimes  = 0;
    int nickels = 0;
    int pennies = 0;
    cout << "Enter an amount of money: " << endl;
    cin >> initial;
    initial = initial * 100;
    holder = initial;
    holder = holder / 10000;
    hundreds = holder;
    initial = initial - (10000 * hundreds);
    if (hundreds > 0)
    {
        cout << hundreds << " $100 bill";
        if (hundreds > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 5000;
    fifties = holder;
    initial = initial - (5000 * fifties);
    if (fifties > 0)
    {
        cout << fifties << " $50 bill";
        if (fifties > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 2000;
    twenties = holder;
    initial = initial - (2000 * twenties);
    if (twenties > 0)
    {
        cout << twenties << " $20 bill";
        if (twenties > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 1000;
    tens = holder;
    initial = initial - (1000 * tens);
    if (tens > 0)
    {
        cout << tens << " $10 bill";
        if (tens > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 500;
    fives = holder;
    initial = initial - (500 * fives);
    if (fives > 0)
    {
        cout << fives << " $5 bill";
        if (fives > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 100;
    ones = holder;
    initial = initial - (100 * ones);
    if (ones > 0)
    {
        cout << ones << " $1 bill";
        if (ones > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 25;
    quarters = holder;
    initial = initial - (25 * quarters);
    if (quarters > 0)
    {
        cout << quarters << " .25 cent coin";
        if (quarters > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 10;
    dimes = holder;
    initial = initial - (10 * dimes);
    if (dimes > 0)
    {
        cout << dimes << " .10 cent coin";
        if (dimes > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 5;
    nickels = holder;
    initial = initial - (5 * nickels);
    if (nickels > 0)
    {
        cout << nickels << " .05 cent coin";
        if (nickels > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
        else
        {
            cout << ", ";
        }
    }
    holder = initial;
    holder = holder / 1;
    pennies = holder;
    initial = initial - (1 * pennies);
    if (pennies > 0)
    {
        cout << pennies << " .01 cent coin";
        if (pennies > 1)
        {
            cout << "s";
        }
        if (initial == 0)
        {
            cout << ".";
        }
    }
    return 0;
}
