#include<iostream>
using namespace std;



// PASS BY REFERENCE
// void solve(int& num){
//     // num ++;
//     num = 50;
// }

// void solved(int* val){
//     *val =  *val + 1;
// }

// PASS BY REFERENCE
void util( int* &p){
    p = p + 1;
}

int main(){

    // int a = 5;

    // // Creating a reference variable
    // int &b = a;

    // cout << a <<endl;
    // cout << b <<endl;

    // a++;
    // cout << a <<endl;
    // cout << b <<endl;

    // b++;
    // cout << a <<endl;
    // cout << b <<endl;


    // --------------------PASS BY REFERENCE

    // int a = 5;
    // solve(a);
    // cout << a << endl;

    // int a = 12;
    // solved(&a);
    // cout << a << endl;

    // -----or----

    // int *p = &a;
    // solved(p);
    // cout << a << endl;

    int a = 5;
    int *p = &a;

    cout << "before" << p << endl;
    util(p);

    cout << "after" << p << endl;

    return 0;
}