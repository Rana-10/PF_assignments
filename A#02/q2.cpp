// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double i;
    const double u = 1.234;
    const double p = 3.34;

    cout << "Welcome to the Program" << endl;
    cout << "Please enter the value of \"i\" to proceed further" << endl;
    cin >> i;

    double ii = (i * i) - 1;

    double i_pow = pow(i, 3.0 / 2.0);
    double uu = u * i_pow;

    double num = uu * ii;
    double numerator = sqrt(num);

    double p1 = (p * i) - 2;
    double p2 = (p * i) - 1;

    double pp = sqrt(p1);
    double p_p = sqrt(p2);

    double denominator = pp + p_p;

    double final_ans = numerator / denominator;

    if (final_ans > 0)
        cout << "Your final answer is " << final_ans << endl;
    else if (final_ans == 0)
        cout << " Your answer is zero";

    return 0;
}
