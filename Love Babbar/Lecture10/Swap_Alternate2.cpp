#include <iostream>
using namespace std;
 
void swapAlt(int arr[],int n){
    for (int i = 0; i < n; i+=2)
    {
        if (i+1 < n)
        {
            // swap(arr[i],arr[i+1]);
            int temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
        }
        
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
    int even[6] = {9,5,7,3,8,1};
    int odd[5] = {2,4,6,8,1};

    swapAlt(even,6);
    swapAlt(odd,5);

    printArr(even,6);
    printArr(odd,5);
}