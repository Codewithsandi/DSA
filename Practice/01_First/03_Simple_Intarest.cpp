// 3. Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.

#include <iostream>
using namespace std;

void calculate_SI(int principal,int time,int rate){
    cout << "Simple Interest is: " << (principal * time * rate) / 100 << endl;
}

int main(){

    int principal,time,rate;
    
    cout << "Enter principal amount(the initial amount invested or borrowed): ";
    cin >> principal;

    cout << "Enter time duration in years: ";
    cin >> time;

    cout << "Enter interest rate in percentage: ";
    cin >> rate;

    calculate_SI(principal,time,rate); 


    return 0;
}