#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int sum_of_N_terms(int n)
{
    if(n <= 0) return 0;
    int lastDigit = n % 10;
    n = n / 10;
    sum += pow(lastDigit, 3);

    sum_of_N_terms(n - 1);
}

int main()
{
    int testCase = 1;
    // cout << "enter testCase number: ";
    // cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int n = 5;
        // cout << "Enter the value of n: ";
        // cin >> n;
        sum_of_N_terms(n);
    }
    return 0;
}