// GFG

// Product of Primes
// Difficulty: MediumAccuracy: 25.39%Submissions: 29K+Points: 4
// Given two numbers L and R (inclusive) find the product of primes within this range. Print the product modulo 109+7. If there are no primes in that range you must print 1.

// Example 1:

// Input: L = 1, R = 10
// Output: 210
// Explaination: The prime numbers are 
// 2, 3, 5 and 7.
// Example 2:

// Input: L = 1, R = 20
// Output: 9699690
// Explaination: The primes are 2, 3, 
// 5, 7, 11, 13, 17 and 19.
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function primeProduct() which takes L and R and returns the product of the primes within the range. If there are no primes in that range then return 1.

// Expected Time Complexity: O((R-L)*(logR))
// Expected Auxiliary Space: O(sqrt(R))

// Constraints:
// 1 ≤ L ≤ R ≤ 109
// 0 ≤ L - R ≤ 106  


//{ Driver Code Starts
// Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<bool> Sieve(long long n){
        vector<bool> sieve(n + 1, true);  // Initially assume all numbers are prime
        sieve[0] = sieve[1] = false;    // 0 and 1 are not prime numbers
    
        for(long long i = 2; i * i <= n; i++){  // Check till the square root of n
            if(sieve[i] == true){  // If the number is still marked as prime
                long long j = i * i; // Start marking from i*i
                while(j <= n){
                    sieve[j] = false; // Mark multiples of i as not prime
                    j += i;  // Move to the next multiple of i
                }
            }
        }
        return sieve; // Return the sieve array indicating prime numbers
    }

    long long primeProduct(long long L, long long R){
        const long long MOD = 1e9 + 7;
        vector<bool> sieve = Sieve(sqrt(R)); // Sieve up to the square root of R
        vector<long long> basePrimes;
        
        // Collect all prime numbers from the sieve
        for(long long i = 0; i < sieve.size(); i++){
            if(sieve[i]){
                basePrimes.push_back(i);
            }
        }
    
        vector<bool> segSieve(R - L + 1, true);  // Create a segmented sieve for range L to R
        if(L <= 1){
            segSieve[0] = false; // 0 and 1 are not prime
            if(L == 0 && R > 0){
                segSieve[1] = false;
            }
        }
    
        // Mark non-prime numbers in the segmented sieve using base primes
        for(auto prime : basePrimes){
            long long first_mult = (L / prime) * prime;
            if(first_mult < L){
                first_mult += prime;
            }
            long long j = max(first_mult, prime * prime);
            while(j <= R){
                segSieve[j - L] = false; // Mark multiples of the prime as not prime
                j += prime;
            }
        }
        
        // Calculate the product of primes in the range
        long long product = 1;
        for(long long i = 0; i <= R - L; i++){
            if(segSieve[i]){
                product = (product * (L + i)) % MOD;
            }
        }

        return product;
    }
};

//{ Driver Code Starts.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long L, R;
//         cin>>L>>R;
        
//         Solution ob;
//         cout<<ob.primeProduct(L, R)<<"\n";
    
// cout << "~" << "\n";
// }
//     return 0;
// }
// // } Driver Code Ends


// Space Complexity (SC):
// Sieve Array:

// The Sieve function creates a boolean array of size 
// 𝑅+1 to store the primality of numbers up to 𝑅.

// Space Complexity: 
// 𝑂(𝑅)

// Base Primes Vector:

// Stores all prime numbers up to 𝑅.

// In the worst case, there are 𝑅/log⁡(𝑅) primes.

// Space Complexity: 
// 𝑂(𝑅/log⁡(𝑅)) (asymptotically smaller compared to 𝑂(𝑅), so it can be considered as part of 𝑂(𝑅))

// Segmented Sieve Array:

// A boolean array of size 𝑅−𝐿+1 is created to mark the primality of numbers in the range [𝐿,𝑅].

// Space Complexity: 𝑂(𝑅−𝐿+1)

// Total Space Complexity:
// Combining all the above:

// 𝑂(𝑅)+𝑂(𝑅−𝐿+1)
// Thus, the overall space complexity is: 𝑂(𝑅−𝐿+1)


// Time Complexity (TC):
// Sieve Function:

// Uses the standard Sieve of Eratosthenes to find all primes up to 𝑅.

// Time Complexity: 𝑂(𝑅log(log⁡(𝑅)))
// Base Primes Collection:

// Iterates through the sieve array to collect prime numbers up to 𝑅.

// Time Complexity: 𝑂(𝑅)

// Mark Non-Prime Numbers in Segmented Sieve:

// For each prime 𝑝 from the base primes, marks multiples of 𝑝 in the range [𝐿,𝑅]as non-prime.

// Each prime marking operation takes 
// 𝑂((𝑅−𝐿+1)/𝑝).

// Summing up over all primes, the time complexity of this step is approximately:

// 𝑂((𝑅−𝐿+1)log⁡(log⁡(𝑅)))

// Total Time Complexity:
// Combining all the above:

// 𝑂(𝑅log⁡(log⁡(𝑅)))+𝑂(𝑅)+ 𝑂((𝑅−𝐿+1)log⁡(log⁡(𝑅)))

// Thus, the overall time complexity is:

// 𝑂((𝑅−𝐿+1)log⁡(log⁡(𝑅)))
// Summary:
// Space Complexity: 
// 𝑂(𝑅−𝐿+1)

// Time Complexity: 𝑂((𝑅−𝐿+1)log(log⁡(𝑅)))