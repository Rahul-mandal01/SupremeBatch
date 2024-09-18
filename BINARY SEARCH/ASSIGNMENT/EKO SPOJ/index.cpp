#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<long long int> trees, long long int mid, long long int m){
    long long int woodCollected = 0;
    for(long long int i =0; i<trees.size(); i++){
        if(trees[i] > mid ){
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;  // return true if wood collected is greater than or equal to m, else return false.  // 1000000000000000000 is a large number to handle large input values.  // 10^18 is also a large number to handle large input values.  // 10^12 is a reasonable number to handle large input values.
}

long long int maxSawBladeHeight(vector<long long int> trees, long long int m){
    long long int start=0, end, ans = -1;
    end = *max_element(trees.begin(),trees.end()); //----------this STL function return maximum element

    while(start <= end){
        long long int mid = start + (end-start)/2;
        if(isPossibleSolution(trees, mid, m)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
      return ans;
}
int main(){
    long long int n, m;
    cin>> n >> m;
    vector<long long int> trees;
    while(n--){
        long long int height;
        cin >> height;
        trees.push_back(height);
    }

    cout<< maxSawBladeHeight(trees, m) <<endl;


    return 0;   
}