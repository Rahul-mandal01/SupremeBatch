#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi){
    // BASE CASE
    if( i >= n ){
        // ARRAY AGAR KHATM HO GYA, POORA TRAVERSE HO GYA
        // THEN WAAPAS AA JAO
        return;
    }

    // 1 CASE SOLVE KRNA HAI
    // CURRENT ELEMENT KO CHECK KRO FOR MAX
    if(arr[i] > maxi){
        maxi = arr[i];
    }

    // BAAKI RECURSION SAMBHAL LEGA
    findMax(arr, n, i+1, maxi);
}
int main(){
    int arr[9] = {10,20,90,66,87,89,30,40,50};
    int n = 9;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);

    cout << "Maximum element is: " << maxi << endl;

    return 0;
}
