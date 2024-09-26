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

    cout <<"length is: "<< getLength(name) <<endl;
    cout <<"length is: "<< strlen(name) <<endl;

    return 0;
}