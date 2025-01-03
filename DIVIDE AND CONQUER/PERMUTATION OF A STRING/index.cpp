#include<iostream>
using namespace std;

void printPermutations(string str, int i){
    // BASE CASE
    if( i >= str.length()){
        cout << str << endl;
        return;
    }

    // SWAPPING
    for(int j = i; j<str.length(); j++){
        // SWAPPING
        swap(str[i], str[j]);

        // RECURSIVE CALL
        printPermutations(str, i+1);

        // BACKTRACKING : TO RECREATE THE ORIGINAL INPUT STRING
        swap(str[i], str[j]);
    }
}
int main(){
    string s = "ABC";
    int i = 0;
    printPermutations(s, i);

    return 0;
}