#include <iostream>
using namespace std;
 
int main(){
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    int arr[n];
    cout << "Input array element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl << "Array elements are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }                        
        }        
    }
    cout<<endl<<"After short array element are: "<< endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Duplicate element are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {   
            if (arr[i]==arr[j])
            {
                cout << arr[j] <<" ";
            }                    
        }        
    }

}