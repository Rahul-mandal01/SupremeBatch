#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = (s+(e-s))/2;

    while( s<=e ){
        if(arr[mid]>arr[mid+1] && mid+1 < arr.size())
            return mid;

        if(mid-1>=0 && arr[mid-1]>arr[mid])
            return mid-1;

        if(arr[s] >= arr[mid])
            e = mid-1;
        
        else
            s=mid+1;
        
        mid = (s+(e-s))/2;

    }

    return -1; // If no pivot found, return -1;
}
int main(){
    vector<int> arr{6,7,1,2,3,4,5,6};
    int ans = findPivot(arr);

    cout<<"Pivot element is: " << arr[ans] <<endl;

    return 0;

}