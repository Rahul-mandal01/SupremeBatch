#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>& arr, int& n, int i){
    // BASE CASE
    if(i == n-1)
        return true;
    
    // SOLVE 1 CASE
    if(arr[i+1] <= arr[i])
        return false;

    // REST LEAVE ON RECURSION
    return checkSorted(arr, n, i+1);
}
int main(){
    vector<int> v{2,2};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v, n, i);

    if(isSorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}