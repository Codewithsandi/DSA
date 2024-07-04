// Input a number and print all the factors of that number


#include <iostream>
using namespace std;


int main()
{
    int number = 20;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
        
    }
    cout << endl;

    return 0;
}