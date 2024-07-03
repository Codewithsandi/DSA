#include <iostream>
using namespace std;
 
void printArray(int arr[],int size){
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl <<"printing done" << endl;
}

int main(){
    // int arr[10];

    // cout << arr[3] << endl;

    //initialising an array 
    int a[3] = {19,27,30};
    // cout << "Index 1 is: " << a[0];
    int arraysize = sizeof(a)/sizeof(int);
    cout << arraysize; 
    // printArray(a,3);

    int b[10] = {0};
    // printArray(b,10);

    int c[10] = {1};
    // printArray(c,10);

}