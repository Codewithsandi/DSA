# <center> Selection Sort Algorithm </center>

### Concept:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Selection Sort works by dividing the list into two parts: the sorted part and the unsorted part. Initially, the sorted part is empty, and the unsorted part is the entire list. The algorithm repeatedly selects the smallest (or largest, depending on the sorting order) element from the unsorted part and moves it to the end of the sorted part.

### Steps:

1. **Initialize:** Start with the first element of the list.

2. **Find Minimum:** Find the minimum element in the unsorted part of the list.
3. **Swap:** Swap the minimum element with the first element of the unsorted part.
4. **Move Boundary:** Move the boundary between the sorted and unsorted parts one element to the right.
5. **Repeat:** Repeat the process until the entire list is sorted.

### Time Complexity:

- **Best Case:** O ( n <sup> 2 </sup>)

- **Average Case:** O ( n <sup> 2 </sup>)

- **Worst Case:** O ( n <sup> 2 </sup>)

### Space Complexity:

- Auxiliary Space: 𝑂(1) (In-place sorting)

### Advantages:

- Simple to implement.
- Performs well on small lists.

### Disadvantages:

- Inefficient for large lists.
- Always runs in  O ( n <sup> 2 </sup>) time complexity, regardless of the input.

## implementation of Selection Sort in C++:

``` CPP
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
```

### **Examples:**

    Example 1:
    Input: N=5, array[] = {5,4,3,2,1}
    Output: 1,2,3,4,5
    Explanation: After sorting the array is: 1, 2, 3, 4, 5

