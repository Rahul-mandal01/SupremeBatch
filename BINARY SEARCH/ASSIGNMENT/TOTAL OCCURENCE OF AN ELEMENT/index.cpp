#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccurence(vector<int> v, int target){
    int s=0;
    int e = v.size()-1;

    int mid = (s+e)/2;
    int ans = -1;

    while(s <= e){
        if(v[mid] == target){
            // ans store and then left
            ans = mid;
            e = mid - 1;
        }
        else if(v[mid] < target){
            // right me search
            s = mid + 1;
        }
        else if(v[mid] > target){
            // left me search
            e = mid - 1;
        }
    mid = (s+e)/2;
    }

    return ans;
}

int lastOccurence(vector<int>v, int target){
    int ans = -1;
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end-start)/2;


    while(start <= end){
        if(v[mid] == target){
            ans = mid;
            start = mid+1;
        }

        else if(v[mid] < target){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

    mid = start + (end-start)/2;
    }

    return ans;
}

int main(){
    vector<int> v{2,4,4,4,4,4,4,4,6,8,10};
    int target = 4;
    int indexOfFirstOcc = firstOccurence(v, target);
    int indexOfLastOcc = lastOccurence(v, target);

    int totalOcc = indexOfLastOcc - indexOfFirstOcc+1;
    cout<<"Total occurences: "<<totalOcc<<endl;

    // ----------------------ALTERNATE WAY--------------
    auto low = lower_bound(v.begin(),v.end(), target);
    auto upper = upper_bound(v.begin(),v.end(), target);
    int upperBound = (upper-v.begin()-1);
    int lowerBound = (low-v.begin());

    cout<<"Total occurences: "<< upperBound - lowerBound +1 <<endl;




    return 0;
}