// ----------------------LEETCODE::28----------------------------
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

// Constraints:

// 1 <= haystack.length, needle.length <= 104
// haystack and needle consist of only lowercase English characters.

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=haystack.size(), n=needle.size();
        if(m == n){
            if(haystack == needle)
                return 0;
        }
        int i=0;
        while( i<= m-n ){
            string s = haystack.substr(i,n);
            if(s == needle)
                return i;
            i++;
        }
        return -1;
    }
};



// Time Complexity (T.C.)
// The algorithm primarily involves comparing substrings within the haystack string.

// The outer while loop runs at most m - n + 1 times, where m is the size of haystack and n is the size of needle.

// Within the loop, haystack.substr(i, n) runs in O(n) time because it creates a substring.

// Hence, the overall time complexity is O(m * n).

// Space Complexity (S.C.)
// The space complexity is dominated by the temporary string s created in each iteration of the loop.

// Each temporary string s has a space complexity of O(n).

// Since no additional data structures proportional to the input size are used, the overall space complexity is O(n).