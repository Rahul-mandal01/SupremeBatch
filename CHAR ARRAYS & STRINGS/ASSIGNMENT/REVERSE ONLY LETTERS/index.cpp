// LEETCODE--917
// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

 

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"
 

// Constraints:

// 1 <= s.length <= 100
// s consists of characters with ASCII values in the range [33, 122].
// s does not contain '\"' or '\\'.


class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;

        // while (i < j) {
        //     if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
        //         if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) {
        //             swap(s[i], s[j]);
        //             i++;
        //             j--;
        //         } else {
        //             j--;
        //         }
        //     } else {
        //         i++;
        //     }
        // }

        while( i < j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                // s[j]--non alpha
                j--;
            }
        }
        return s;
    }
};




// Time Complexity (T.C.):
// The while loop iterates through the string, performing a constant-time operation for each pair of characters until i and j meet in the middle. This gives us O(n), where n is the length of the string s.

// The isalpha function itself operates in constant time, O(1)

// Overall, the time complexity is O(n).

// Space Complexity (S.C.):
// The algorithm uses a constant amount of extra space, mainly for the indices i and j, and the swap operations.

// No additional space proportional to the input size is required.

// Therefore, the space complexity is O(1).