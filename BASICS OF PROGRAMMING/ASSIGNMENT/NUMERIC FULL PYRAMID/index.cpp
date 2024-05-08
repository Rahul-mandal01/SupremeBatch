#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){
            cout<< "  ";
        }

        for(int j=0; j<i+1; j++){
            int ans = i+1+j  ;
            
            cout<<ans<<" ";
        }

        for(int j=i; j>0; j--){
            int ans = i+j;
            cout<<ans<<" ";

        }


        cout<< endl;
    }
}