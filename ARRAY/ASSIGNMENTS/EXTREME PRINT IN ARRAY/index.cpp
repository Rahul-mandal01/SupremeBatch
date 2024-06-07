#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,6,45,58,8,5,22,2,25,32,65,55};
    int size = 14;

    int start =0;
    int end = size-1;

    while(start<=end){
        // first we have to put breaking condition
        if(start > end)
            break;
        
        if(start == end){
            cout<< arr[start]<<" ";
        }
        else{
            cout<< arr[start]<<" ";
            cout<< arr[end]<<" ";
        }

        start++;
        end--;

    }

    return 0;
}