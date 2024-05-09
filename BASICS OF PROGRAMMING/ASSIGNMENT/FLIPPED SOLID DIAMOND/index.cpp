#include<iostream>
using namespace std;
int main(){
    cout<<"Please Enter the number:";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k=1;
        for(int j=0; j<2*n; j++){
           
           if(j<n-i){
            cout<<"* ";
           }
           else if(k<2*i+1){
            cout<<"  ";
            k++;
           }
           else{
            cout<<"* ";
           }
        }

        cout<<endl;
    }

    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<2*n; j++){
            if(j<i+1){
                cout<<"* ";
            }
            else if(k<2*n-2*i-2){
                cout<<"  ";
                k++;
            }
            else{
                cout<<"* ";
            }

        }
        cout<<endl;
    }


}