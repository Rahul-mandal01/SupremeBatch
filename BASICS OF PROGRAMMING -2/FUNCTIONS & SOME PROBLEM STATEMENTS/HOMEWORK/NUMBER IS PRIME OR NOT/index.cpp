#include<iostream>
using namespace std;

bool isPrime(int num){

    if(num<=1)
        return false;
    
    for(int i=2; i*i <= num; i++){
        if(num % i == 0)
            return false;
    }

    return true;

}

int main(){
    int num;
    cout<<"Please Enter the non-negative Integer: ";
    cin>>num;


    if(isPrime(num)){
        cout<< num <<" is Prime";
    }
    
    else{
        cout<< num <<" is not Prime";
    }

    return 0;
}