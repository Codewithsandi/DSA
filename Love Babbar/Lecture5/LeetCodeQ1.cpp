// Q1: Subtract the Product and Sum of Degit of an integer.

// Eg:

// Input: n = 234
// Output: 15

// Explanation:

// Product of degit = 2*3*4 = 24
// Sum of Digit = 2+3+4 = 9
// Result = 24-9 = 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int prod = 1;
    int sum = 0;
    while (n>0)
    {
        int digit = n%10;
        prod = prod*digit;
        sum = sum+digit;
        n = n/10;
    }
    cout << "Product of n is: "<< prod << endl;
    cout << "Sum of n is: "<<sum << endl;

    int answer = prod-sum;
    cout << "Answer is: "<< answer;

}
