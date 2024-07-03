#include <iostream>
using namespace std;
 
int main(){
    int n;

    cout << "Enter the value: ";
    cin >> n;
    int prod=1,sum=0;
    while (n != 0)
    {
        int digit;
        digit = n%10;
        prod = prod * digit;
        sum = sum + digit;
        n = n/10;
    }

    int result = prod - sum;

    cout << "Product of digit is: " << prod << endl;
    cout << "Sum of digit is: " << sum  << endl;
    cout << "Result = " << result  << endl;
    
}