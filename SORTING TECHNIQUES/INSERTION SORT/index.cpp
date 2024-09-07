#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> arr{10,1,7,6,14,9};
    int n = arr.size();

    // Insertion sort
    for(int round = 1; round<n; round++){
        // STEP-A  -- FETCH
        int val = arr[round];

        // STEP-B -- COMPARE
        int j = round-1;

        for(; j>=0; j--){
            if(arr[j] > val){
                // STEP-C --SHIFT
                arr[j+1] = arr[j];
            }else{
                // STOP
                break;
            }
        }

        // STEP-D --COPY
        arr[j+1] = val;
    }

    // Print sorted array
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}