#include<iostream>
using namespace std;

void printColWiseSum(int arr[][3], int row, int col){ //except first bracket you have to put bound in all brackets
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum += arr[j][i];
        }
        cout<<sum<<endl;
    }

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

    printColWiseSum(arr, row, col);


    return 0;
}