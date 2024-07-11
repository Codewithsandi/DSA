#include <iostream>
using namespace std;
 
void swap_alternate(int arr[],int n){
    int start = 0;
    int end = n-1;

    while (start < end)
    {
        swap(arr[start],arr[start+1]);
        start += 2;     
    }
    

}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr1[6] = {9,4,7,2,8,1};
    int arr2[5] = {1,2,8,9,5};

    swap_alternate(arr1,6);
    swap_alternate(arr2,5);

    printArray(arr1,6);
    printArray(arr2,5);

}