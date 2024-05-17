#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< count<< " ";
            count++;
        }
        cout<<endl;
    }
}