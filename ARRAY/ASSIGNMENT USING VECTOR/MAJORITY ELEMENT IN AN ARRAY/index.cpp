

// --------------PROBLEM STATEMENT------------------------


// Input : A[]={3, 4, 2, 4, 2, 4, 4}
// Output : 4
// Explanation: The frequency of 4 is greater than the half of the size of the array size. 

// Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4}
// Output : No Majority Element
// Explanation: There is no element whose frequency is greater than the half of the size of the array size.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={12,2,12,3,12, 4, 12, 4, 12, 4,12, 4};
    int n = arr.size();


    for(int i=0; i<n; i++){    
        int count = 1;
        for(int j=i+1;  j<n; j++ ){
            // cout<<"Value of i and j is: "<<i<<" "<<j<<endl;
            // cout<<"Value of arr[i] and arr[j] is: "<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i] == arr[j]){
                count++;
                // cout<<"Value of count is: "<<count<<endl;
                
                if(count > n/2 ){
                    cout<<"printing majority: "<< arr[i] <<endl;
                }
                else{
                    cout<<"NO MAJORITY ELEMENT FOUND "<<endl;
                }
            }

        }

    }




    return 0;
}