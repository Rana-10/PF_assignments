// Assignment # 04
// Muhammad Azmat
// 23i-2651

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    // To solve this question, we need start and end of rows and columns
    cout << " *** WELCOME TO THE PROGRAM  *** " << endl;
    cout << " Please enter the no of rows : " << endl;
    int r, c;
    cin >> r; // r for rows and c for col.
    cout << " Please enter the no of col : " << endl;
    cin >> c;
    int array[r][c];
    // A 2D array is like a matrix, means it has 4 corners
    int left = 0;
    int right = c - 1; // doing -1 as arrays index starts from 0
    int top = 0;
    int bottom = r - 1;
    int direction = 0;

    // Initializing the aray with some random values.

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            array[i][j] = rand() % 100;
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }

    // 0 meaning L to R
    // 1 meaning T to B
    // 2 meaning R to L
    // 3 meaning B to T

    // 4 Steps, L to R, Top to Bottom, R to L, Bottom to Top. Left and Right are columns and Top and Bottom are Rows.

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout << array[top][i] << " "; // we have fixed row.
            }
            top++;
        }
        else
        {
            if (direction == 1)
            {
                for (int i = top; i <= bottom; i++)
                {
                    cout << array[i][right] << " "; // fixed column.
                }
                right--;
            }
            else
            {
                if (direction == 2)
                {
                    for (int i = right; i >= left; i--)
                    {
                        cout << array[bottom][i] << " ";
                    }
                    bottom--;
                }
                else
                {
                    if (direction == 3)
                    {
                        for (int i = bottom; i >= top; i--)
                        {
                            cout << array[i][left] << " "; // since the column is being pointed by left.
                        }
                        left++;
                    }
                }
            }
        }
        direction = (direction + 1) % 4;
    }

    return 0;
}