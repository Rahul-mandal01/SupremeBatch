#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3], int rows, int col){
    int max = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int getMin(int arr[][3], int rows, int col){
    int min = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main(){

     int arr[3][3];
     int row = 3;
     int col = 3;


    // taking input from user
    cout<<"Enter the input of 3*3 array"<<endl; 
     for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
     }


    cout<<"Maximum element in array: "<<getMax(arr, row, col)<<endl;
    cout<<"Minimum element in array: "<<getMin(arr, row, col)<<endl;


    return 0;
}