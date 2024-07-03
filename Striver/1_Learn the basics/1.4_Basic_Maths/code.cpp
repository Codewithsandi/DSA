#include <bits/stdc++.h>
using namespace std;

void countDigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt = cnt + 1;
    }
    cout << "Total count value: " << cnt;
}

void reverseNumber(int n)
{
    int rev = 0;
    cout << "Original number: " << n << endl;
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    cout << "Reverce number: " << rev;
}

void palindrome(int n)
{
    int rev = 0;
    int temp = n;
    cout << "Entered Number is: " << n << endl;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }

    if (temp == rev)
    {
        cout << "It is a Palindrome Number";
    }
    else
    {
        cout << "It is not a Palindrome Number";
    }
}

void armstrong(int n)
{
    string digits = to_string(n);
    int length = digits.size();
    int temp = n;
    int total = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        total = total + pow(ld, length);
    }
    if (temp == total)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void primeNumber(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

void GCDorHCF(int n, int m)
{
    // int GCD = 1;
    // for (int i = 1; i <= min(n, m); i++)
    // {
    //     if (n % i == 0 && m % i == 0)
    //     {
    //         GCD = i;
    //     }
    // }
    // cout << GCD;

    //? Equilateral Algorithem
    //* if a > b
    //* gcd(a,b) -> gcd(a-b,b) ---> 0

    // while (n > 0 && m > 0)
    // {
    //     if (n > m)
    //     {
    //         n = n % m;
    //     }
    //     else
    //     {
    //         m = m % n;
    //     }
    // }
    // if (n == 0)
    // {
    //     cout << m;
    // }
    // else
    // {
    //     cout << n;
    // }

    //? chatgpt generated
    while (m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    cout << n;
}

int main()
{
    int num1 = 9;
    int num2 = 12;
    GCDorHCF(num1, num2);
    return 0;
}