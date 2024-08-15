// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

// I have used TERNARY OPERATOR in the main logic building.
// and to counter if user enters some invalid data (e.g. month = 45), for that, if else is used.

#include <iostream>
#include <string>

using namespace std;

int date;
int month;
int year;

int main()
{
    cout << " ** WELCOME TO MAGIC YEAR PROGRAM ** " << endl;
    cout << " Please enter the month in numeric form " << endl;
    cin >> month;
    if (month >= 1 && month <= 12)
    {
        cout << " Please enter the date in numeric form " << endl;
        cin >> date;
        if (date >= 1 && date <= 31)
        {
            cout << " Please enter the year in numeric form " << endl;
            cin >> year;

            int _y = year % 1000;
            int _yy = _y % 100;

            if (year >= 1000 && year < 10000)
            {
                string check = (date * month == _yy) ? " ** THE DATE IS MAGIC ** " : " ** THE DATE IS NOT MAGIC ** "; // use of ternary operator.

                cout << check;
            }
            else
            {
                cout << " Please enter a valid year!!" << endl;
                cout << " ** HINT : IT MUST BE 4 DIGITS ** " << endl;
            }
        }
        else
        {
            cout << " Please enter a valid date!!" << endl;
            cout << " ** HINT : IT MUST BE FROM 1 TILL 31 ** " << endl;
        }
    }
    else
    {
        cout << " Please enter a valid month!!" << endl;
        cout << " ** HINT : IT MUST BE 1 OR 2 DIGITS ** " << endl;
    }
    return 0;
}