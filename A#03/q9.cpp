// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << " ** WELCOME TO THE CALENDER PROGRAM ** " << endl;
    cout << " Please enter the correct details to get the correct dates " << endl;
    int year, month, weekDay, noOfDays; // no of days passed till the month entered
    int days = 0;
    bool isLeap = false;
    cout << " Enter the value of year. " << endl;
    cin >> year;
    if (year < 1000 || year > 3000) // input validation
        cout << "Enter a valid year !! " << endl;
    else
    {
        cout << "Enter the value of month, e.g. 1 for Jan, 2 for Feb etc. " << endl;
        cin >> month;
        if (month < 1 || month > 12) // input validation
            cout << " Enter a valid month value !!" << endl;
        else
        {
            // now check if year entered is a leap year?

            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // % 4 as leap year comes after 4 years.
            {
                cout << "Dear User, the year you entered is a LEAP YEAR " << endl;
                isLeap = true;
                if (month == 2)
                    days = 29;
            }
            else
            {
                cout << "Dear User, the year you entered is a NOT A LEAP YEAR " << endl;
                if (month == 2)
                    days = 28;
            }

            // Calender Figure

            cout << year << endl; // writing year at top
            cout << endl;

            cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat" << endl; // sun will be 0, mon =1, tue = 2 and so on

            if (month == 4 || month == 6 || month == 9 || month == 11)
                days = 30;

            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
                days = 31;

            if (month == 2) // if feb is not in a leap year.
                days = 28;

            noOfDays = (year / 4) * 366 + (year % 4) * 365;

            for (int i = 1; i < month; i++)
            {
                if (i == 4 || i == 6 || i == 9 || i == 11)
                    noOfDays += 30;
                else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                    noOfDays += 31;
                else if (i == 2 && isLeap)
                    noOfDays += 29;
                else if (i == 2)
                    noOfDays += 28;
            }

            weekDay = (noOfDays + 3) % 7;

            for (int i = 0; i < weekDay - 1; i++)
                cout << "\t";

            for (int i = 1; i <= days; i++, weekDay++)
            {
                cout << i << "\t";
                if (weekDay % 7 == 0)
                    cout << endl;
            }
            return 0;
        }
    }
}