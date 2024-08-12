#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows=5;
    int col=5;
    cout<<"Original Matrix: "<<endl;

    // Creating a 3x3 matrix using vectors and vectors of vectors
    // Initialize with zeros first


    // vector<vector<int> > arr;
    // vector<vector<int> > arr(rows, vector<int>(col, 0));
    vector<vector<int> > arr(rows, vector<int>(col, -8));

    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{7,8,9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // printing value at 2nd row and 3rd column
    // cout<<arr[2][3];

    // take input at 3rd row and 4th column
    // cin>>arr[3][4];

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}