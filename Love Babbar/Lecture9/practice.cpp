#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (num[i] > maxi)
        // {
        //     maxi = num[i];
        // }
        maxi = max(num[i],maxi);
    }
    return maxi;
}

int getMin(int num[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (num[i] > mini)
        // {
        //     mini = num[i];
        // }
        mini = min(num[i],mini);
    }
    return mini;
}

int main()
{

    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size);

    return 0;
}