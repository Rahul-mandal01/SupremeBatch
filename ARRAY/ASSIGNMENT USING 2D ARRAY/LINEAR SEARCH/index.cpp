#include<iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key)
                return true;
        }
    }

    // value is not found
    return false;
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int key;

    cout<<"Enter the value of 3*3 array"<<endl;
    // taking input array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the value you want to search for"<<endl;
    cin>> key;

    if(findKey(arr, rows, cols, key))
        cout<<"Found "<<key<<endl;
    else   
        cout<<"Failed to find "<<key<<endl;
}