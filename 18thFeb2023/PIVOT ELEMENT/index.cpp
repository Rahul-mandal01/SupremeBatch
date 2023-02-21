#include<iostream>
#include<vector>
using namespace std;

int findPivot(int arr[],int size){
    int s=0;
    int e=arr.size()-1;
    int mid= s+(e-s)/2;
    
    while(s<=e){
    if(arr[mid]>arr[mid+1])
        return mid;

    if(arr[mid]<arr[mid-1])
        return mid-1;
    if(arr[s]>arr[mid])
        e=mid-1;

    else
        s=mid+1;
    
    mid= s+(e-s)/2;
    }

    return -1;
    
}

int main()
{
    vector<int> arr{3,4,5,6,7,1,2};
    int size=7;
    int ans = findPivot(arr,size);

    cout<< "Pivot Element is: "<< ans<< endl;

    return 0;
}
