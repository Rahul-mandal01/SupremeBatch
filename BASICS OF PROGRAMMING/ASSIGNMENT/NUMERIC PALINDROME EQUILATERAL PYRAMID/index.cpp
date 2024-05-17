#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;
    int k=n;

    for(int i=0; i<n; i++){
        int count=1;

        for(int j=0; j<k; j++){
            if(j<n-i-1){
                cout<<"  ";
            }
            else if(j<=n-1){
                cout<< count <<" ";
                count++;
            }
            else if(j==n){
                count=count-2;
                cout<<count<<" ";
                count--;
            }
            else{
                cout<<count<<" ";
                count--;
            }
        }
        k++;
        cout<<endl;

    }
}