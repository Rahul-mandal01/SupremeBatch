#include<iostream>
using namespace std;

int factorial(int n){
    cout << "Function is called for n : " << n << endl;

    // BASE CASE
    if( n == 1)
        return 1;
    
    int chhotiProblemAns = factorial(n-1);
    int badiProblemAns = n * chhotiProblemAns;

    return badiProblemAns;
}

int main(){

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is: " << ans << endl;

    return 0;
}