// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << " *** WELCOME TO TREE PATTERN PROGRAM *** " << endl;
    cout << " Please enter the number you want to make a tree for! " << endl;
    int number;
    cin >> number;

    for (int i = 0; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "\\";
        for (int j = 1; j <= 1; j++)
            cout << "|";
        for (int j = 1; j <= i; j++)
            cout << "/";
        cout << endl;
    }

    for (int i = 1; i <= number / 3; i++)
    {
        // if (i != number / 3)
        // {
        // for (int j = 1; j <= number - 1; j++)
        //     cout << " ";
        // for (int j = 1; j <= (number / 3); j++)
        // {
        //     cout << "_|_";
        //     cout << endl;
        // }

        for (int j = 1; j <= number - 2; j++)
            cout << " ";
        cout << "_";
        for (int j = 1; j <= number / 3; j++)
        {
            cout << "|";
            cout << "_";
            cout << endl;
        }

        return 0;
    }
}