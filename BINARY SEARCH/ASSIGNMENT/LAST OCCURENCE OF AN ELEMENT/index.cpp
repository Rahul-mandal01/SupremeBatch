#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int lastOccurence(vector<int>v, int target){
    int ans = -1;
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end-start)/2;


    while(start <= end){
        if(v[mid] == target){
            ans = mid;
            start = mid+1;
        }

        else if(v[mid] < target){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

    mid = start + (end-start)/2;
    }

    return ans;
}
int main(){
    vector<int> v {2,5,6,6,6,6,6,7,7,7,7,9,20};
    int target = 7;

    int indexOfLastOcc = lastOccurence(v, target);

    cout<<"ans is: "<< indexOfLastOcc << endl;

    // ----------------------ALTERNATE WAY--------------
    auto ans2 = upper_bound (v.begin(), v.end(), 7);
    cout<<"ans2 is: "<< ans2 - v.begin()-1 << endl;

    return 0;
}