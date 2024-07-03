#include <iostream>
using namespace std;
 
int cheak(int num){
    if (num%2==0)
    {
        return 1;
    } 

    return 0;
}


bool isEvenOdd(int a)
{
    if (a&1)
    {
        return 0;   
    }

    return 1;
    
}
int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (cheak(num))
    {
        cout << "Number is Even";
    }
    else{
        cout << "Number is odd";
    }
    
    // int ans = cheak(num);

}