#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

int main(){
    char name[55];
    cin >> name;

    cout << "Length of String is: "<< getLength(name) <<endl;

    return 0;
}