# <center> Bubble Sort Algorithm </center>

### Concept:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. This process "bubbles" the largest element to the end of the list in each iteration.

### Steps:

1. **Initialize:** Start from the beginning of the list.

2. **Compare and Swap:** Compare each pair of adjacent elements and swap them if they are in the wrong order.

3. **Repeat:** Continue the process for each element in the list until no swaps are needed, indicating that the list is sorted.

### Time Complexity:

- **Best Case:** O ( n ) (when the list is already sorted)

- **Average Case:** O ( n <sup> 2 </sup>)

- **Worst Case:** O ( n <sup> 2 </sup>)

### Space Complexity:

- Auxiliary Space: 𝑂(1) (In-place sorting)

### Advantages:

- Simple to understand and implement
- Does not require additional memory (in-place sort)

### Disadvantages:

- Inefficient for large lists.
- Always runs in  O ( n <sup> 2 </sup>) time complexity, regardless of the input.

## implementation of Selection Sort in C++:

``` CPP
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
```