// 5. Take 2 numbers as input and print the largest number.

#include <iostream>
using namespace std;

void largestNumber(int number_One, int number_Two)
{
    if (number_One > number_Two)
    {
        cout << "largest number is: " << number_One << endl;
    }
    else
    {
        cout << "largest number is: " << number_Two << endl;
    }
}

int main()
{

    int number_One, number_Two;
    cout << "Enter Number One: ";
    cin >> number_One;

    cout << "Enter Number Two: ";
    cin >> number_Two;

    largestNumber(number_One, number_Two);

    return 0;
}