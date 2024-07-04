// Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

void subtract_Product_and_Sum_of_Digits(int number)
{
    int sum = 0,product = 1;

    while (number > 0)
    {
        int ld = number % 10;
        sum += ld;
        product *= ld;
        number /= 10;
    }

    int result = product - sum;

    cout << result << endl;
}

int main()
{
    int number = 253;

    subtract_Product_and_Sum_of_Digits(number);

    return 0;
}