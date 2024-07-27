# <center> Insertion Sort Algorithm </center>

### Concept:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Insertion Sort works similarly to how you might sort playing cards in your hands. You start with an empty left hand and the cards face down on the table. You then pick up the cards one by one and insert them into the correct position in your left hand. To find the correct position for a card, you compare it with the cards already in your hand from right to left.

### Steps:

1. **Initialize:** Start with the second element (the first element is considered sorted).

2. **Compare:** Compare the current element with the elements in the sorted part of the list.

3. **Shift:** Shift all elements in the sorted part that are greater than the current element to the right.

4. **Insert:** Insert the current element into its correct position.

5. **Repeat:** Repeat the process for each element in the list.

### Time Complexity:

- **Best Case:** O ( n ) (when the list is already sorted)

- **Average Case:** O ( n <sup> 2 </sup>)

- **Worst Case:** O ( n <sup> 2 </sup>)

### Space Complexity:

- Auxiliary Space: 𝑂(1) (In-place sorting)

### Advantages:

- Simple to understand and implement
- Efficient for small or nearly sorted lists
- Stable sort (does not change the relative order of equal elements)

### Disadvantages:

- Inefficient for large lists.
- Always runs in  O ( n <sup> 2 </sup>) time complexity, regardless of the input.

## implementation of Selection Sort in C++:

``` CPP
void Insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
```