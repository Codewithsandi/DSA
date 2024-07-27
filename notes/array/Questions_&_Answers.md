# <center> Array - Question & Answer </center>

## **1. Largest Element in Array**

> Problem statement

- Given an array ‘arr’ of size ‘n’ find the largest element in the array.

```cpp
    int largest(vector<int> &arr, int n)
    {
        int largestElement = arr[0];
        for(int i = 1;i < n; i++){
            if(arr[i] > largestElement){
                largestElement = arr[i];
            }
        }
        return largestElement;
    }
```

`Examples:`

### **Input:** arr= [1, 8, 7, 56, 90]
### **Output:** `90`

<hr>

## **2. Second Largest Number**

> Problem statement

- You have been given an array ‘a’ of ‘n’ unique non-negative integers.
- Find the second largest and second smallest element from the array.
- Return the two elements (second largest and second smallest) as another array of size 2.

```cpp
int secondLargest(vector<int> &arr, int n) {
  int largest = arr[0];
  int S_largest = -1;
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      S_largest = largest;
      largest = arr[i];
    }
    else if ( arr[i] < largest && arr[i] > S_largest){
        S_largest = arr[i];
    }
  }
  return S_largest;
}

int secondSmallest(vector<int> &arr, int n) {
  int smallest = arr[0];
  int S_smallest = INT_MAX;
  for (int i = 1; i < n; i++) {
    if (arr[i] < smallest) {
      S_smallest = smallest;
      smallest = arr[i];
    }
    else if ( arr[i] != smallest && arr[i] < S_smallest){
        S_smallest = arr[i];
    }
  }
  return S_smallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
  // Write your code here.

  int S_largest = secondLargest(a, n);
  int S_smallest = secondSmallest(a, n);

  return {S_largest, S_smallest};
}

```

`Example :`

### **Input:** ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]

### **Output:** [4, 2]