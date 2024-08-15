#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << "welcome to prime number game" << endl;
    int number;
    bool is_prime = true; // we said this is true tah ke numbers like 2,3, program aun ko wesy he prime consider krey as in for loop, wo condition ko satisfy kr rhe houn gey, i<=number/2.
    cout << "enter number" << endl;
    cin >> number;

    if (number == 0)
    {
        is_prime = false;
    }
    for (int i = 2; i <= number / 2; i++) // we used i = 2 as 1 tou har number pr already divisble hota hai.
    {
            if (number % i == 0)
                is_prime = false;
        
        if (is_prime == true)
            cout << number << " is a prime number " << endl;
        else
        {
            if (is_prime == false)
                cout << number << " is not prime " << endl;
        }
    }

    return 0;
}