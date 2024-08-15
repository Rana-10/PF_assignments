// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char op;
int maxValue;
char y_n;
int _1;           // 1st random no, if user says Negative values are allowed
int _2;           // 2nd random no, if user says Negative values are allowed
int unsigned __1; // 1st random no, if user says only Positive values are allowed
int unsigned __2; // 2nd random no, if user says only Positive values are allowed
int confirm;      // to check the answer given by the user as input
int confirm1;     // same function

int main()
{

    srand(time(0));

    cout << " ** WELCOME TO MATH EXERCISE PROGRAM ** " << endl;
    cout << " Please enter the operator " << endl;
    cout << " Press + for addition " << endl;
    cout << " Press - for subtraction " << endl;
    cout << " Press * for multiplication " << endl;
    cout << " Press / for division " << endl;
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/') // input validation at end.
    {
        cout << "max value?" << endl;
        cin >> maxValue;
        cout << "negative no.s allowed?" << endl;
        cin >> y_n;

        _1 = rand() % (maxValue + 1);
        _2 = rand() % (maxValue + 1);
        if (_1 % 2 == 0)
            _1 = -1 * _1;
        else
            _1 = _1;
        __1 = rand() % maxValue + 1;
        __2 = rand() % maxValue + 1;

        if (y_n == 'y' || 'Y' && y_n != 'n' && y_n != 'N') // game for signed numbers.
        {
            cout << "The random numbers generated are " << _1 << " and " << _2 << endl;
            cout << "Dear user, you have selected " << op << " as your operator, do you want to match your answer, if yes so type it in! " << endl;
            cin >> confirm;

            if (op == '+' && confirm == _1 + _2)
            {
                cout << " ** CONGRATULATIONS ! YOU GOT THE RIGHT ANSWER ** " << endl;
            }
            else
            {
                if (op == '-' && confirm == _1 - _2)
                {
                    cout << " ** CONGRATULATIONS !! YOU GOT THE RIGHT ANSWER ** " << endl;
                }
                else
                {
                    if (op == '*' && confirm == _1 * _2)
                        cout << " ** CONGRATULATIONS !!! YOU GOT THE RIGHT ANSWER ** " << endl;
                    else
                    {
                        if (op == '/' && confirm == _1 / _2)
                            cout << " ** CONGRATULATIONS !!!! YOU GOT THE RIGHT ANSWER ** " << endl;

                        else
                        {
                            cout << " *** WRONG ANSWER *** ";
                        }
                    }
                }
            }
        }

        else
        {
            if (y_n == 'n' || 'N') // for unsigned numbers.

            {
                cout << "The random numbers generated are " << __1 << " and " << __2 << endl;
                cout << "Dear user, you have selected " << op << " as your operator, do you want to match your answer, if yes so type it in! " << endl;
                cin >> confirm1;

                if (op == '+' && confirm1 == __1 + __2)
                {
                    cout << " CONGRATS ! THAT'S THE RIGHT ANSWER " << endl;
                }
                else
                {
                    if (op == '-' && confirm1 == __1 - __2 && __1 >= __2)
                    {
                        cout << " CONGRATS !! THAT'S THE RIGHT ANSWER " << endl;
                    }
                    else
                    {
                        if (op == '*' && confirm1 == __1 * __2)
                            cout << " CONGRATS !!! THAT'S THE RIGHT ANSWER " << endl;
                        else
                        {
                            if (op == '/' && confirm1 == __1 / __2)
                                cout << " CONGRATS !!!! THAT'S THE RIGHT ANSWER " << endl;

                            else
                            {
                                cout << " WRONG USER or if you're doing subraction, then check that 1st number has to be greater than 2nd one " << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << " ** INVALID OPERATOR ** " << endl; 
    }

    return 0;

} // main curly bracket.
