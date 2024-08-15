// Name : Muhammad Azmat
// Student ID : 23i-2651.
// Assignment # 02

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " **** WELCOME TO THE PROGRAM **** " << endl;
    cout << " Please enter in your two-byte Time Value. " << endl;
    short int x;
    cin >> x;
    short int secs, mins, hrs;
// shifting secs, mins and hrs all to RHS.
    secs = x << 10;
    secs = secs >> 10;
    mins = (x << 4);
    mins = mins >> 10;
    hrs = x >> 12;

    cout << " Your time will be " << hrs << " hrs " << mins << " mins " << secs << " secs. " << endl;

    return 0;
}