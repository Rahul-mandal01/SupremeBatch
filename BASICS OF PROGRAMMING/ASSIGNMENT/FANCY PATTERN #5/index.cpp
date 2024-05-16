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
        for(int j=0; j<=2*i; j++){
            if(j%2==0){
                cout<< m;
                m++;
            }
            else{
                cout<<"*";
            }
        }
       

        cout<<endl;
    }


        for(int i=n-1; i>=0; i--){
            m=m-n;
            for(int j=0; j<=2*i; j++){
               if(j%2==0){
                cout<< m;
                m++;
            }
            else{
                cout<<"*";
            } 
        }

            cout<<endl;
    }

}