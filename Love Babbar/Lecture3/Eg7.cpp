#include <iostream>
using namespace std;
 
int main(){
    int i =1;
    int sum = 0;
    int n;
    cout << "Enter the value of n: ";
    cin >> n; 
    while (i<=n)
    {
        cout << i << " " << endl;
        sum = sum+i;
        i = i+1;
    }
    cout << "sum of n is: "<< sum; 

}