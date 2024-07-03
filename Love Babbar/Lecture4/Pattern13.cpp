#include <iostream>
using namespace std;
 
int main(){
    int n=4;
    int i = 1;
    char count = 'A';

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << count ;
            count += 1 ;
            j += 1;
        }
        cout << endl;
        i +=1;
    }
    
}