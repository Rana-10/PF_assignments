// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    int winner = 0;

    cout << " ** WELCOME TO PROGRAM ** " << endl;
    cout << " Enter the number of people " << endl;
    cin >> n;
    cout << " Enter the step value " << endl;
    cin >> k;

    if (n < 0 || k < 0)
    {
        cout << "invalid input" << endl;
        exit(0);
    }

    int i = 1;
    while (i <= n)
    {
        winner = (winner + k) % i;
        i++;
    }
    winner++;

    cout << " The last person is standing at the position of " << winner << endl;
    cout << " *************************** " << endl;

    return 0;
}