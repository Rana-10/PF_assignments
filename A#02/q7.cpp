// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    bool roweven1 = 0, rowodd1 = 0; // we declared these variables to explain what row to go to if user enters a particular number.
    bool roweven2 = 0, rowodd2 = 0;

    cout << " **** WELCOME TO BOX NUMBER GAME **** " << endl;
    cout << " Please enter the first number between 1 to 81 " << endl;
    cin >> num1;
    if (num1 <= 0 || num1 > 81) // input validation.
    {
        cout << " **** error **** Enter the numbers within the range defined" << endl;
    }
    else
    {
        cout << " Please enter the second number between 1 to 81 " << endl;
        cin >> num2;
        if (num2 <= 0 || num2 > 81)
            cout << " **** error **** Enter the numbers within the range defined" << endl;
        else
        { // setting ranges for each row to tell program if number entered is in odd row or even.
            if ((num1 > 0 && num1 < 10) || (num1 > 18 && num1 < 28) || (num1 > 36 && num1 < 46) || (num1 > 54 && num1 < 64) || (num1 > 72 && num1 < 82))
            {
                rowodd1 = 1;
            }
            if ((num1 > 9 && num1 < 19) || (num1 > 27 && num1 < 37) || (num1 > 45 && num1 < 55) || (num1 > 63 && num1 < 73))
            {

                roweven1 = 1;
            }
            if ((num2 > 0 && num2 < 10) || (num2 > 18 && num2 < 28) || (num2 > 36 && num2 < 46) || (num2 > 54 && num2 < 64) || (num2 > 72 && num2 < 82))
            {
                rowodd2 = 1;
            }
            if ((num2 > 9 && num2 < 19) || (num2 > 27 && num2 < 37) || (num2 > 45 && num2 < 55) || (num2 > 63 && num2 < 73))
            {
                roweven2 = 1;
            }

            int red = 0;
            int grey = 0;
            int blue = 0;

            if (rowodd1)
            {
                int colour = num1 % 3;
                if (colour == 0)
                    red = 1;
                if (colour == 1)
                    grey = 1;
                if (colour == 2)
                    blue = 1;
            }
            else if (roweven1)
            {
                int colour = num1 % 3;
                if (colour == 0)
                    grey = 1;
                if (colour == 1)
                    blue = 1;
                if (colour == 2)
                    red = 1;
            }

            int red1 = 0;
            int blue1 = 0;
            int grey1 = 0;

            if (rowodd2)
            {
                int colour = num2 % 3;
                if (colour == 0)
                    red1 = 1;
                if (colour == 1)
                    grey1 = 1;
                if (colour == 2)
                    blue1 = 1;
            }
            else if (roweven2)
            {
                int colour = num2 % 3;
                if (colour == 0)
                    grey1 = 1;
                if (colour == 1)
                    blue1 = 1;
                if (colour == 2)
                    red1 = 1;
            }

            if (grey == 1 && grey1 == 1)
                cout << " Both numbers are in the Grey Coloured Box !! " << endl;
            else
            {
                if (red == 1 && red1 == 1)
                    cout << " Both numbers are in the Red Coloured Box !! " << endl;
                else
                {
                    if (blue == 1 && blue1 == 1)
                        cout << " Both numbers are in the Blue Coloured Box !! " << endl;
                    else
                    {
                        cout << " OOPS !!! Both numbers are in boxes of different colours. " << endl;
                        cout << " Try again *__* " << endl;
                    }
                }
            }
        }
    }
    return 0;
}