**Ideal Approach:**
Define a reverseArray function to reverse an array recursively.

In the reverseArray function:

1.Check if the start and end pointers have met or crossed (base case).

2.Swap elements at the start and end positions to reverse them.

3.Recursively call the function with updated start and end positions to reverse the remaining part of the array.

```cpp
#include<iostream>
using namespace std;

// Function to reverse an array recursively
void reverseArray(int arr[], int start, int end) {
    // Base case: If the start and end pointers meet or cross, stop recursion
    if (start < end) {
        // Swap elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Recursive call with updated start and end positions
        reverseArray(arr, start + 1, end - 1);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    int start = 0, end = size - 1;
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before reversal: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }

    // Call the reverseArray function to reverse the array
    reverseArray(arr, start, end);

    cout << "Array after reversal: ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
```

**Approach 2:** 
In this we have swap without using two pointer 

```cpp
#include<iostream>
#include<vector>
using namespace std;

// Function to reverse an array recursively
void reverseArray(vector<int>& arr, int n, int i = 0) {
    // Base case: If we've reached or crossed the middle of the array, stop recursion
    if (i >= n / 2) {
        return;
    }

    // Swap elements between i and n - i - 1
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;

    // Recursive call with incremented i
    reverseArray(arr, n, i + 1);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    vector<int> arr(size);

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before reversal: ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }

    // Call the reverseArray function to reverse the array
    reverseArray(arr, size);

    cout << "\nArray after reversal: ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
```

**Approach 3 :**

In this we have created a new array (**as there was a requriement in the question**)
This not a ideal approach


This is a **Coding Ninjas Question**
```cpp
#include <iostream>
#include <vector>

using namespace std; // Add this line to use the std namespace

vector<int> reverseArray(int n, vector<int> &nums) {
    static vector<int> arr;

    if (n > 0) {
        n--;
        arr.push_back(nums[n]);  // Push the element into 'arr' in reverse order
        reverseArray(n, nums);   // Recursive call
    }

    return arr;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();

    vector<int> reversed = reverseArray(n, nums);

    for (int num : reversed) {
        cout << num << " ";
    }

    return 0;
}
```
