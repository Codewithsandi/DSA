#include <iostream>
using namespace std;

void check_fibonacci(int dob)
{
    if (dob <= 0) {
        cout << "Invalid input. dob should be greater than 0." << endl;
        return;
    }
    
    int a = 1, b = 1, c = 1;
    
    while (c < dob) {
        c = a + b;
        a = b;
        b = c;
    }

    if (dob == c) {
        cout << "DOB belongs to the Fibonacci series: " << c << endl;
    } else {
        cout << "DOB does not belong to the Fibonacci series. The next Fibonacci number is " << c << endl;
    }
}

int main()
{
    int dob = 2000;
    check_fibonacci(dob);
    return 0;
}
