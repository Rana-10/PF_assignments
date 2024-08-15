// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    // Loops used to make the top triangle figure.

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5 - i; k > 0; k--)
            cout << "\t";
        for (int j = i; j > i - 1; j--)
        {
            {
                {
                    cout << "/" << j;
                }

                {
                    if (j == 1)
                        cout << "\\";
                }
            }
            if (j != 1)
            {

                for (int j = 2; j <= i; j++)
                    cout << "\t\t";
            }
            if (j != 1)
            {

                for (int j = i; j <= i; j++)
                    cout << i << "\\";
            }
        }

        cout << endl;
    }

    cout << endl;

    // Loop for Middle part.
    for (int j = 1; j <= 9; j++)
    {
        if (j == 1)
        {
            cout << "|*   ";
            for (int i = 1; i <= 56; i++)
                cout << '^';
            cout << "   *|" << endl;
            cout << endl;
        }

        if (j == 2)
        {

            cout << "|*   <    ";
            for (int i = 1; i <= 18; i++)
                cout << '*';
            cout << "             ";
            for (int i = 1; i <= 18; i++)
                cout << '*';
            cout << " >   *|       " << endl;
        }

        if (j == 5)
        {

            cout << "|*   <    ";
            for (int i = 1; i <= 18; i++)
                cout << '*';
            cout << "      0       ";
            for (int i = 1; i <= 18; i++)
                cout << '*';
            cout << " >   *|       " << endl;
        }

        if (j == 3 || j == 4 || j == 6 || j == 7 || j == 8)
        {

            cout << "|*   <    "; // row 3
            cout << '*';
            for (int i = 1; i <= 16; i++)
                cout << " ";
            cout << '*';

            for (int i = 1; i <= 13; i++) // loop for inner spaces
                cout << " ";
            cout << '*';
            for (int i = 1; i <= 17; i++)
                cout << " ";
            cout << " >   *|       " << endl;
        }

        if (j == 9)
        {
            cout << "|*   ";
            for (int i = 1; i <= 56; i++)
                cout << 'v';
            cout << "   *|" << endl;
            cout << endl;
        }
        cout << endl;

    } // for bracket.

    // Loop for the below Triangle.

    for (int i = 5; i > 0; i--)
    {
        for (int j = i + 1; j <= 5; j++)
        {

            cout << "\t";
        }
        cout << "\\";
        if (i != 1)
        {
            cout << i;
        }
        for (int k = 1; k < i; k++)
        {

            cout << "\t\t";
        }

        cout << i << "/" << endl;
    }
    return 0;
}
