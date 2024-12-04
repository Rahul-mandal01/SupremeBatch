#include<iostream>
using namespace std;

void printDigits(int n){
    // BASE CASE
    if( n == 0 )
        return;


    int newValueOfN = n/10;

    // BAAKI RECURSION SAMBHAL LEGA
    printDigits(newValueOfN);

    // 1 CASE MAI SOLVE KARUNGA
    int digit = n % 10;
    cout << digit << " ";
}
int main() {
    int n =  50000;

    if(n == 0)
        cout << 0 <<endl;

    printDigits(n);

    return 0;
}