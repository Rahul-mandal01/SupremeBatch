#include<iostream>
#include<vector>
using namespace std;

void checkKey(string str, int i, int n, char key, vector<int>& ans){
    // BASE CASE
    if(i == n)
        // KEY NOT FOUND
        return ;
     
    //  1 CASE SOLVE KRDO
    if(str[i] == key)
        // STORE IN VECTOR
        ans.push_back(i);
    
    // BAAKI RECURSION SAMBHAL LEGA
    return checkKey(str, i+1, n, key, ans);
}
int main(){
    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';

    int i = 0;
    vector<int> ans;

    checkKey(str, i, n, key, ans);
    cout << "Printing answer" <<endl;
    for(auto val: ans){
        cout << val << " ";
    }
    cout << endl;


    return 0;
}