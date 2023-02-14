#include<iostream>
using namespace std;

void transpose(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            swap(arr[i][j]=arr[j][i]);
        }
    }
}


int main()
{
    cout<< "Printing Array "<<endl;
    printArray(arr, rows, cols);
    
}