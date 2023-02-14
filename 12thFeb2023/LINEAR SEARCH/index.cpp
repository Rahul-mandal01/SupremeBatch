#include<iostream>
using namespace std;

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(arr[i][j] == key)
                return true;
        }
    }

    // if value is not present
    return false;
}

int main{

    int key=1;
    if(findKey(arr,3,3,key)){
        cout<<
    }

    return 0;
}