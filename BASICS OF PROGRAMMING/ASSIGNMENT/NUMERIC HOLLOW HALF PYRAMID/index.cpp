#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k=1;
        for(int j=0; j<=i; j++){
            if( j==0 || i==(n-1) ){
                cout<< k <<"  " ;
                k++;
            }

            else if( j==i){
                k--;
                cout<< k+i;
            }
            else{
                cout<<"   ";
            }
        }

        cout<<endl;
    }

}