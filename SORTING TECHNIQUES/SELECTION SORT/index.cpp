#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>arr{5,4,3,2,1};
    int n = arr.size();
    // SELECTION SORT
    // outer loop --> (n-1) rounds
    for(int i = 0; i<(n-1); i++){
        int minIndex = i;
        // inner loop --> finds the minimum element in the remaining unsorted part
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                // New minimum element, then store
                minIndex = j;
            }
        }
        // swaping 
        swap(arr[i], arr[minIndex]);
    }
    // Printing the sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}