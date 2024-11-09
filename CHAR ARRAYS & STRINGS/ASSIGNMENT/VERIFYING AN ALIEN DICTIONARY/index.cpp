// -------------LEETCODE:953

// In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different order. The order of the alphabet is some permutation of lowercase letters.

// Given a sequence of words written in the alien language, and the order of the alphabet, return true if and only if the given words are sorted lexicographically in this alien language.

 

// Example 1:

// Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"
// Output: true
// Explanation: As 'h' comes before 'l' in this language, then the sequence is sorted.
// Example 2:

// Input: words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"
// Output: false
// Explanation: As 'd' comes after 'l' in this language, then words[0] > words[1], hence the sequence is unsorted.
// Example 3:

// Input: words = ["apple","app"], order = "abcdefghijklmnopqrstuvwxyz"
// Output: false
// Explanation: The first three characters "app" match, and the second string is shorter (in size.) According to lexicographical rules "apple" > "app", because 'l' > '∅', where '∅' is defined as the blank character which is less than any other character (More info).
 

// Constraints:

// 1 <= words.length <= 100
// 1 <= words[i].length <= 20
// order.length == 26
// All characters in words[i] and order are English lowercase letters.


class Solution {
private:
    unordered_map<char, int> order_map; // Declaring a hashmap to store the order of characters.

    void buildOrderMap(const string& order) {
        // Loop through the order string to build the hashmap.
        for (int i = 0; i < order.length(); i++) {
            order_map[order[i]] = i; // Map each character to its index.
        }
    }

    bool checkorder(char a, char b) {
        // Compare the positions of characters in the order map.
        return order_map[a] < order_map[b];
    }

public:
    bool isAlienSorted(vector<string>& words, string order) {
        buildOrderMap(order); // Build the order map using the provided order string.

        for (int i = 0; i < words.size() - 1; i++) {
            string s1 = words[i]; // Get the current word.
            string s2 = words[i + 1]; // Get the next word.

            int len = min(s1.size(), s2.size()); // Find the minimum length between the two words.
            bool foundDifference = false; // Flag to check if a difference is found.

            for (int j = 0; j < len; j++) {
                if (s1[j] != s2[j]) {
                    // If characters are different, check their order.
                    if (!checkorder(s1[j], s2[j])) {
                        return false; // If the order is incorrect, return false.
                    }
                    foundDifference = true; // Set the flag to true.
                    break; // Break out of the loop since the order is determined.
                }
            }

            // If no difference is found and the first word is longer, return false.
            if (!foundDifference && s1.size() > s2.size()) {
                return false;
            }
        }

        return true; // If all words are in the correct order, return true.
    }
};



// Time Complexity (TC):
// buildOrderMap(order): This runs in 𝑂(𝑚), where 𝑚 is the length of the order string.

// isAlienSorted(words, order):

// The outer loop runs 𝑂(𝑛−1) times, where 𝑛 is the number of words.

// For each pair of words, comparing characters takes 𝑂(min(𝑙𝑒𝑛1,𝑙𝑒𝑛2)), where len1 and len2 are the lengths of the two words.

// In the worst case, each character comparison is followed by an 𝑂(1) lookup in the order_map.

// So, the overall time complexity is 𝑂(𝑚+𝑛⋅𝐿), where 𝐿 is the average length of the words.

// Space Complexity (SC):
// order_map: The space complexity for the order map is 𝑂(𝑚), where 𝑚 is the length of the order string.

// Auxiliary space: Minimal additional space for variables and the stack space used in recursion.

// Therefore, the space complexity is 𝑂(𝑚)
