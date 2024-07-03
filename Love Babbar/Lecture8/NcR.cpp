// NcR = n!/n! * (n-r)!

#include <iostream>
using namespace std;
 

int factorial(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}


int nCr(int n,int r){
    int neumo = factorial(n);
    int deneumo = factorial(r) * factorial(n-r);

    return neumo/deneumo;
}


int main(){
    int n,r;
    cin >> n >> r;
    cout << "Ans is: " << nCr(n,r);
    return 0;
}

