#include<iostream>
using namespace std;
int main(){

    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<n-1; i++){
        for(int j=n-i-1; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}