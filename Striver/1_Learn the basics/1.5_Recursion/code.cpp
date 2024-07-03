#include <bits/stdc++.h>
using namespace std;

int number = 1;

//? print name n times
void printNames(int n)
{
    if (number <= n)
    {
        cout << "Sandi ";
    }
    number++;
    printNames(n);
}

//? print name n times
vector<string> printNameNTimes(int n)
{
    if (n <= 0)
    {
        return {};
    }
    vector<string> result = printNameNTimes(n - 1);
    result.push_back("Coding Ninjas ");
    return result;
}

//? print 1 to N
vector<int> OneToN(int n)
{
    if (n <= 0)
    {
        return {};
    }
    vector<int> result = OneToN(n - 1);
    result.push_back(number);
    number++;
    return result;
}

//? print N to 1
vector<int> NToOne(int n)
{
    if (n <= 0)
    {
        return {};
    }
    vector<int> result;
    result.push_back(n);
    vector<int> remaining = NToOne(n - 1);
    result.insert(result.end(), remaining.begin(), remaining.end());
    return result;
}

//? print 1 to N using backtracking
void printNumbers(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printNumbers(i - 1, n);
    cout << i << " ";
}

//? print N to 1 using backtracking
void printNtoOneNumbers(int i, int n)
{
    if (i >= 1)
    {
        cout << i << " ";
    }
    printNumbers(i - 1, n);
}

//? Sum Of First N Numbers parameterised way
void SumOfNumbers(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }
    SumOfNumbers(n - 1, sum + n);
}

//? Sum Of First N Numbers functional way
int SumOfNumbersF(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SumOfNumbersF(n - 1);
    // static long long currentSum = 0;
    // if (n == 0)
    // {
    //     long long sum = currentSum;
    //     currentSum = 0;
    //     return sum;
    // }
    // currentSum += n;
    // return SumOfNumbersF(n - 1);
}

//? Factorial of N Numbers
int Fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * Fac(n - 1);
}

void Factorial(int n)
{
    static long long Currentfactor = 1;
    if (n == 1)
    {
        cout << Currentfactor;
        Currentfactor = 1;
        return;
    }
    Currentfactor *= n;
    Factorial(n - 1);
}

//? Reverse an Array
void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

//? Check Palindrome (recursive)
bool isPalindrome(std::string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}
bool isPalindrome(string &str)
{
    return isPalindrome(str, 0, str.length() - 1);
}

void fibonachi(int n)
{
    // if (n <= 1)
    // {
    //     return n;
    // }
    // int last = fibonachi(n - 1);
    // int slast = fibonachi(n - 2);
    // return last + slast;

    int first = 0;
    int second = 1;
    int nextIndex = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
            continue;
        }
        if (i == 2)
        {
            cout << second << " ";
            continue;
        }

        nextIndex = first + second;
        first = second;
        second = nextIndex;

        cout << nextIndex << " ";
    }
}

vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fib;
    if (n <= 1)
    {
        fib.push_back(0);
    }
    if (n <= 2)
    {
        fib.push_back(1);
    }

    for (int i = 2; i < n; i++)
    {
        int nextFib = fib[i - 1] + fib[i - 2];
        fib.push_back(nextFib);
    }

    return fib;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n = 10;
    // cin >> n;
    // printNames(n);
    // vector<string> output = printNameNTimes(n);
    // vector<int> output = OneToN(n);
    vector<int> output = NToOne(n);
    for (auto str : output)
    {
        // cout << str;
    }

    // printNumbers(n,n);
    // SumOfNumbers(n,0);
    // cout << SumOfNumbersF(n);
    // cout << Fac(n);
    // Factorial(n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
    }
    reverseArray(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i] << " ";
    }

    string str = "madam";
    // isPalindrome(str);

    // fibonachi(n);
    for (int i = 0; i < n; i++)
    {
        // cout << fib(i) << " ";
    }

    vector<int> fibNumber = generateFibonacciNumbers(n);
    for (auto num : fibNumber)
    {
        cout << num << " ";
    }
    return 0;
}