#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    
    int arr[]={2,7,1,8,5,4,3,1,5,6};
    int size= 11;
    
    // initialise the mini variable with maximum possible integer value
    int mini = INT_MAX;
    
    for(int i=0; i<size; i++){
        if(arr[i] < mini){
            // found a number greater than maxi, update maxi
            mini = arr[i];
        }
    }

    cout<<"Minimum number is "<< mini <<endl;


    return 0;
}