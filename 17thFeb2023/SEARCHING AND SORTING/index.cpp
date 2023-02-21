#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target){
        int start=0;
        int end=size()-1;
        int mid=s+(e-s)/2;

        if(target == arr[mid])
            cout<<""




}




int binarySearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){
        
        if(arr[mid]==target)
            return mid;

        if(target<arr[mid])
            // left me search kro
            end=mid-1;
        
        else{
            // right me search kro
            start=mid+1;
        }

        mid=(start+end)/2;
    }

    return -1;
}




int main(){
    // int arr[]={2,4,6,8,10,12,14};
    // int size=7;
    // int target=22;

    // int indexOfTarget = binarySearch(arr,size,target);

    // if(indexOfTarget == -1){
    //     cout<<"Target Not Found"<<endl;}
    
    // else{
    //     cout<<"found at: "<<indexOfTarget<<" index"<<endl;
    // }



    vector<int> v{1,3,4,4,4,4,6,7};
    int target=4;

    int ans= firstOcc(v,target);
    cout<< "ans is: "<<ans<<endl;

    return 0;
}
