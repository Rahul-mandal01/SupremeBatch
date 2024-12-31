#include<iostream>
using namespace std;

void revString(string &s, int start, int end){


    // BASE CASE
    if(start >= end) 
        return;
    
    // EK CASE
    swap(s[start], s[end]);

    // BAAKI RECUSRION SAMBHAL LEGA
    revString(s, start + 1, end - 1);
}
int main(){
    string s ;
    cin >> s;
    int n = s.size();
    int start = 0;
    int end = n - 1;

    revString(s, start, end);
    cout << s << endl;

    return 0;   
}