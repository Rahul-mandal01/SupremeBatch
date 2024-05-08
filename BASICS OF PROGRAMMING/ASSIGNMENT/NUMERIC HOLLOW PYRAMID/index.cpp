#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;


    for(int i=0; i<n-1; i++){

        // Condition-1.. Printing Spaces
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }

        // Condition-2...Printing Digits

        for(int j=0; j<2*i+1; j++){
            if( j==0){
                int count=1;
                cout<< count <<" ";               
            }

            else if(j==2*i ){
                int count = i+1;
                cout<< count<< " ";
            }
            else{
                cout<<"  ";
            }
        } 
       cout<<endl;
    }

    if(int i =n-1){

        for(int j=0; j<n; j++){
            int count = j+1;
            cout<<count<<"   ";
        }
    }


}