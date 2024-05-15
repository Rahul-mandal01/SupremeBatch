#include<iostream>
using namespace std;
int main(){
    cout<<"Please enter the number: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int count = i+1;
        for(int j=0; j<n-i; j++){
            if(i==0 || j==0){
                cout<<count<<" ";
                count++;
            }

            else if( j == (n-i-1)){    
                cout<<n<<" ";
            }
            
            else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
}