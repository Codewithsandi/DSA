#include <iostream>
using namespace std;
 
int main(){
    //  0 , 1 , 1 , 2 , 3 , 5 , 8 ,12 and more...
    
    int n , num1 = 0 , num2 = 1 , sum = 0;
    cout<< "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
           cout << num1 << " ";
           continue;
        }

        if (i == 2)
        {
            cout << num2 << " " ;
            continue;
        }
        sum = num1+num2;
        cout << sum << " ";
        
        num1 = num2;
        num2 = sum;

    }
    

}
