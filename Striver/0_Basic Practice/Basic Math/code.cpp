#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int digitcount(int n)
{
    int original = n;
    int count = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << "lastDigit: " << lastDigit << endl;
        if (original % lastDigit == 0)
        {
            count += 1;
        }

        n = n / 10;
    }
    cout << count;
}

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }
    cout << rev;
}

int armstrong(int n)
{

    int originl = n;
    int total = 0;

    string len = to_string(originl);

    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        total += pow(ld, len.length());
    }
    // if (originl == total)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    cout << total;
}

int divisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum += 1;
        }
    }
    cout << endl;
    if (sum <= 2)
    {
        cout << "prime";
    }
    else
    {
        cout << "Not";
    }
}

int main()
{

    int testCase = 1;
    // cout << "enter testCase number: ";
    // cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int n = 14;
        // cout << "Enter the value of n: ";
        // cin >> n;
        divisors(n);
    }
    return 0;
}