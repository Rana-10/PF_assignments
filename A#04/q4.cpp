// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 04

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    cout << " ** WELCOME TO THE PROGRAM ** " << endl;
    cout << " Lets maximize your profit " << endl;
    cout << endl;
    const int z = 6;
    int array[z]; // Bitcoins prices for next 60 days.
    int min_val = 0;
    int max_val = 0;
    // The Formula to generate random numbers from -10 to +10
    // (maximum value - minimum value + 1) + minimum value

    for (int i = 0; i < 6; i++)
    {
        array[i] = (rand() % (10 - -10 + 1) - 10);
        cout << array[i] << " ";
        // cout << endl;

        if (array[i] > max_val)
            max_val = array[i];

        if (array[i] < min_val)
            min_val = array[i];
    }
    cout << endl;
    cout << endl;
    cout << " I should sell my bitcoin when price reaches " << max_val << endl;
    cout << " I should buy new bitcoins when price drops to " << min_val << endl;

    return 0;
}
