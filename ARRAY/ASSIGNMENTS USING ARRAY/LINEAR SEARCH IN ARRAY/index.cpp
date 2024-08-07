#include<iostream>
using namespace std;

bool find(int arr[], int size, int key){
    // Linear Search
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }

    return false;
}


int main(){

    int arr[5] = {2,5,3,6,4};
    int size = 5;

    cout<<" Please enter the key Value to find: ";
    int key;
    cin>>key;

    if(find(arr, size, key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}