#include <iostream>
using namespace std;
 
int main(){
    int n = 5;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n-i+1)
        {
            cout << j;
            j +=1;
        }
        int k = 1;
        while (k<=i-1)
        {
            cout << "*";
            k += 1;
        }
        int l = 1;
        while (l<=i-1)
        {
            cout << "*";
            l += 1;
        }
        int m = 1;
        while (m<=n-i+1)
        {
            cout << j-1;
            j -=1;
            m += 1;
        }
        
        cout << endl;
        i +=1;
    }
    
}