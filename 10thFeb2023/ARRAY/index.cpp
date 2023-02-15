#include<iostream>
#include <cstring>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
}

void inc(int arr[], int size){
    arr[0]=arr[0]+10;

    printArray(arr, size);
}





int main()
{

    


    // int arr[]={1,2};
    // int size= 2;
    // inc(arr, size);
    // printArray(arr,size);
    



    // array declare

    // int arr[7];
    // cout<< arr << endl;
    // cout<< &arr << endl;
    // cout<<"Array Created Successfully"<<endl;

    // Arrray Initialise
    // int arr[]={2,3,4,5,4};
    // int brr[5]={2,4,6,8,10};
    // int crr[10]={2,4,6,8,10};

    // // GIVES AN ERROR
    // int drr[4]={2,4,6,8,9};


    // cout<<"Enter the input values in arrays" <<endl;

    // for(int i=0; i<10; i++){
    //     int n;
    //     cin>>n;
    //     arr[i] = n;
    //     cin>> arr[i];
    // }

    // // printing
    // cout<<"printing the values in array"<<endl;
    // for(int i=0; i<10; i++){
    //     cout<< arr[i] << " ";
    // }
    // int n;
    // int arr[500];

    // cout<<"HOW MANY NUMBERS YOU WANT TO ADD IN ARRAY"<<endl;
    // cin>>n;

    // cout <<"Enter the numbers" <<endl;
    // for(int i=0; i<n; i++)
    // {
    //     cin>> arr[i];
    // }
    // // print the array
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<< " " ;
    // }

    // int arr[10]={1,2};
    
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }



    // TAKING INPUT OF 5 ELEMENT OF ARRAY AND GIVING OUTPUT OF THEIR DOUBLE

    // cout<<"Enter the 5 values of array "<<endl;
    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>> arr[i];
    // }

    // cout<<"Double of their values is: ";
    // for(int i=0; i<5; i++){
    //     cout<< 2*arr[i]<<" ";
    // }





    // taking the input of 5 values and giving 1 as a output

    // cout<<"Enter the 5 values of array "<<endl;
    // int arr[5];
    // for(int i=0; i<5; i++){
    //     cin>> arr[i];
    // }

    // for(int i=0; i<5; i++){
    //     arr[i]=1;
    // }

    // for(int i=0; i<5; i++){
    //     cout<< arr[i]<< " ";
    // }


    // int arr[10]={1,2};
    
    // for(int i=0; i<10; i++){
    //     cout<< arr[i]<< " ";
    // }


    // USING MEMSET HERE

    // int arr[10]={0};
    // memset(arr,2,sizeof(arr));


    // for(int i=0; i<10; i++){
    // cout<< arr[i]<< " ";
    // }



    



    return 0;
}