#include<iostream>
using namespace std;

unsigned long long factorial(int num){
    unsigned long long ans = 1;
    for(int i=1; i<=num; i++){
        ans*=i;
    }

    return ans;
}

int main(){
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.";
    }
    else {
        cout << "Factorial of " << num << " is " << factorial(num) << ".";
    }

    return 0;
}