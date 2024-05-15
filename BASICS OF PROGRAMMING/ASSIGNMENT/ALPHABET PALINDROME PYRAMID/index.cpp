#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int k=0;
        for(int j=0; j<i+1; j++){
            char ch = 'A'+ k;
            cout<< ch <<" ";
            k++;
        }

        k--;
        for(int j=i; j>0; j--){
            k--;
            char ch = 'A'+ k;
            cout<< ch <<" ";
        }
 

       cout<<endl;
    }
}
