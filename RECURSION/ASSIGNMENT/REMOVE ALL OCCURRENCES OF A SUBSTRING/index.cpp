// -----------------LEETCODE::1910

// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

 

// Example 1:

// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".
// Example 2:

// Input: s = "axxxxyyyyb", part = "xy"
// Output: "ab"
// Explanation: The following operations are done:
// - s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
// - s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
// - s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
// - s = "axyb", remove "xy" starting at index 1 so s = "ab".
// Now s has no occurrences of "xy".
 

// Constraints:

// 1 <= s.length <= 1000
// 1 <= part.length <= 1000
// s​​​​​​ and part consists of lowercase English letters.


class Solution {
public:
    // Function to remove all occurrences of 'part' from 's' recursively
    void removeOCCUR(string& s, string& part){
        // Find the first occurrence of 'part' in 's'
        int found = s.find(part);
        if (found != string::npos) {
            // PART STRING HAS BEEN LOCATED
            // PLEASE REMOVE IT

            // Create the left part of the string before the found occurrence
            string left_part = s.substr(0, found);
            // Create the right part of the string after the found occurrence
            string right_part = s.substr(found + part.size(), s.size());
            // Concatenate the left and right parts, effectively removing 'part'
            s = left_part + right_part;
            // Recur to remove any further occurrences of 'part'
            removeOCCUR(s, part);
        } else {
            // BASE CASE
            // ALL THE OCCURRENCES OF PART HAVE BEEN REMOVED FROM S
            return;
        }
    }

    // Function to initiate the removal of all occurrences of 'part' from 's'
    string removeOccurrences(string s, string part) {
        removeOCCUR(s, part); // Call the recursive function
        return s; // Return the modified string
    }
};



Time Complexity (TC):
Find Operation: The find function in C++ takes 𝑂(𝑁) time in the worst case, where 𝑁
 is the length of the string s.

Substr Operation: The substr function also takes 𝑂(𝑁) time because it may need to create a new substring.

Recursive Calls: In the worst case, if the substring part is removed repeatedly from the string, the algorithm could make up to 𝑂(𝑁/𝑀) recursive calls, where 𝑀 is the length of part.

Putting it all together, each recursive call involves find and substr operations, making the time complexity roughly 𝑂(𝑁)∗𝑂(𝑁/𝑀), which simplifies to 𝑂(𝑁2/𝑀). However, for practical purposes, this can be approximated as 𝑂(𝑁2) because 𝑀 is usually much smaller than 𝑁.

Space Complexity (SC):
Call Stack: The space complexity for the call stack is 𝑂(𝑁/𝑀), corresponding to the depth of recursion.

Temporary Strings: The substr function creates new temporary strings, which also occupy space. In the worst case, the combined space for these temporary strings can be approximated as 𝑂(𝑁).

Combining these factors, the space complexity is 𝑂(𝑁+𝑁/𝑀), which simplifies to 𝑂(𝑁).

Summary:
Time Complexity (TC): 𝑂(𝑁2)

Space Complexity (SC): 𝑂(𝑁)