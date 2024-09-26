#include<iostream>
#include<string.h>
using namespace std;

void convertIntoLowerCase(char arr[]){
    int n = strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'A' + 'a';
    }
}
int main(){
    char arr[100] = "RAHUL";
    convertIntoLowerCase(arr);
    cout<< arr <<endl;
    return 0;
}