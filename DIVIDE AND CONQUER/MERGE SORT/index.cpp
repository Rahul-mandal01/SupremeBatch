#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* left = new int[len1]; // DYNAMIC MEMORY ALLOCATION
    int* right = new int[len2]; // DYNAMIC MEMORY ALLOCATION

    // COPY VALUES
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }

    // MERGE THE TWO SORTED ARRAYS
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while( leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // COPY LOGIC FOR LEFT ARRAY
    while(leftIndex < len1){
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    // COPY LOGIC FOR RIGHT ARRAY
    while(rightIndex < len2){
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
}

void mergeSort(int* arr, int s, int e){
    // BASE CASE
    // if s == e --> SINGLE ELEMENT
    // if s > e --> INVALID ARRAY
    if(s >= e)
     return;

    int mid = (s+e)/2;
    // SORT LEFT PART BY RECURSION
    mergeSort(arr, s, mid);

    // SORT RIGHT PART BY RECURSION
    mergeSort(arr, mid+1, e);

    // NOW MERGE THE TWO SORTED ARRAY
    merge(arr, s, e);

}
int main(){
    int arr[] = {4,5,13,2,12,2,3,2,3,23,2,32,2,2,3};
    int n = 15;
    int s = 0;
    int e = n-1;

    mergeSort(arr, s, e);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// Merge Sort Function
// The mergeSort function is a recursive function that divides the array into smaller subarrays and sorts them.

// void mergeSort(int* arr, int s, int e){
//     if(s >= e)
//         return;

//     int mid = (s+e)/2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid+1, e);
//     merge(arr, s, e);
// }
// Divide Step: The array is divided into two halves at each recursive call.

// This division process continues until the base case is reached (single element or invalid array).
// The number of divisions required to reach the base case is log n (where n is the number of elements in the array).
// Merge Step: After dividing, the merge function is called to merge the sorted subarrays.

// The merge process takes linear time, O(n), because it involves comparing and copying elements from the subarrays back into the original array.
// Merge Function
// The merge function merges two sorted subarrays into a single sorted array.

// void merge(int* arr, int s, int e){
//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int* left = new int[len1];
//     int* right = new int[len2];

//     int k = s;
//     for(int i=0; i<len1; i++){
//         left[i] = arr[k];
//         k++;
//     }

//     k = mid+1;
//     for(int i=0; i<len2; i++){
//         right[i] = arr[k];
//         k++;
//     }

//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while(leftIndex < len1 && rightIndex < len2){
//         if(left[leftIndex] < right[rightIndex]){
//             arr[mainArrayIndex] = left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         }else{
//             arr[mainArrayIndex] = right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//         }
//     }

//     while(leftIndex < len1){
//         arr[mainArrayIndex] = left[leftIndex];
//         mainArrayIndex++;
//         leftIndex++;
//     }

//     while(rightIndex < len2){
//         arr[mainArrayIndex] = right[rightIndex];
//         mainArrayIndex++;
//         rightIndex++;
//     }
// }
// Copying Elements: Copying elements from the original array to the left and right subarrays takes O(n) time.
// Merging Elements: Merging the elements from the left and right subarrays back into the original array also takes O(n) time.
// Overall Time Complexity
// Divide Step: The array is divided into two halves at each level of recursion, resulting in log n levels.
// Merge Step: At each level of recursion, merging the subarrays takes O(n) time.
// Combining these two steps, the overall time complexity of merge sort is: [ O(n \log n) ]

// This is because:

// There are log n levels of recursion (due to the divide step).
// At each level, merging takes O(n) time.
// Thus, the total time complexity is: [ O(n) \times O(\log n) = O(n \log n) ]


// Space Complexity
// The space complexity of merge sort is determined by the additional memory required for the temporary arrays used during the merge process.

// Merge Function
// The merge function uses additional space to store the left and right subarrays.

// void merge(int* arr, int s, int e){
//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int* left = new int[len1]; // DYNAMIC MEMORY ALLOCATION
//     int* right = new int[len2]; // DYNAMIC MEMORY ALLOCATION

//     // COPY VALUES
//     int k = s;
//     for(int i=0; i<len1; i++){
//         left[i] = arr[k];
//         k++;
//     }

//     k = mid+1;
//     for(int i=0; i<len2; i++){
//         right[i] = arr[k];
//         k++;
//     }

//     // MERGE THE TWO SORTED ARRAYS
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while(leftIndex < len1 && rightIndex < len2){
//         if(left[leftIndex] < right[rightIndex]){
//             arr[mainArrayIndex] = left[leftIndex];
//             mainArrayIndex++;
//             leftIndex++;
//         }else{
//             arr[mainArrayIndex] = right[rightIndex];
//             mainArrayIndex++;
//             rightIndex++;
//         }
//     }

//     // COPY LOGIC FOR LEFT ARRAY
//     while(leftIndex < len1){
//         arr[mainArrayIndex] = left[leftIndex];
//         mainArrayIndex++;
//         leftIndex++;
//     }

//     // COPY LOGIC FOR RIGHT ARRAY
//     while(rightIndex < len2){
//         arr[mainArrayIndex] = right[rightIndex];
//         mainArrayIndex++;
//         rightIndex++;
//     }

//     delete[] left;
//     delete[] right;
// }
// Temporary Arrays: The merge function allocates two temporary arrays, left and right, to store the elements of the left and right subarrays.
// Space Usage: The total space used by these temporary arrays is proportional to the size of the array being sorted. For each merge operation, the space required is O(n), where n is the number of elements in the array.
// Recursive Calls
// The mergeSort function makes recursive calls to sort the subarrays.

// void mergeSort(int* arr, int s, int e){
//     if(s >= e)
//         return;

//     int mid = (s+e)/2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid+1, e);
//     merge(arr, s, e);
// }
// Call Stack: Each recursive call adds a new frame to the call stack. The maximum depth of the recursion is log n (where n is the number of elements in the array).
// Space Usage: The space required for the call stack is O(log n).
// Overall Space Complexity
// The overall space complexity of merge sort is the sum of the space required for the temporary arrays and the space required for the call stack.

// Temporary Arrays: O(n)
// Call Stack: O(log n)
// Combining these, the overall space complexity is: [ O(n) + O(\log n) = O(n) ]

// Thus, the space complexity of merge sort is O(n).