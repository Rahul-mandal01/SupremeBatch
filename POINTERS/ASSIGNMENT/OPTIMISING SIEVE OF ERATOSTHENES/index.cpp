#include<iostream>
#include<vector>
using namespace std;

// This is simple solution
// vector<bool> Sieve(int n){
//     // Create a sieve array of N size telling isPrime
//     vector<bool> sieve(n+1, true);
//     sieve[0] = sieve[1] = false; // 0 and 1 are not prime

//     for(int i=2; i<=n; i++){
//         if(sieve[i] == true){
//             int j =i*2;
//             while(j<=n){
//                 sieve[j] = false;
//                 j += i;
//             }
//         }
//     }
//     return sieve;
// }


vector<bool> Sieve(int n){
    // Create a sieve array of N size telling if the number is prime
    vector<bool> sieve(n+1, true);  // Initially assume all numbers are prime
    sieve[0] = sieve[1] = false; // 0 and 1 are not prime numbers

    for(int i=2; i*i<=n; i++){  // Optimization 2: Check till the square root of n
        if(sieve[i] == true){  // If the number is still marked as prime
            int j = i*i; // Optimization 1: Start marking from i*i
            // First unmarked number would be i*i, as others have been marked by 2 to (i-1)
            while(j <= n){
                sieve[j] = false; // Mark multiples of i as not prime
                j += i;  // Move to the next multiple of i
            }
        }
    }
    return sieve; // Return the sieve array indicating prime numbers
}

int main(){
    vector<bool> sieve = Sieve(25);
    for(int i=0; i<=50; i++){
        if(sieve[i]){
            cout << i << " ";
        }
    }
    return 0;
}