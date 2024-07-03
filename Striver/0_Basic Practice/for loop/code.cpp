#include <bits/stdc++.h>
using namespace std;

//! Basic for Loop Questions
//? 1. Write a for loop to print numbers from 1 to 10.

void question1()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
}

//? 2. Write a for loop to calculate the sum of the first N natural numbers, where N is provided by the user.

void question2(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}

//? 3. Write a for loop to print all even numbers between 1 and 20.

void question3()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

//? 4. Write a for loop to calculate the factorial of a given number.

void question4(int n)
{
    int factorial = 1;
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << endl;
        cout << "Factorial of " << n << " = " << factorial << endl;
    }
}

//? 5. Write a for loop to print the multiplication table of a given number.

void question5()
{
    int n;
    cout << "Enter a number for multiplication table: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

//! Intermediate for Loop Questions

//? 6. Write a for loop to print numbers from 10 to 1 in reverse order.

void question6()
{
    for (int i = 10; i >= 1; i--)
    {
        cout << i << " ";
    }
}

//? 7. Write a for loop to calculate the sum of all even numbers between 1 and N.

void question7(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even numbers are: " << i << " " << endl;
            sum += i;
        }
    }
    cout << endl;
    cout << sum;
}

//? 8. Write a for loop to count the number of digits in a given number.

void question8() {}

//? 9. Write a for loop to find the largest element in a given array of integers.

void question9() {}

//? 10. Write a for loop to print all elements of an array.

void question10() {}

//! Advanced for Loop Questions

//? 11. Write a for loop to print all prime numbers between 1 and 100.

void question11() {}

//? 12. Write a for loop to print the first N terms of the Fibonacci series.

void question12() {}

//? 13. Write a for loop to find the sum of the digits of a given number.

void question13() {}

int main()
{
    question7(13);
    return 0;
}
