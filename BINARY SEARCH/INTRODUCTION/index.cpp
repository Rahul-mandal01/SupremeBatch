#include<iostream>
#include<algorithm>
#include<vector> 
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    int mid = (start + (end-start) )/ 2;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            // element found, then return index
            return mid;
        }
        else if( target < element ){
            // search in left
            end = mid - 1;
        }
        else{
            // search in right
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    // element is not found
    return -1;
}
int main(){
    // int arr[] ={2,4,6,8,10,12,16};
    // int size = 7;
    // int target = 2;

    // int indexOftarget = binarySearch(arr, size, target);

    // if(indexOftarget == -1){
    //     cout<< "Target not found" <<endl;
    // }
    // else{
    //     cout<< "Target found at index: " << indexOftarget << " index" << endl;
    // }

    // vector<int> v{2,4,6,8,10,12,16};
    // if(binary_search(v.begin(),v.end(),80)){
    //     cout<<"Element found in vector."<<endl;
    // }
    // else{
    //     cout<<"Element not found in vector."<<endl;
    // }

    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;

    if(binary_search(arr, arr + size, 12)){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }

    return 0;
}