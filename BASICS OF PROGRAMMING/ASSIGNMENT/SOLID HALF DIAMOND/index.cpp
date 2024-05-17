#include<iostream>
using namespace std;
int main(){

    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<2*n-1; i++){
        int condition = 0;
        if(i<n){ //Growing phase of Diamond
            condition = i;
        }
        else{ //Shrinking phase of Diamond
            condition = n- (i%n) -2;
        }
        for(int j=0; j<=condition; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}