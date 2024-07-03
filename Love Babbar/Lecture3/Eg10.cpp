#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    int i =2;
    if (n%i != 0)
    {
        cout<<"Prime number";
        i += 1;
    }
    else{
        cout << "Not Prime";
    }
    
}