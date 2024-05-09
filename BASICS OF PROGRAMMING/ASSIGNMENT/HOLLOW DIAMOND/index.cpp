#include<iostream>
using namespace std;
int main(){
    cout<<"Please Enter the number:";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j< (2*n)-1 ; j++){

            if(j<n-i-1){
                cout<<"  ";
            }

            else if(k<2*i+1){
                if(k==0 || k==2*i){
                    cout<<"* ";
                }
                else{
                    cout<< "  ";
                }
                k++; 
            }

            else 
                cout<< "  ";
       
        }

        cout<< endl;

    }


    for(int i =0; i<n; i++){
        for(int j=0; j<2*n-1; j++){
            if(j<i){
                cout<<"  ";
            }
        }

        for(int j=0; j<2*n-i-1; j++){
            if(j==0 || j==2*n-2*i-2){
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
        }


            cout<<endl;
    }


}