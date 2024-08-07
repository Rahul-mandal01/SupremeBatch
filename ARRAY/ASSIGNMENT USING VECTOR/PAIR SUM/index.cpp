#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{10,20,40,60,70,80};
    int sum = 80;

    // print all pairs

    // outer loop will be traverse for each elements
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        // for each element, will traverse through all elements
        for(int j = i+1; j<arr.size(); j++){
            // cout<<"("<< element <<","<< arr[j] <<")" <<endl;
            if(element + arr[j] == sum){
                cout<< "Pair Found:("<<element <<"," <<arr[j]<<")"<<endl;
            }
        }

    }

    return 0;
}