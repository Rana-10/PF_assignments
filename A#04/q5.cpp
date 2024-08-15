// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 04

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // we need to approximate the value of pi
    const double threshold = 0.000001;
    double answer = 0.0;
    int z = 0;

    do
    {
        double series = 1.0 / (2 * z + 1); // in denominator, to get odd numbers.

        if (z % 2 == 0) // for positive and negative sign at alternate positions.
            answer += series;
        else
        {
            if (z % 2 != 0)
                answer -= series;
        }

        if (series < threshold)
            break;

        z++;

    } while (true);

    cout << " The value of pi is " << answer * 4 << endl;
    cout << endl;
    cout << " Good Bye !!! " << endl;

    return 0;
}