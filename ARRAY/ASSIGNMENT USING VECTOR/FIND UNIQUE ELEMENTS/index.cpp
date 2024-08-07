#include<iostream>
#include<vector>

using namespace std;

int findUnique(vector<int> arr){
    int ans=0;

    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }

    return ans;
    
}

int main(){

    cout<<"Enter the size of the Array"<<endl;
    int n; 
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements of the Array"<<endl;

    // -----taking input from the user------------------------

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout<<"Unique Elements is: " << uniqueElement<<endl;

    return 0;
}