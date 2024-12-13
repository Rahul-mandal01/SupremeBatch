#include<iostream>
using namespace std;

void printCounting(int n){
    // BASE CASE
    if( n == 0 )
        return;

    // PROCESSING CASE
    cout << n << " ";

    // RECURSIVE RELATION CALL 
    printCounting(n-1);
}


int main(){

    int n;
    cout << "Enter the value of n "<<endl;
    cin>> n;

    printCounting(n);
    
    return 0;
}