#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUpperCase(char arr[]){
    int n = strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A';
    }
}
int main(){
    char arr[100] = "rahul";
    convertIntoUpperCase(arr);
    cout<< arr <<endl;
    return 0;
}