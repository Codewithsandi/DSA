#include <iostream>
using namespace std;
 
int main(){
    int n=4,i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            char val = 'A'+j-1;
            cout<< val;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}