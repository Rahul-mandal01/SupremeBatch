// -----------LEETCODE:443----------

// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.

 

// Example 1:

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
// Example 2:

// Input: chars = ["a"]
// Output: Return 1, and the first character of the input array should be: ["a"]
// Explanation: The only group is "a", which remains uncompressed since it's a single character.
// Example 3:

// Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
// Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
// Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
 

// Constraints:

// 1 <= chars.length <= 2000
// chars[i] is a lowercase English letter, uppercase English letter, digit, or symbol.


class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0, count = 1;  // Initialize index for storing compressed version and count for character frequency
        char prev = chars[0];  // Initialize prev with the first character of chars

        // Loop through the characters starting from the second character
        for(int i = 1; i < chars.size(); i++) {
            if(chars[i] == prev) {  // If the current character is the same as the previous one
                count++;  // Increment the count
            } else {  // If the current character is different
                chars[index++] = prev;  // Store the previous character at index and increment index
                if(count > 1) {  // If count is greater than 1, store the count as characters
                    int start = index;  // Start index for storing count
                    while(count) {  // Convert count to characters
                        chars[index++] = (count % 10) + '0';
                        count /= 10;
                    }
                    reverse(chars.begin() + start, chars.begin() + index);  // Reverse the characters to correct order
                }
                prev = chars[i];  // Update prev to the current character
                count = 1;  // Reset count to 1
            }
        }
        chars[index++] = prev;  // Store the last character
        if(count > 1) {  // If count of the last character is greater than 1, store it as characters
            int start = index;  // Start index for storing count
            while(count) {  // Convert count to characters
                chars[index++] = (count % 10) + '0';
                count /= 10;
            }
            reverse(chars.begin() + start, chars.begin() + index);  // Reverse the characters to correct order
        }
        return index;  // Return the length of the compressed version
    }
};



// Time Complexity (T.C.)
// Single Pass through chars: The primary for loop runs through each character in the chars vector exactly once, making this part O(n), where n is the size of the chars vector.

// Count Conversion: Inside the loop, if a character sequence ends, there’s an additional inner while loop to convert count to characters. The number of iterations of this loop depends on the number of digits in count. In the worst case (for the largest possible count which is rare), this takes O(log k) where k is the value of count.

// Reversal: After converting count to characters, there’s a reverse operation which runs in O(m), where m is the number of digits in count. Since the number of digits is relatively small compared to n, this can be considered O(1) in relation to the overall complexity.

// Overall: The main for loop dominates, so the time complexity is O(n).

// Space Complexity (S.C.)
// In-place Modification: The function modifies the input vector chars in place without using extra space proportional to the input size.

// Temporary Variables: Only a few additional variables are used (index, count, prev, and a few others within loops), all of which are constant space operations.