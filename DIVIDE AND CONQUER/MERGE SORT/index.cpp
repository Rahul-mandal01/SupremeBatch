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