// #include<iostream>
// using namespace std;

// void findMissing(int *a, int n){
//     // --------Visited Method-------------
//     // for(int i=0; i<n; i++){
//     //     int index = abs(a[i]);
//     //     if(a[index-1]>0){
//     //         a[index-1]*= -1;
//     //     }
//     // }

//     // all positive indexes are missing
//     // for(int i=0; i<n; i++){
//     //     if(a[i]>0){
//     //         cout << i+1 << " ";  
//     //     }
//     // }



//     // ----------------Sorting-Swapping Method-------------
//     int i=0;
//     while(i<n){
//         int index = a[i]-1;
//         if(a[i] != a[index]){
//             swap(a[i], a[index]);
//         }
//         else{
//             ++i;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(a[i] != i+1){
//             cout<< i+1 <<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     int a[] = {1,3,5,2,3,4};
//     n = sizeof(a)/sizeof(a[0]);
//     findMissing( a, n );

//     return 0;
// }