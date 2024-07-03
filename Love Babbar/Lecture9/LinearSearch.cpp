#include <iostream>
using namespace std;
 
bool search(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[50] = {8,9,1,5,6,-9};
    
    cout << "Enyter the value you want to search: ";

    int key;
    cin >> key;

    bool found = search(arr,50,key);
    
    if(found){
        cout << "Present";
    }
    else{
        cout << "Not Present";
    }

}