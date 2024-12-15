#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[], int n, int i, int &mini){
    // BASE CASE
    if( i >= n ){
        // ARRAY AGAR KHATM HO GYA, POORA TRAVERSE HO GYA
        // THEN WAAPAS AA JAO
        return;
    }

    // 1 CASE SOLVE KRNA HAI
    // CURRENT ELEMENT KO CHECK KRO FOR MAX
    if(arr[i] < mini){
        mini = arr[i];
    }

    // BAAKI RECURSION SAMBHAL LEGA
    findMin(arr, n, i+1, mini);
}
int main(){
    int arr[9] = {10,20,90,66,87,89,5,40,50};
    int n = 9;
    int i = 0;
    int mini = INT_MAX;
    findMin(arr, n, i, mini);

    cout << "Minimum element is: " << mini << endl;

    return 0;
}
