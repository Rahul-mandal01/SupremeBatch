#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Function to generate a sieve of prime numbers up to n
vector<bool> Sieve(int n){
    vector<bool> sieve(n+1, true);  // Initially assume all numbers are prime
    sieve[0] = sieve[1] = false;    // 0 and 1 are not prime numbers

    for(int i=2; i*i<=n; i++){  // Check till the square root of n
        if(sieve[i] == true){  // If the number is still marked as prime
            int j = i*i; // Start marking from i*i
            while(j <= n){
                sieve[j] = false; // Mark multiples of i as not prime
                j += i;  // Move to the next multiple of i
            }
        }
    }
    return sieve; // Return the sieve array indicating prime numbers
}

// Function to generate a segmented sieve from L to R
vector<bool> segSieve(int L, int R){
    vector<bool> sieve = Sieve(sqrt(R)); // Sieve up to the square root of R
    vector<int> basePrimes;
    
    // Collect all prime numbers from the sieve
    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R-L+1, true);  // Create a segmented sieve for range L to R
    if( L == 1 || L == 0 ){
        segSieve[L] = false; // 0 and 1 are not prime
    }

    // Mark non-prime numbers in the segmented sieve using base primes
    for(auto prime : basePrimes){
        int first_mult = (L / prime) * prime;
        if(first_mult < L){
            first_mult += prime;
        }
        int j = max(first_mult, prime * prime);
        while(j <= R){
            segSieve[j - L] = false; // Mark multiples of the prime as not prime
            j += prime;
        }
    }
    return segSieve; // Return the segmented sieve array indicating prime numbers
}

int main(){
    int L = 100;
    int R = 140;

    vector<bool> ss = segSieve(L, R);

    for(int i=0; i<ss.size(); i++){
        if(ss[i]){
            cout << L + i << " ";
        }
    }
    return 0;
}




// Space Complexity (SC)
// Sieve function: O(n) - The sieve array of size n+1 is used to store boolean values indicating primality.

// segSieve function:

// O(sqrt(R)) - The base sieve array size.

// O(R-L+1) - The segmented sieve array size.

// Time Complexity (TC)
// Sieve function:

// The outer loop runs sqrt(n) times.

// The inner loop marks multiples up to n.

// The overall time complexity is O(n log(log n)).

// segSieve function:

// Sieve calculation up to sqrt(R) is O(sqrt(R) log(log sqrt(R))).

// Marking multiples in the range from L to R depends on the number of primes and the range size.

// The overall time complexity is approximately O((R-L+1) * log(log R)).

// Summary
// Sieve Function:

// SC: O(n)

// TC: O(n log(log n))

// segSieve Function:

// SC: O(sqrt(R)) + O(R-L+1)

// TC: O(sqrt(R) log(log sqrt(R))) + O((R-L+1) * log(log R))