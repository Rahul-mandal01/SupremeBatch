#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            for(int k=0; k<n-i-1; k++){
                cout<<" ";
            }
            

        }
        cout<<endl;

    }
}