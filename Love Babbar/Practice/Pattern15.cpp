#include <iostream>
using namespace std;
 
int main(){
    int n=3;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        char count = 'A' + i - j;
        while (j<=n)
        {
            cout << count ;
            count +=1;
            j +=1;
        }
        cout << endl;
        i +=1;
    }
    
}