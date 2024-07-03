// 1. Write a program to print whether a number is even or odd, also take input from the user.

#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "enter your number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "even number" << endl;
    }
    else
    {
        cout << "odd number" << endl;
    }

    return 0;
}