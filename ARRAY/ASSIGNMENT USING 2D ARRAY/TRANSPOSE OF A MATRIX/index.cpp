#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col, int transposeArr[][3]){
    for(int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            transposeArr[j][i] = arr[i][j]; 
        }
    }
}

void printArray(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] <<" ";
        }
        cout<<endl;
    }
}

void inputArray(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
     }
}
int main(){
    int arr[3][3];
    int transposeArr[3][3];
    int row=3;
    int col=3;
    // taking the input
    cout<<"please enter the input matrix "<<endl;
    inputArray(arr, row, col);
    
    transpose(arr, row, col, transposeArr);

    // printing the output
    cout<<"The transpose of the given matrix is "<<endl;    
    printArray(transposeArr, row, col);

    return 0;
}