#include<iostream>
using namespace std;

int slowExponentiation(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans = ans * a;
    }
    return ans;
} // Time Complexity : O(b)

int fastExponentiation(int a, int b){
    int ans = 1;
    while(b>0){
        if( b & 1){
            // odd number
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1; // divide by 2
    }
    return ans;
} // Fast Exponentiation : O(logb)

int main(){
    cout << slowExponentiation(5, 4) << endl;
    cout << fastExponentiation(5, 4) << endl;
    return 0;
}