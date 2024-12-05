#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    // BASE CASE
    if(s > e)
        return -1;
    
    int mid = (s+e)/2;
    if(arr[mid] == key)
        return mid;
    
    if(arr[mid] < key)
        return binarySearch(arr, mid+1, e, key);
    else
        return binarySearch(arr, e, mid+1, key);

}
int main(){

    vector<int> v{10,20,40,60,70,98,99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = binarySearch(v, s, e, target);

    cout << "Answer is: " << ans << endl;

    return 0;
}