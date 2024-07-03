#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int prime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }

    if ( prime == false )
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }
    
}