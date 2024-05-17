#include<iostream>
#include"assert.h"
using namespace std;
int main(){

    cout<<"Please enter any number in between 1 to 10 : ";
    int n;
    cin>>n;
    assert(n<=9);

    for(int i=0; i<n; i++){

        int start_num_index = 8-i; // from which column you want value to be start printing
        int num = i+1;  // printing digits
        int count_num = num; //how many times we want print the no.
        for(int j=0; j<17; j++){
            if( j== start_num_index && count_num> 0){
                cout<<num;
                start_num_index+=2;
                count_num--;
            }
            
            else{
                cout<<"*";
            }
        }

        cout<<endl;
    }
}