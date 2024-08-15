// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
using namespace std;

int days;
int salary1, salary2, salary3;
int tax_deduction1, tax_deduction2, tax_deduction3;
int net_pay1, net_pay2, net_pay3;

int main()
{
    cout << " ** WELCOME TO SALARY CALCULATING PROGRAM ** " << endl;
    cout << "Please enter your total working days to proceed further" << endl;
    cin >> days;

    if (days <= 0)
        cout << "Please enter a valid input " << endl;

    else
    {
        if (days >= 25 && days <= 30)
        {
            // Full Time Job
            // 900 per hour
            // 1 day = 900 * 8 = 7200

            salary1 = days * 7200;
            tax_deduction1 = salary1 * 5 / 100;
            net_pay1 = salary1 - tax_deduction1;

            cout << " Your salary without tax deduction will be " << salary1 << endl;
            cout << " Your tax deduction is 5% which will be " << tax_deduction1 << endl;
            cout << " Respected Sir! Your total salary after tax deduction will be " << net_pay1 << endl;
        }

        else
        {
            if (days >= 15 && days <= 24)
            {
                // Part Time Job
                // 850 per hour
                // 1 day = 850*8 = 6800
                salary2 = days * 6800;
                tax_deduction2 = salary2 * 7 / 100;
                net_pay2 = salary2 - tax_deduction2;

                cout << " Your salary without tax deduction will be " << salary2 << endl;
                cout << " Your tax deduction is 5% which will be " << tax_deduction2 << endl;
                cout << " Respected Sir! Your total salary after tax deduction will be " << net_pay2 << endl;
            }

            else
            {
                if (days < 15)
                {
                    // Adhoc
                    // 600 per hour
                    // 1 day = 600*8 = 4800
                    salary3 = days * 4800;
                    tax_deduction3 = salary3 * 10 / 100;
                    net_pay3 = salary3 - tax_deduction3;

                    cout << " Your salary without tax deduction will be " << salary3 << endl;
                    cout << " Your tax deduction is 5% which will be " << tax_deduction3 << endl;
                    cout << " Respected Sir! Your total salary after tax deduction will be " << net_pay3 << endl;
                }
            }
        }
        // Now to calculate the expected salaries of employees
        // we will use average
        // The average of 25 to 30 will be 27.5 which will be 27
        // The average of 15 to 24 will be 19.5 which will be 19
        // The average of less than 15 days, take for instance 14

        int sal = 7200 * 27;
        int tax = 6800 * 19;
        int pay = 4800 * 14;

        cout << "The expected salary of a full time job man will be " << sal - (sal * 5 / 100) << endl;
        cout << "The expected salary of a part time job man will be " << tax - (tax * 7 / 100) << endl;
        cout << "The expected salary of a full time job man will be " << pay - (pay * 10 / 100) << endl;
    }

    return 0;
}