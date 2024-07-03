// 7. To calculate Fibonacci Series up to n numbers.

#include <iostream>
using namespace std;

void fibonacci(int number)
{

    if (number == 0)
    {
        cout << "Enter number greater then 0";
    }

    int a = 1, b = 1, c=0;

    for (int i = 0; i <= number; i++)
    {
        // if (i == 0 || i == 1)
        // {
        //     cout << 1 << " ";
        //     continue;
        // }
        if (i == 0 || i == 1)
        {
            c += 1;
            continue;
        }
        c = a + b;
        a = b;
        b = c;
    }
        cout << c << " ";

    cout << endl;
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    fibonacci(number);

    return 0;
}