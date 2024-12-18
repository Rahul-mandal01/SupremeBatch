//-------------------- LEETCODE : 415 
// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"
 

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.


class Solution {
public:
    void addRE(string& num1, int p1, string& num2, int p2, int carry, string& ans){
        // BASE CASE: If both positions are less than 0, check carry
        if (p1 < 0 && p2 < 0) {
            if (carry != 0)
                ans.push_back(carry + '0'); // Add the final carry if it's not zero
            return;
        }

        // SOLVE ONE CASE: Calculate the current digits and carry
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0'; // If p1 is valid, take num1[p1], else take '0' &&&  - '0': Converts this character to its integer value.
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0'; // If p2 is valid, take num2[p2], else take '0' and  - '0': Converts this character to its integer value.
        int csum = n1 + n2 + carry; // Current sum including carry
        int digit = csum % 10; // Current digit to add to the result
        carry = csum / 10; // New carry for the next position
        ans.push_back(digit + '0'); // Add the current digit to the result

        // RECURSIVELY: Call the function for the next positions
        addRE(num1, p1-1, num2, p2-1, carry, ans);  
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        addRE(num1, num1.size() - 1, num2, num2.size() - 1, 0, ans); // Start from the end of both strings
        reverse(ans.begin(), ans.end()); // Reverse the result to get the correct order
        return ans; // Return the final result
    }
};



// Time Complexity:
// The function processes each digit of both input strings exactly once, moving from the end of the strings to the beginning.

// Let 𝑛 be the length of the longer string (either num1 or num2).

// The recursive function addRE is called at most 𝑛 times.

// Each call performs a constant amount of work (additions, modulus operations, and string manipulations).

// Thus, the time complexity is 𝑂(𝑛).

// Space Complexity:
// The space complexity includes the space required for the function call stack and the result string ans.

// Call Stack: Since the function is recursive and makes at most 𝑛 recursive calls, the space complexity for the call stack is 𝑂(𝑛).

// Result String: The result string ans will have at most 𝑛+1 digits (considering the carry might add one more digit), which means it also requires 𝑂(𝑛) space.

// Thus, the overall space complexity is 𝑂(𝑛).

// Summary:
// Time Complexity: 𝑂(𝑛)

// Space Complexity: 𝑂(𝑛)