#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    
    int arr[]={2,7,1,8,5,4,3,1,5,6};
    int size= 11;
    
    // initialise the maxi variable with minimum possible integer value
    int maxi = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(arr[i] > maxi){
            // found a number greater than maxi, update maxi
            maxi = arr[i];
        }
    }

    cout<<"Maximum number is "<< maxi <<endl;


    return 0;
}