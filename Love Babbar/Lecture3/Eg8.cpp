// Print 1 to n and 
// #include <iostream>
// using namespace std;
 
// int main(){
//     int a;

//     cout<<"Enter a Number: ";
//     cin>>a;
//     int i=1;
//     while (i<=a)
//     {
//         cout<<i << endl;
//         i += 1;
//     }
// }

// Sum of all even number 1 to n
#include <iostream>
using namespace std;
 
int main(){
    int i=1,a,sum=0;
    cin >> a;  

    while (i<=a)
    {
        if (i%2 == 0){
            cout<< "Even number are:" << i <<" ";  
            cout << endl;
            sum = sum+i;     
        }
        i = i+1;
    }
    cout<<"Sum of all Even Number is: " << sum;
    return 0;
}