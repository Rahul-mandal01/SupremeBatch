#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={11,2,33,4,55,6,77,99,100,101,550,65,88};
    int k = 8;
    int m = arr.size();
    int n = arr.size()-k;

    vector<int> temp;

    for(int i = n; i<m; i++){
        temp.push_back(arr[i]);
    }

    for(int i=0; i<n; i++){
        temp.push_back(arr[i]);
    }

    for(auto val: temp){
        cout<< val<<" ";
    }

    return 0;
}