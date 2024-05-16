#include<iostream>
using namespace std;
int main(){

    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){

        for(int j=0; j<3*n+2 ; j++){

            if(j<2*n-i-2){
                cout<<"*";
            }


            else if( j >= 2*n-i-2 && j < 2*n+i-1 ){

                if( j == 2*n-i-2 || (j + i) %2==0 ){
                    cout<< i+1 ; 
                }
                else{
                    cout<<"*";
                }

            }

            else{
                cout<<"*";
            }




        }
        cout<<endl;
    }
}