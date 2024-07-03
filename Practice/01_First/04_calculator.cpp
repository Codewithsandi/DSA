// 4. Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)

#include <iostream>
using namespace std;

void calculator(int num_one, int num_two, string operator_value)
{
    if (operator_value == "+")
    {
        cout << num_one + num_two << endl;
    }
    else if (operator_value == "-")
    {
        cout << num_one - num_two << endl;
    }
    else if (operator_value == "*")
    {
        cout << num_one * num_two << endl;
    }
    else if (operator_value == "/")
    {
        cout << num_one / num_two << endl;
    }
    else
    {
        cout << "enter valid operator to calculate..";
    }
}

int main()
{

    int number_One, number_Two;
    string operator_value;

    cout << "Enter Number One: ";
    cin >> number_One;

    cout << "Enter Number Two: ";
    cin >> number_Two;

    cout << "Enter operator: ";
    cin >> operator_value;

    calculator(number_One, number_Two, operator_value);

    return 0;
}