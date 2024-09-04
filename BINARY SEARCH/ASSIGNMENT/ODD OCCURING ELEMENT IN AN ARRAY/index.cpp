#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(s == e){
            // single element
            return s;
        }

        // now we have 2 cases either mid will be even or odd
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid + 2;
            }else{
                e = mid;
            }
        }
        else {
            if(arr[mid] == arr[mid-1]){
                s = mid;
            }else{
                e = mid-1;
            }
        }
    mid = s +(e-s)/2;
    }
    return -1; // not found

}

int main(){
    vector<int> arr {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout<< "index is "<< ans <<endl;
    cout<< "value is "<<arr[ans]<<endl;
    return 0;
}