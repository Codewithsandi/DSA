// 2. Take name as input and print a greeting message for that particular name.

#include<iostream>
using namespace std;

void greet(string name){
    cout << name << " Good Afternoon." << endl;
}

int main(){

    string name;
    cout << "Enter your name: ";
    cin >> name;

    greet(name);

}