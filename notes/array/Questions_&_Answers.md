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

## 3. Check if array is sorted

> Problem statement

- Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

```cpp
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i=1; i < arr.size(); i++){
            if(arr[i] >= arr[i-1]){

            }else{
                return false;
            }
        }
        return true;
    }
```
`Example :`

### **Input:** arr[] = [10, 20, 30, 40, 50]

### **Output:** true

## 4. Remove duplicates from Sorted array

> Problem statement

- You are given a sorted integer array 'arr' of size 'n'.

- You need to remove the duplicates from the array such that each element appears only once.

- Return the length of this new array.

```cpp
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[j] != arr[i]){
			arr[i+1] = arr[j];
			i +=1;
		}
	}

	return i+1;
}
```
`Example :`

### **Input:** 'n' = 5, 'arr' = [1 2 2 2 3].

### **Output:** 
- The new array will be [1 2 3].
- So our answer is 3.

## 5. Left Rotate an array by one place

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 6. Left rotate an array by D places

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 7. Move Zeros to end

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 8. Linear Search

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 9. Find the Union

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 10. Find missing number in an array

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 11. Maximum Consecutive Ones

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 12. Find the number that appears once, and other numbers twice.

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**

## 13. Longest subarray with given sum K(positives)

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**


## 14. Longest subarray with sum K (Positives + Negatives)

> Problem statement

```cpp

```
`Example :`

### **Input:** 

### **Output:**
