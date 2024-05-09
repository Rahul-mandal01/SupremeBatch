#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    cout<<" Please enter the starting number: ";
    int m;
    cin>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< m <<"*";
        }
        m++;

        cout<<endl;
    }

            m--;

        for(int i=0; i<n-1; i++){
                m--;
            for(int j=0; j<n-i-1; j++){
                cout<<m<<"*";
            }

            cout<<endl;
    }

}