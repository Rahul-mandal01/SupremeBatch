// -----------LEETCODE-204-----------

// Given an integer n, return the number of prime numbers that are strictly less than n.


// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 

// Constraints:

// 0 <= n <= 5 * 106



// ---------------Sieve of Eratosthenes method--------------------------------

class Solution {
public:

    int countPrimes(int n){
        // If n is 0, there are no primes
        if(n == 0)
            return 0;

        // Create a boolean vector of size n and mark all elements as true (indicating all are primes initially)
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false; // 0 and 1 are not primes

        int ans = 0; // Initialize the answer to 0

        // Iterate over each number from 2 to n-1
        for(int i = 2; i < n; i++){
            if(prime[i]){
                ans++; // Count this number as a prime

                // Mark all multiples of i as non-prime
                int j = 2 * i;
                while(j < n){
                    prime[j] = false;
                    j += i;
                }
            }
        }
        return ans; // Return the count of prime numbers less than n
    }
};



// Time Complexity (TC):
// The time complexity of this algorithm is 𝑂(𝑛loglog⁡𝑛)
// . This is due to the efficiency of the Sieve of Eratosthenes method, where each prime number p eliminates its multiples in steps of p, which results in a total time complexity of 𝑂(𝑛loglog⁡𝑛).

// Space Complexity (SC):
// The space complexity is 𝑂(𝑛), as it uses a vector of size n to keep track of the primality of each number.