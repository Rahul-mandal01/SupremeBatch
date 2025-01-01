#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    // STEP1: CHOOSE PIVOT ELEMENTS
    int pivotIndex = s;
    int pivotElement = arr[s];

    // STEP2: FIND RIGHT POSITION FOR PIVOT ELEMENT AND PLACE IT THERE
    int count = 0;
    for(int i = s+1; i <=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    // JAB MAIN LOOP SE BAHAR HUA, THEN MERE PAAS PIVOT KI RIGHT POSITION KA INDEX READY HAI
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;
   

    // STEP3: LEFT ME CHHOTE AND RIGHT ME BADE

    int i = s;
    int j = e;

    while( i < pivotIndex && j > pivotIndex ){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

        // THERE COULD BE 2 CASES
        // A --> YOU FOUND THE ELEMENT TO SWAP
        // B --> NO NEED TO SWAP
        if( i < pivotIndex && j > pivotIndex )
            swap(arr[i], arr[j]);
    }
    return pivotIndex;  // RETURN PIVOT INDEX, SO THAT IT CAN BE SWAPPED WITH PIVOT ELEMENT IN PARTITION FUNCTION.  // IT WILL BE USED TO DIVIDE ARRAY INTO TWO PARTS
}
void quickSort(int arr[], int s, int e){
    // BASE CASE
    if(s >= e){
        return;
    }

    // PARTITION LOGIC, RETURN PIVOT INDEX
    int p = partition(arr, s, e);

    // RECURSIVE CALLS
    // PIVOT ELEMENT -> LEFT
    quickSort(arr, s, p-1);

    // PIVOT ELEMENT -> RIGHT
    quickSort(arr, p+1, e);
}
int main(){
    int arr[] = { 8,1,3,4,1,1,1,1,4,4,4,4,4,55,554,334,22,3,33,8,20,50,30 };
    int n = 23;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}