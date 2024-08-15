// Assignment # 04
// Muhammad Azmat
// 23i-2651

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    bool game = true;
    char ghost = 'G';
    char packman = '>';
    char bomb = '%';
    bool bomb_deployed = false;
    int bomb_row = -1;
    int bomb_col = -1;
    // box[23][23]
    char input;
    char box[25][25] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '#', '#', '#', '#', '#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '#', '#', '#', '#', '.', '.', '#'},
                        {'#', '.', '.', '#', '#', '#', '#', '#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '#', '#', '#', '#', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '#', '#', '#', '#', '#', '.', '.', '#', '.', '.', '#', '#', '#', '#', '#', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '#', '.', '.', '.', '#', '#', '#', '.', '.', '.', '#', '#', '#', '.', '.', '.', '#', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', packman, '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '#', '#', '#', '#', '.', '#', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#', '#', '#', '#', '.', '.', '#'},
                        {'#', '.', '.', '#', '#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '#', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
                        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ghost, '#'},
                        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

    int ghost_row = 23;
    int ghost_col = 23;

    int new_ghost_row = ghost_row;
    int new_ghost_col = ghost_col;

    int pacman_row = 19;
    int pacman_col = 12;

    while (game)
    {
        system("cls");
        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 25; j++)
                cout << box[i][j];
            cout << endl;
        }
        cout << "Please enter your input" << endl;
        cout << " USE WASD to navigate" << endl;
        cin >> input;

        int new_pacman_row = pacman_row;
        int new_pacman_column = pacman_col;

        box[pacman_row][pacman_col] = ' '; // where the pacman leaves from, that place becomes a dot
        switch (input)
        {
        case 'w':
            new_pacman_row--;
            packman = 'v';
            break;
        case 's':
            new_pacman_row++;
            packman = '^';
            break;
        case 'a':
            new_pacman_column--;
            packman = '>';
            break;
        case 'd':
            new_pacman_column++;
            packman = '<';
            break;

        case 'x':
            bomb_deployed = true;
            bomb_row = pacman_row;
            bomb_col = pacman_col;
            box[bomb_row][bomb_col] = bomb;
            break;
        default:
            cout << "invalid input" << endl;
        }

        if (box[new_pacman_row][new_pacman_column] == '#')
        {
            // cout << " You're hitting the barrier. " << endl;
            new_pacman_row = pacman_row;
            new_pacman_column = pacman_col;
        }

        pacman_row = new_pacman_row; // declared these two things so that packman reverts back to its previous spot as it was when it hits the wall.
        pacman_col = new_pacman_column;

        int ghost_random_movement = rand() % 4;
        // we took mod by 4 so it will give us numbers from 0 to 3, which we will correspond to L and R and T and Bottom.

        switch (ghost_random_movement)
        {
        case 0:
            new_ghost_row++;
            break;

        case 1:
            new_ghost_row--;
            break;

        case 2:
            new_ghost_col++;
            break;

        case 3:
            new_ghost_col--;
            break;
        }

        // now check that our ghost spawning randomly is within the limit and does not spawn on a wall, we will use if statement

        if ((new_ghost_row > 1 && new_ghost_row < 25) && (new_ghost_col > 1 && new_ghost_col < 25) && box[new_ghost_row][new_ghost_col] != '#')
        {
            box[ghost_row][ghost_col] = ' ';
            ghost_row = new_ghost_row;
            ghost_col = new_ghost_col;

            box[ghost_row][ghost_col] = ghost;
        }

        if (bomb_deployed && ghost_row == bomb_row && ghost_col == bomb_col)
        {
            cout << " ** GHOST DIED ** ";
            box[ghost_row][ghost_col] = ' ';
            bomb_deployed = false;
            game = false; // End the game if ghost dies
        }

        box[new_pacman_row][new_pacman_column] = packman;

        if (box[pacman_row][pacman_col] == box[ghost_row][ghost_col])
        {
            cout << " ** OH, THE GHOST TOUCHED THE PACKMAN, GAME OVER ** ";
            exit(0);
        }

        // our packman is in [19][12] by default
    }

    return 0;
}