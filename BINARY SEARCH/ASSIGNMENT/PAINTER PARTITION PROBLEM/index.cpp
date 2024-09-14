//-----------------GFG----------------

// The Painter's Partition Problem-II
// Difficulty: HardAccuracy: 27.52%Submissions: 117K+Points: 8
// Dilpreet wants to paint his dog's home that has n boards with different lengths. The length of ith board is given by arr[i] where arr[] is an array of n integers. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board. 

// The problem is to find the minimum time to get this job done if all painters start together with the constraint that any painter will only paint continuous boards, say boards numbered {2,3,4} or only board {1} or nothing but not boards {2,4,5}.


// Example 1:

// Input: n = 5, k = 3, arr[] = {5,10,30,20,15}
// Output: 35
// Explanation: The most optimal way will be: Painter 1 allocation : {5,10}, Painter 2 allocation : {30}, Painter 3 allocation : {20,15}, Job will be done when all painters finish i.e. at time = max(5+10, 30, 20+15) = 35
// Input: n = 4, k = 2, arr[] = {10,20,30,40}
// Output: 60
// Explanation: The most optimal way to paint: Painter 1 allocation : {10,20,30}, Painter 2 allocation : {40}, Job will be complete at time = 60
// Your task:
// Your task is to complete the function minTime() which takes the integers n and k and the array arr[] as input and returns the minimum time required to paint all partitions.

// Expected Time Complexity: O(n log m) , m = sum of all boards' length
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ n ≤ 105
// 1 ≤ k ≤ 105
// 1 ≤ arr[i] ≤ 105



//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    bool isPossibleSolution(int a[], int n, int k, long long mid){
        long long timeSum = 0;
        int c =1;
        for(int i=0; i<n; i++){
            if(a[i] > mid){
                return false;
            }
            if(a[i] + timeSum > mid){
                c++;
                timeSum = a[i];
                if(c>k)   return false;
            }
            else{
                    timeSum += a[i];
            }
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long start = 0;
        long long end = 0;
        
        for(int i=0; i<n; i++){
            end += arr[i];
        }
        
        long long ans = -1;
        
        while(start <= end){
            long long mid = start + (end-start)/2;
            if( isPossibleSolution( arr, n, k, mid )){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends