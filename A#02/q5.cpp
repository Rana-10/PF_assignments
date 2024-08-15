// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
using namespace std;

int main()
{

    cout << " ** WELCOME TO ATM MACHINE PROGRAM ** " << endl;
    cout << " Please enter the amount you want to withdraw" << endl;

    int money;

    cin >> money;

    if (money % 500 != 0)
        cout << "Please enter any of the defined amounts i.e. multiples of 500" << endl;
    else
    {

        if (money >= 500 && money < 50000)
        {
            cout << "Your total amount is " << money << endl;

            money = money - 500;

            int _5000 = money / 5000;
            // single underscore (_) represents the currency notes needed for that particular amount.

            int __5000 = money % 5000;
            /* double underscore(__) represents the remainder which we use to further understand which
            currency notes to use */

            int _1000 = __5000 / 1000;
            int __1000 = __5000 % 1000;
            int _500 = __1000 / 500;
            _500++; // one 500 currency note is compulsory

            cout << "Rs 5000 currency notes :" << _5000 << endl;
            cout << "Rs 1000 currency notes :" << _1000 << endl;
            cout << "Rs 500 currency notes  :" << _500 << endl;
        }
        else
            cout << "Please enter a valid input! " << endl;
    }

    return 0;
}