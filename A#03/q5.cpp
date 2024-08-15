// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout << " ** WELCOME TO PROGRAM ** " << endl;
    int number;
    bool prime;

    cout << " Enter your number: " << endl;
    cin >> number;

    if (number < 0)
        cout << " Please enter a valid positive number!! " << endl;
    else
    {

        if (number <= 1)
        {
            prime = false;
            if (number == 0)
                cout << number << " is not a prime number!! " << endl;
        }
        else
            prime = true;

        for (int i = 1; i <= pow(number, 2); i++)
        {
            prime = true; // each time, we set prime as true.
            if (i <= 1)
                prime = false;
            else
            {
                for (int j = 2; j <= sqrt(i); j++) // To check whether a number is prime, check its factors up to sqrt of that number.
                {
                    if (i % j == 0)
                    {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime)
                cout << i << " is a prime number" << endl;
            else
                cout << i << " is not a prime number" << endl;
        }
    }

    return 0;
}