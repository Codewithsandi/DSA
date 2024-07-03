#include <iostream>
using namespace std;
 

void UpdateArray(int arr[],int n){
    cout << "Inside the Function."<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going back to main function" << endl;
}

int main(){
    int a[3] = {9,4,7};
    UpdateArray(a,3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    
}