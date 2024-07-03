#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

void selection_sort_2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int miniIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[miniIndex])
            {
                miniIndex = j;
            }
        }
        int temp = arr[miniIndex];
        arr[miniIndex] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main()
{
    int n = 6;
    // cout << "Enter the range: ";
    // cin >> n;
    int arr[n] = {46, 20, 52, 9, 24, 6};
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter value for " << i << " : ";
    //     cin >> arr[i];
    // }

    cout << endl;
    cout << "after shorting: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Insertion_sort(arr, n);

    cout << endl;
    cout << "before shorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
