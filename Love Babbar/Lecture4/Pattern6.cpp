#include <iostream>
using namespace std;
 
int main(){
    int n=4,i=1,count=1;
    // cin >> n;
    count = 1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count;
            count = count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}