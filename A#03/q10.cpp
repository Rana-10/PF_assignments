// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "welcome" << endl;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int coefficient = 1;
        for (int k = n - i; k > 0; k--)
            cout << "   ";
        for (int j = 1; j <= i; j++)
        {
            cout << coefficient << "     ";
            coefficient = coefficient * (i - j) / j;
        }
        cout << endl;
    }
    return 0;
}