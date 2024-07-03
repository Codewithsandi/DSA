#include <iostream>
using namespace std;
 

void swapArr(int arr[],int n){
    int s = 0;
    int e = 1;

    while (e < n)
    {
        swap(arr[s],arr[e]);
        // int temp = arr[1];
        //     arr[1] = arr[0];
        //     arr[0] = temp;
        s += 2;
        e += 2;
    }
    
}

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr1[5] = {9,6,7,3,5};
    int arr2[6] = {9,6,7,3,5,3};

    swapArr(arr1,5);
    swapArr(arr2,6);

    printArr(arr1,5);
    printArr(arr2,6);
}
