#include <iostream>
using namespace std;

int pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i-1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    int testCase = 1;
    // cout << "enter testCase number: ";
    // cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int n = 6;
        // cout << "Enter the value of n: ";
        // cin >> n;
        pattern3(n);
    }

    return 0;
}