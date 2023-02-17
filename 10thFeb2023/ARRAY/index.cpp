#include<iostream>
#include<limits.h>
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


bool find(int arr[], int size, int key){
    // LINEAR SEARCH

    for(int i=0; i<size; i++){
        if(arr[i]== key){
            return true;
        }
    }

    // Not present
    return false;

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



    // DESCRIBE LINEAR SEARCH USING FUNCTION
    // int arr[5]= {1,3,5,7,8};
    // int size=5;

    // cout<<"Enter the key to find "<<endl;
    // int key;
    // cin>>key;

    // if(find(arr, size, key)){
    //     cout<< "Found" <<endl;
    // }
    // else{
    //     cout<<"Not Found" <<endl;
    // }

    

    // LINEAR SEARCH

    // int arr[6]={5,69,7,89,4,2};
    // int size=6;

    // int key=69;

    // bool flag = 0;
    // // 0 --> Not Found
    // // 1 --> Found

    // for(int i=0; i<size; i++){
    //     if(arr[i] == key)
    //         // Found
    //         flag=1;
    // }

    // if(flag)
    //     cout<<"Present"<<endl;
    
    // else
    //     cout<<"Absent"<<endl;

     

    //  COUNT 0'S AND 1'S
    // int arr[]={0,1,0,1,1,1,0,0,0,1};
    // int size=10;
    // int numZero=0;
    // int numOne=0;

    // for(int i=0; i<size; i++){
    //     if(arr[i]==0)
    //         numZero++;
        
    //     if(arr[i]==1)
    //         numOne++;
    // }

    // cout<<"Number of Zeroes is: " <<numZero<<endl;
    // cout<<"Number of Ones is: " <<numOne<<endl;



    // MAXIMUM NO. OF ARRAY

    // int arr[]={11,22,33,44,55,686,77,88,99,110};
    // int size= 10;

    // // initialise maximum variable with the minimum possible integer value
    // int maxi = INT_MIN;
    
    // for(int i=0; i<size; i++){
    //     if(arr[i]>maxi)
    //         // FOUND A NO. GREATER THAN MAXI, UPDATE MAXI
    //         maxi=arr[i];
        
    // }

    // cout<< "MAXIMUM NO. IS: " << maxi <<endl;



    // MINIMUM NO. OF ARRAY

    // int arr[]={11,22,33,4,55,686,77,88,99,110};
    // int size= 10;

    // // initialise minimum variable with the minimum possible integer value
    // int mini = INT_MAX;
    
    // for(int i=0; i<size; i++){
    //     if(arr[i]<mini)
    //         // FOUND A NO. lesser THAN MINI, UPDATE MINI
    //         mini=arr[i];
        
    // }

    // cout<< "MINIMUM NO. IS: " << mini <<endl;



    // EXTREME PRINT IN ARRAY
    
    // int arr[8]={10,20,30,40,50,60,99};
    // int size=7;

    // int start=0;
    // int end=size-1;

    // while(start<=end){
    //     if(start>end)
    //         break;
        
    //     if(start == end)
    //         cout<< arr[start] <<" ";

    //     else{
    //         cout<< arr[start] <<" ";
    //         cout<< arr[end] <<" ";
    //     }

    //     start++;
    //     end--;
    // }


    // REVERSE AN ARRAY

    // int arr[8]={10,20,30,40,50,60,99};
    // int size=7;

    // int start=0;
    // int end= size-1;

    // while(start<end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    // // printing array

    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }







    // return 0;
}