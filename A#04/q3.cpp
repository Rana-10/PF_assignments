// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 04

#include <iostream>

using namespace std;

int main()
{
    cout << " ** WELCOME TO THE PROGRAM ** " << endl;
    int x;
    int y;
    int z;
    int array[x][y][z];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
                cin >> array[i][j][k];
            cout << endl;
        }
    }

    return 0;
}