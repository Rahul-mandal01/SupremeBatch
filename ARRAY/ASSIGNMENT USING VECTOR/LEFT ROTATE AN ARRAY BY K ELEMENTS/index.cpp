#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={11,2,33,4,55,6,77,99,100,101,101,101,101,101,55,6,77,99,100,101,101,88};
    int k = 5;
    int n = arr.size();

    vector<int> temp;

    for(int i = k; i<n; i++){
        temp.push_back(arr[i]);
    }

    for(int i=0; i<k; i++){
        temp.push_back(arr[i]);
    }

    for(auto val: temp){
        cout<< val<<" ";
    }

    return 0;
}