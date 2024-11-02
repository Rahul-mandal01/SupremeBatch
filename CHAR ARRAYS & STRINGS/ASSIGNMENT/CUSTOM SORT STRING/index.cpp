
// ----------------LEETCODE:791

// You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

// Return any permutation of s that satisfies this property.

 

// Example 1:

// Input: order = "cba", s = "abcd"

// Output: "cbad"

// Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".

// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

// Example 2:

// Input: order = "bcafg", s = "abcd"

// Output: "bcad"

// Explanation: The characters "b", "c", and "a" from order dictate the order for the characters in s. The character "d" in s does not appear in order, so its position is flexible.

// Following the order of appearance in order, "b", "c", and "a" from s should be arranged as "b", "c", "a". "d" can be placed at any position since it's not in order. The output "bcad" correctly follows this rule. Other arrangements like "dbca" or "bcda" would also be valid, as long as "b", "c", "a" maintain their order.

 

// Constraints:

// 1 <= order.length <= 26
// 1 <= s.length <= 200
// order and s consist of lowercase English letters.
// All the characters of order are unique.



class Solution {
public:
    string customSortString(string order, string str) {
        // Create a map to count the occurrences of each character in 'str'
        map<char, int>mp;
        // Initialize an empty string to store the result
        string ans="";

        // Count the occurrences of each character in 'str'
        for(auto x: str)
            mp[x]++;
        
        // Iterate through each character in 'order'
        for(auto x: order){
            // If the character is found in the map
            if(mp.find(x) != mp.end()){
                // Get the iterator to the character in the map
                auto temp = mp.find(x);
                // Get the count of the character
                int count = temp -> second;

                // Create a string with 'count' occurrences of the character
                string str(count, x);
                // Append this string to the result
                ans += str;
                // Remove the character from the map
                mp.erase(x);
            }
        }

        // Append remaining characters from 'str' that are not in 'order'
        for(auto x: mp){
            // Create a string with 'x.second' occurrences of 'x.first'
            string str(x.second, x.first);
            // Append this string to the result
            ans += str;
        }
        // Return the final sorted string
        return ans;
    }
};



Time Complexity (T.C.)
Building the Map: O(n), where n is the length of str.

Processing order and constructing the result: O(m + n), where m is the length of order.

Overall: O(m + n)

Space Complexity (S.C.)
Map Storage: O(k), where k is the number of unique characters in str.

Result String Storage: O(n)

Overall: O(n + k)