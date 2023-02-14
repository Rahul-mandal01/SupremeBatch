#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;

    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
    }

    return ans;
}

printArray{
    
}




int main()
{
    // create vector
    // vector<int>arr;

    // // int ans = (sizeof(arr)/sizeof(int));
    // // int ans = (sizeof(arr)/sizeof(char));
    // // cout<< ans <<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // arr.push_back(5);
    // arr.push_back(6);

    // // remove pr delete
    // arr.pop_back();

    // // print
    // for(int i=0; i<size.arr(); i++){arr[i]
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;


    //UNIQUE ELEMENT

    // int n;
    // cout<<"Enter the size of array"<<endl;
    // cin>>n;

    // vector<int> arr(n);
    // cout<<"Enter the elements"<<endl;

    // // taking inputs
    // for(int i=0; i<arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }

    // int uniqueElement= findUnique(arr);
    // cout<<uniqueElement;

    // UNION
    // int arr[]={1,3,5,7,9};
    // int sizea=5;
    // int brr[]={2,4,6,8};
    // int sizeb=4;


    // vector<int> ans;

    // // push all elements of vector arr
    // for(int i=0; i<arr.size(); i++)
    // {

    // }






    // INTERSECTION

    // vector<int> arr{1,2,3,4,6,8};
    // vector<int> brr{3,49,10};

    // vector<int>ans;

    // // Outer loop on arr vector
    // for(int i=0; i<arr.size(); i++){
    //     int element = arr[i];
    //     // for every element, run loop on brr
    //     for(int j=0; j<brr.size(); j++){
    //         ans.push_back(element);
    //     }
    // }

    // // print ans
    // for(auto value: ans){
    //     cout<< value << " ";
    // }




    // PAIR SUM

    // vector<int> arr{10,20,40,60,70};

    // // print all pairs
    // // outer loop traverse for each elements
    // for(int i=0; i<arr.size(); i++)
    // {
    //     int element = arr[i];

    //     // for every element, will traverse on aage wale elements
    //     for( int j=i+1; j<arr.size(); j++){
    //         cout<<"pair " <<element << " with " <<arr[j] <<endl;     

    //     }
    // }
    

    // TRIPLET

    // vector<int> arr{10,20,30,40};

    // for(int i=0; i<arr.size(); i++){
    //     int element1 =  arr[i];

    //     for(int j=i+1; j<arr.size(); j++){
    //         int element2 = arr[j];
    //     }
    //         for(int k=j+1; k<arr.size(); k++){
    //             int element3 = arr[k];
    //         }


    // }

    // sort 0's and 1's

    vector<int> arr{0,1,0,1,1,0,1,0,1,1,0};

    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(i != end){
            cout<<"for i=" << i << " start" << start << "end " <<end<<endl;
        if(arr[i] == 0){
            cout<< "found zero"<<endl;
            cout<< "before swap ";
            printArray(arr);
            // swap from left
            swap(arr[start], arr[i]);
            cout<< "after swap";
            printArray(arr);
            cout<<"for i=" << i << " start" << start << "end " <<end<<endl;
            i++;
            start++;
        }
        else{
            // swap from right
            swap(arr[i], arr[end]);
            end--;
        }
    }

    // print
    for( auto val: arr){
        cout<< val << " ";
    }






    return 0;


}