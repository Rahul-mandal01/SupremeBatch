#include<iostream>
using namespace std;

bool isPalindrome(string& s, int start, int end){
    // BASE CASE
    if(s[start] >= s[end])
        return true;
    
    // SOLVE 1 CASE
    if(s[start] != s[end])
        return false;

    // REST LEAVE ON RECURSION
    return isPalindrome(s, start+1, end-1);

}
int main(){

    string s;
    cin >> s;

    cout << isPalindrome(s, 0, s.size()-1) << endl;

    return 0;
}