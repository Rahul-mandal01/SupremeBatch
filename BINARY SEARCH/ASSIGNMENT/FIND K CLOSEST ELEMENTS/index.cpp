// LEETCODE--658
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

// An integer a is closer to x than an integer b if:

// |a - x| < |b - x|, or
// |a - x| == |b - x| and a < b
 

// Example 1:

// Input: arr = [1,2,3,4,5], k = 4, x = 3
// Output: [1,2,3,4]
// Example 2:

// Input: arr = [1,2,3,4,5], k = 4, x = -1
// Output: [1,2,3,4]
 

// Constraints:

// 1 <= k <= arr.length
// 1 <= arr.length <= 104
// arr is sorted in ascending order.
// -104 <= arr[i], x <= 104

class Solution {
public:
    int lowerBound(vector <int>&arr, int x ){
        int s = 0, e = arr.size()-1;
        int ans = e;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] >= x){
                ans = mid;
                e = mid - 1;
            }else if( x > arr[mid] ){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }

    vector<int> bs_method(vector<int> &arr, int k, int x){
        // lower bound
        int e = lowerBound(arr, x);
        int s = (e-1);
        while(k--){
            if(s < 0){
                e++;
            }
            else if(e >= arr.size()){
                s--;
            }
            else if(x-arr[s] > arr[e]-x){
                e++;
            }
            else{
                s--;
            }
        }
        return vector<int> (arr.begin()+s+1, arr.begin()+e);
    }

    vector<int> twoPtrMethod (vector<int> &arr, int k, int x){
        int s = 0, e = arr.size()-1;
        while( e-s >= k){
            if(x-arr[s] > arr[e]-x){
                s++;
            }
            else{
                e--;
            }
        } 

        // vector<int> ans;
        // for(int i=s; i<=e; i++){
        //     ans.push_back(arr[i]);
        // }
        // return ans;

        return vector<int> (arr.begin()+s , arr.begin()+e+1 );
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        // return twoPtrMethod(arr, k, x);
        return bs_method(arr, k, x);
    }
};