#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 7, 1, 8, 12};
    int sum = 0;
    cout << "the elements of array are: " << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
        sum = sum + arr[i];
    }
    cout << endl;

    cout << "sum of all element in array is: " << sum;

    // int arr[5];

    // int sum = 0;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     cin >> arr[i];
    //     sum += arr[i];
    // }

    // cout << endl;

    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // cout << endl;
    // cout << sum;
    // cout << endl;
}