// Name: Muhammad Azmat
// Student ID: 23i-2651
// Assignment # 03

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    cout << " **** WELCOME TO TIC-TAC-TOE **** " << endl;

    // we have total 9 boxes/ options

    char box1 = '1';
    char box2 = '2';
    char box3 = '3';
    char box4 = '4';
    char box5 = '5';
    char box6 = '6';
    char box7 = '7';
    char box8 = '8';
    char box9 = '9';

    int response; // response which the player will give
    bool game = true;
    char symbol;
    int player = 1;

    while (game)
    {

        // TIC-TAC-TOE FIGURE

        cout << box1 << " | " << box2 << " | " << box3 << endl;
        cout << "----------" << endl;
        cout << box4 << " | " << box5 << " | " << box6 << endl;
        cout << "----------" << endl;
        cout << box7 << " | " << box8 << " | " << box9 << endl;
        cout << "----------" << endl;

        cout << "Player: " << player << ", Enter your number" << endl;
        cin >> response;

        if (player == 1)
            symbol = 'X'; // Player1  uses X and Player2 will use O
        else
            symbol = 'O';

        if (box1 == '1' && response == 1)
        {
            box1 = symbol;
        }
        else
        {
            if (box2 == '2' && response == 2)
                box2 = symbol;
            else
            {
                if (box3 == '3' && response == 3)
                    box3 = symbol;
                else
                {
                    if (box4 == '4' && response == 4)
                        box4 = symbol;
                    else
                    {
                        if (box5 == '5' && response == 5)
                            box5 = symbol;
                        else
                        {
                            if (box6 == '6' && response == 6)
                                box6 = symbol;
                            else
                            {
                                if (box7 == '7' && response == 7)
                                    box7 = symbol;
                                else
                                {
                                    if (box8 == '8' && response == 8)
                                        box8 = symbol;
                                    else
                                    {
                                        if (box9 == '9' && response == 9)
                                            box9 = symbol;
                                        else
                                        {
                                            cout << " Invalid Input " << endl;
                                            continue;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        // using 'if' to make the winning statement

        if ((box1 == box2 && box2 == box3) || (box4 == box5 && box5 == box6) || (box7 == box8) && (box8 == box9) || (box1 == box4 && box4 == box7) || (box2 == box5 && box5 == box8) || (box3 == box6 && box6 == box9) || (box1 == box5 && box5 == box9) || (box3 == box5 && box5 == box7))
        {
            cout << " WOAHHHH! Player " << player << " WINS !!! *__* " << endl;
            game = false;
        }

        // using if to check for draw

        if (box1 != '1' && box2 != '2' && box3 != '3' && box4 != '4' && box5 != '5' && box6 != '6' && box7 != '7' && box8 != '8' && box9 != '9')
        {
            cout << " *** MATCH ENDED AS DRAW. PLEASE PLAY AGAIN !! " << endl;
            game = false;
        }

        if (player == 1)
            player = 2;
        else
            player = 1;

    } // while loop bracket.

    return 0;

} // int main bracket.