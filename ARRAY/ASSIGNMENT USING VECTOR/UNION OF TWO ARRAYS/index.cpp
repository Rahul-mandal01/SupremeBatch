#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int sizea =5;

    int brr[] = {6,7,8,9,10,11,12};
    int sizeb = 7;

    vector<int> ans;

    // push all the elements of vector arr in vector ans
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }


    // push all the elements of vector brr in vector ans
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    // print the ans array
    cout<<"printing the ans array "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;



}