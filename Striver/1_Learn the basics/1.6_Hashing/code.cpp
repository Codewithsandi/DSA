#include <bits/stdc++.h>
using namespace std;

// int countOccurrences(int num, int arr[], int arrSize)
// {
//     int count = 0;
//     for (int i = 0; i < arrSize; i++)
//     {
//         if (arr[i] == num)
//         {
//             count++;
//         }
//     }
//     return count;
// }

int main()
{
    // int arr[] = {1, 2, 1, 3, 2, 1};
    // int arrSize = sizeof(arr) / sizeof(arr[0]);
    // int result = countOccurrences(5, arr, arrSize);
    // cout << result;

    //? number hashing
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    // cin >> arr[i];
    // }

    // int hashing[13] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hashing[arr[i]] += 1;
    // }

    // int q;
    // cout << "Number of cout: ";
    // cin >> q;
    // while (q--)
    // {
    int number;
    // cin >> number;
    // cout << "Count of " << number << " is: " << hashing[number] << endl;
    // }

    //? character hashing
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int t;
    cout << "Number of cout: ";
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        cout << "Count of " << c << " is: " << hash[c] << endl;
    }

    return 0;
}
