#include <iostream>
using namespace std;

int main(){
    // int a=5;
    // int b=5;

    // cout<< a <<endl;
    
    // cout<< &a <<endl;
    // cout<< &b <<endl;

    int a = 5;

    // POINTER CREATE
    int *ptr = &a;  //say like this --- ptr is a pointer to a

    // ACCESS THE VALUE ptr IS POINTING TO 
    cout << "Address of a is: " << &a <<endl;
    cout << "Value stored at ptr is: " << ptr <<  endl;
    cout << "Value ptr is pointing to is: " << *ptr << endl;       //--------------DEREFERENCE OPERATOR
    cout << &ptr << endl;
    // CHANGE THE VALUE THE POINTER IS POINTING TO



    // hiiiiii


    return 0;
}