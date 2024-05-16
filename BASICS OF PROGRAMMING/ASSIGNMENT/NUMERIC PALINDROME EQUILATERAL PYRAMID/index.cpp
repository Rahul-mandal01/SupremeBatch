#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int count=1;

        for(int j=0; j<n-i-1; j++){
                cout<<"  ";
            }
        
        for( int j=0; j<i+1; j++){
                cout<< count <<" ";
                count++;
            }
        
        int num=i;
        for(int j=i ; j>0; j--){
            cout<< num <<" ";
            num--;
        }


        cout<<endl;

    }
}