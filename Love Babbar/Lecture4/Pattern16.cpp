#include <iostream>
using namespace std;
 
int main(){
    int n = 4;
    int i = 1;

    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout << " ";
            space -=1;
        }
        int j = 1;
        while (j<=i)
        {
            cout << "*";
            j = j+1;
        }
        
        cout << endl;
        i = i+1;
    }
    
}