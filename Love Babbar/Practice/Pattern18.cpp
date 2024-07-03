#include <iostream>
using namespace std;
 
int main(){
    int n = 4;
    int i = 1;

    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout << " ";
            space -=1;
        }
        int j = 1;
        while (j<= n-i+1)
        {
            cout << i;
            j +=1;
        }
        
        cout << endl;
        i = i+1;
    }
    
}