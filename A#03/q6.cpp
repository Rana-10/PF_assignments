// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double fact = 1;
    double n;
    double value_x, angle;
    double term, answer = 0.0;
    int power = 1;

    cout << "f(x) = sin(x)" << endl
         << "x = ";
    cin >> angle;
    cout << "Number terms: ";
    cin >> n;
    for (int b = 1; b <= n; b++) // till which number uses wants to run
    {
        value_x = angle;
        fact = 1;

        for (int a = 1; a <= power; a++)
        {
            fact = fact * a;
            if (a > 1)
            {
                value_x = value_x * angle;
            }
        }
        power = power + 2;
        term = value_x / fact; // calculating value of every single term.
        //  answer = answer + term;
        if (b % 2 == 0)
            answer = answer - term;
        if (b % 2 != 0)
            answer = answer + term;
    }
    // 38 to 42 explains how to give sign for even and odd powers for the final answer
    cout << "Your answer is " << answer << endl;
    return 0;
}