// Name : Muhammad Azmat
// Student ID : 23i-2651
// Assignment # 02

#include <iostream>
using namespace std;

int main()
{
    int total_eggs;
    cout << "Enter the total number of eggs to be packed" << endl;
    cin >> total_eggs;

    cout << "Number of 30 eggs packing: " << (total_eggs / 30) << "\t Number of leftover eggs : " << (total_eggs % 30) << endl;
    cout << "Number of 24 eggs packing: " << (total_eggs / 24) << "\t Number of leftover eggs : " << (total_eggs % 24) << endl;
    cout << "Number of 18 eggs packing: " << (total_eggs / 18) << "\t Number of leftover eggs : " << (total_eggs % 18) << endl;
    cout << "Number of 12 eggs packing: " << (total_eggs / 12) << "\t Number of leftover eggs : " << (total_eggs % 12) << endl;
    cout << "Number of 6 eggs packing: " << (total_eggs / 6) << "\t Number of leftover eggs : " << (total_eggs % 6) << endl;

    return 0;
}