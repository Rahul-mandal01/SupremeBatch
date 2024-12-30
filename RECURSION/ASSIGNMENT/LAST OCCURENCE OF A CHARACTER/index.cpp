#include<iostream>
using namespace std;

void lastOccLTR(string& s, char x, int i, int& ans){
    // BASE CASE
    if(i >= s.size()){
        return;
    }

    // EK CASE SOLVE KRNA
    if(s[i] == x)
        ans = i;
    
    // BAKI RECURSION SAMBHAL LEGA
    lastOccLTR(s, x, i+1, ans);
}


void lastOccRTL(string& s, char x, int i, int& ans){
    // BASE CASE
    if(i < 0 ){
        return;
    }

    // EK CASE SOLVE KRNA
    if(s[i] == x){
        ans = i;
        return;
    }

    
    // BAKI RECURSION SAMBHAL LEGA
    lastOccLTR(s, x, i-1, ans);
}
int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;

    int ans = -1;
    // METHOD 1: LEFT TO RIGHT
    lastOccLTR(s, x, 0, ans);

    // METHOD 2: RIGHT TO LEFT
    // lastOccRTL(s, x, s.size()-1, ans);
    cout << ans << endl;
    
    return 0;
}