#include <iostream>
using namespace std;
 
int main(){
    char a;
    cout<<"Enter a number: ";
    cin>>a;

    if (a>='a')
    {
        cout<<"is lowercase";
    }
    else if (a>='A')
    {
        cout <<"is a uppercase";
    }
    else{
        cout <<"is integer";
    }

}