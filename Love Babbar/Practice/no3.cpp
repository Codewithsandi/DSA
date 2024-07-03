#include <iostream>
using namespace std;
 
int main(){
    int i=2,n;
    cout<<"Enter a number: ";
    cin>>n;
    while (i< n){
        if (n%i==0)
        {
            cout<<"not a Prime"<<" "<<i;
        }
        else
        {
            cout<<"Prime"<<" "<<i;
        }
        i = i+1;
    }
    
    
}