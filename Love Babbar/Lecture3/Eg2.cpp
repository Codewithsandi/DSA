#include <iostream>
using namespace std;
 
int main(){
    int age;

    cout << "Enter Your age: ";
    cin >> age;

    if (age > 50)
    {
        cout<< " You are old";
    }
    else if (age< 20)
    {
        cout << "You are a child";
    }
    else
    {
        cout << "You are a Perfect man";
    }
    
}