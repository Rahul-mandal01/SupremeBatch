#include<iostream>
using namespace std;
int findSqrt(int n) {
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e-s) / 2;
    int ans = -1; // Initialize ans to -1. If no perfect square is found, ans will remain -1.


    while(s <= e){
        if(mid*mid == target)
            return mid;
        if(mid*mid > target)
            // left search
            e = mid - 1;
        else{
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans; // return the last valid mid value as the square root of the number. 999999999 is the closest possible integer to sqrt(999999999) in this case. 999999999 is the closest perfect square to 999999999. 999999998 is not the closest perfect square. 99999
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Ans is "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digits in precision: "<<endl;
    cin>>precision;

    double step = 0.1;
    double finalAns = ans;
    
    for(int i=0; i<precision; i++){
        for(double j=finalAns ; j*j<=n; j = j + step){
            finalAns = j;
        }
        step = step / 10;
    }
    cout<<"Final Ans is "<<finalAns<<endl;

    return 0;
}