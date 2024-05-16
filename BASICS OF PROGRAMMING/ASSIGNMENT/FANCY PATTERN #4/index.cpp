#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        int count = 0;
        for(int j=0; j<=2*i; j++){
            if(j==0 || j==2*i){
                cout<<"* ";
            }
            else if (j<=i){
                count++;
                cout<<count<<" ";

            }
            else{
                count--;
                cout<<count<<" ";
            }
        }
        cout<<endl;
    }
}