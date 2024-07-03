#include <iostream>
using namespace std;
 
int main(){
    int n=5,i=1;
    // cin >> n;

    // while (i<=n)
    // {
    //     int j=1;
    //     int count=i;
    //     while (j<=i)
    //     {
    //         cout<<count;
    //         count = count+1;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i+j-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}