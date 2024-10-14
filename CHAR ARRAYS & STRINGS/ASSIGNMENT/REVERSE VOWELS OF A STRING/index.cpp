// ----------------LEETCODE:345---------------------

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"

 

// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.

class Solution {
public:
    // Function to check if a character is a vowel
    bool isVowel(char c){
        c = tolower(c); // Convert character to lowercase
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; // Return true if vowel
    }

    // Function to reverse only the vowels in a given string
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1; // Initialize two pointers

        while (i < j) { // Loop until the pointers cross
            if (isVowel(s[i])) { // Check if the character at i is a vowel
                if (isVowel(s[j])) { // Check if the character at j is a vowel
                    swap(s[i], s[j]); // Swap vowels
                    i++, j--; // Move both pointers inward
                } else {
                    j--; // Move the right pointer leftwards if not a vowel
                }
            } else {
                i++; // Move the left pointer rightwards if not a vowel
            }
        }
        return s; // Return the modified string
    }
};


// Time Complexity (T.C.):
// The while loop iterates through the string, performing constant-time operations for each pair of characters until i and j meet in the middle. This gives us O(n), where 
// n is the length of the string s.

// The isVowel function also operates in constant time O(1).

// Overall, the time complexity is O(n)

// Space Complexity (S.C.):
// The algorithm uses a constant amount of extra space, mainly for the indices i and j, and the swap operations.

// No additional space proportional to the input size is required.

// Therefore, the space complexity is O(1)