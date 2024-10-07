#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int cmp(char first, char second){
    return first>second; // Sort in descending order instead of ascending order
}

bool comparator(int a, int b){
    return a>b; // Sort in descending order instead of ascending order
}

int main(){
    string s = "babbar";
    vector<int> v{5,3,1,2,4};

    sort(s.begin(), s.end(), cmp);
    sort(v.begin(), v.end(), comparator);

    cout<< s << endl;

    for(auto i:v)
        cout<< i << " ";
    
    cout << endl;

    return 0;
}