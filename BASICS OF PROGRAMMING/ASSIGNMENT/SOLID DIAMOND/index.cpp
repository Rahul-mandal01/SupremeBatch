#include<iostream>
using namespace std;
int main(){
    cout<<" Please enter the number:";
    int n;
    cin>>n;

    // printing Upper Part
    for(int i=0; i<n; i++){

        for(int j=0; j< n-i-1 ; j++){
                cout<<" ";
        }

        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }

        cout<< endl;

    }

        // Printing Lower Part
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout<<" ";
            }

            for(int j=0; j<n-i; j++){
            cout<<"* ";
            }

            cout<<endl;
        }
}