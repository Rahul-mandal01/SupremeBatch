#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0; row<n; row=+1){
        //SPACES
        for(int col=0; col<n-row-1; col+=1){
            cout<<" ";
        }
    }

    //NUMBERS WITH SPACE IN BETWEEN
    int start=1;
    for(int col=0; col<2*row+1; col+=1){
        // FIRST ROW OR LAST ROW
        if?(row==0 || row==n-1 ){
            if(col%2 ==0){
                // EVEN
                cout<<start;
                start+=1
            }
        }

    }
}