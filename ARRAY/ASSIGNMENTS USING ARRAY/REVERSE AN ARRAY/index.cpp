#include<iostream>
using namespace std;

// Function to swap two numbers using a temporary variable
void swap_numbers(int arr[], int start, int end) {
    int temp = arr[start]; // Store the value of 'start' in 'temp'
    arr[start] = arr[end];        // Assign 'end' to 'start'
    arr[end] = temp;  // Assign 'temp' (original 'start') to 'end'
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = 7;

    int start = 0;
    int end = size-1;

    while(start<=end){

        // step 1
        swap_numbers(arr, start, end);
        // swap(arr[start], arr[end]);
        
        // step 2
        start++;
        // step 3
        end--;
    }

    // printing array


    cout<<"Swapped array: "; 
    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
}