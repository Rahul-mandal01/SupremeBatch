#include <iostream>
using namespace std;

void util(int *p){
    // p = p + 1;
    *p = *p + 1;
}

void solve(int** ptr){
    // ptr = ptr + 1;       //output:12
    // *ptr = *ptr + 1;     //output:12
    **ptr = **ptr + 1;      //output:13
}

int main(){
    // int a=5;
    // int b=5;

    // cout<< a <<endl;
    
    // cout<< &a <<endl;
    // cout<< &b <<endl;

    // int a = 5;

    // POINTER CREATE
    // int *ptr = &a;  //say like this --- ptr is a pointer to a

    // ACCESS THE VALUE ptr IS POINTING TO 
    // cout << "Address of a is: " << &a <<endl;
    // cout << "Value stored at ptr is: " << ptr <<  endl;
    // cout << "Value ptr is pointing to is: " << *ptr << endl;       //--------------DEREFERENCE OPERATOR
    // cout << &ptr << endl;
    // CHANGE THE VALUE THE POINTER IS POINTING TO


    //-------------------FIND SIZE----------
    // int a=5;
    // int *p = &a;
    // cout<< sizeof(p) <<endl;


    // char ch = 'b';
    // char *c = &ch;
    // cout<< sizeof(c) <<endl;

    // double d = 1.03;
    // double *dtr = &d;
    // cout<< sizeof(dtr) <<endl;


    //--------------------BAD PRACTICE------------------------ 
    // int *ptr;
    // cout<< ptr <<endl;

    // NULL POINTER
    // int *ptr=0;
    // cout<< *ptr <<endl;


    // COPY POINTER

    // int a = 5;
    // int* ptr = &a;

    // int* dusraPtr = ptr;

    // cout<< *ptr <<endl;
    // cout<< *dusraPtr <<endl;


    // int a = 10;
    // int* p = &a;
    // int* q = p;
    // int* r = q;

    // cout << a <<endl;
    // cout << &a <<endl;
    // cout << p <<endl;
    // cout << &p <<endl;
    // cout << *p <<endl;
    // cout << q <<endl;
    // cout << &q <<endl;
    // cout << *q <<endl;
    // cout << r <<endl;
    // cout << &r <<endl;
    // cout << *r <<endl;
    // cout << (*p + *q + *r) <<endl;
    // cout <<  (*p)*2 + (*r)*3 <<endl;
    // cout << (*p/2) - (*q/2) <<endl;

    //---------------------------DOUBLE POINTERS--------------------------- 
    // int a = 5;
    // int *p = &a; //p is a pointer to integer data
    // int **q = &p; //q is a pointer to int* data

    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;
    // cout << "Value of p: " << p << endl;
    // cout << "Address of p: " << &p << endl;
    // cout << "Value of *p: " << *p << endl;
    // cout << "Value of q: " << q << endl;
    // cout << "Address of q: " << &q << endl;
    // cout << "Value of *q: " << *q << endl;
    // cout << "Value of **q: " << **q << endl;

    // int a = 5;

    // int *p = &a;

    // cout << endl << "Before" << endl;
    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;
    // cout << "Value of p: " << p << endl;
    // cout << "Value of *p: " << *p << endl;

    // util(p);

    // cout << endl << "After" << endl;
    // cout << "Value of a: " << a << endl;
    // cout << "Address of a: " << &a << endl;
    // cout << "Value of p: " << p << endl;
    // cout << "Value of *p: " << *p << endl;

    int x = 12;
    int *p = &x;
    int **q = &p;

    solve(q);

    cout << x << endl;








    return 0;
}