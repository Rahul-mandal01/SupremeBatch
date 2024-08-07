#include<iostream>
#include<cstring>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

void increment(int arr[], int size){
    arr[0] = arr[0]+10;
    printArray(arr,size);
}   



int main(){

    //---------- Array Declare

    // int arr[7];
    // cout<< arr <<endl;
    // cout<< &arr <<endl;

    //-------------- array initialisation

    // int arr[]={1,3,2,4,5};
    // int brr[5]={1,3,2,4,5};
    // int crr[10]={1,3,2,4,5};

    //------ ERROR
    // int crr[2]={1,3,2,4,5};

    // cout<<"Array created successfully"<<endl;

    // int arr[] = {1,3,5,7,9};

    // printing all values
     
    // for(int index=0; index<5; index++){
    //     cout<<arr[index]<<" ";
    // }

    // int n;
    // cin>>n;
    // ------------------BAD PRACTICE
    // int arr[n];
    

    // int arr[10];

    // cout<<"Enter the input values in Array "<<endl;

    //--------------- taking input in array
    // for(int i=0; i<5; i++){
    //     cin>>arr[i];
    // }

    // printing

    // cout<<"Printing the values in array"<<endl;

    // for(int i=0; i<5; i++){
    //     cout<< "(2)*(arr[i])"<<" ";
    // }

    // for(int i=0; i<5; i++){
    //     cout<< "1"<<" ";
    // }

    // int arr[10] = {1,2};

    //---------------------Printing Garbage Value
    // int arr[10] ;

    //---------------------All the values should be 0
    // int arr[10] = {0} ;


    // -----------------------------Using mem set
    // int arr[10];
    //  memset(arr , 0 , sizeof(arr));

     


    // for(int i=0; i<10; i++){
    //     cout<<arr[i] <<" ";
    // }

    
    // ---------------------PASS BY REFERENCE-----------

    // int arr[]={2,5};
    // int size = 2;

    // increment(arr,size);

    // printArray(arr, size);


    return 0;
}