#include <iostream>
using namespace std;
 
int main(){
    int n=4;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        char count = 'A' + n - i;
        while (j<=i)
        {
            cout << count ;
            count +=1;
            j +=1;
        }
        cout << endl;
        i +=1;
    }
    
}