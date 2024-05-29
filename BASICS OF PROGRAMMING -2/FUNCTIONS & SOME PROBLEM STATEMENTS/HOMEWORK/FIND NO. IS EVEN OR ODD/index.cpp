#include<iostream>
using namespace std;

bool isEven(int num){
    return (num %2 == 0);
}

int main(){
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    cout<<endl;

    if(isEven(n))
        cout<< n <<" is even";
    else
        cout<< n <<" is odd";

    return 0;
}