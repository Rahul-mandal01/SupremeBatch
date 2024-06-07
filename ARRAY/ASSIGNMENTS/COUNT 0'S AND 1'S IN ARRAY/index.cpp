#include<iostream>
using namespace std;
int main(){
    
    int arr[] = {1,0,1,0,1,0,1,0,1,0,1,5};

    int size = 12;

    int numZero = 0;
    int numOne = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }


    cout<<"No. of zeroes "<< numZero <<endl;
    cout<<"No. of ones "<< numOne <<endl;

    return 0;
}