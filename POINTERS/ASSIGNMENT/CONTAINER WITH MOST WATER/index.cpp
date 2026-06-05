// -----------LEETCODE-11-----------
// Medium

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int currentArea =
                (right - left) *
                min(height[left], height[right]); // Area = width * height
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right])
                left++;
            else if (height[left] > height[right])
                right--;
            else {
                // heights are equal → pick randomly!
                if (rand() % 2 == 0)
                    left++;
                else
                    right--;
            }
        }
        return maxArea;
    }
};


// Simply, we calculate max area of rectangle then return it. Formula is

// width * height
// Let's think about width and height with this example.

// Input: height = [1,8,6,2,5,4,8,3,7]
// Each number is height, so we can easily get height. But how about width?

// width is also simple. It's just distance between two heights. That's why it's good idea to have two pointers left and right.

//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//  L               R

// Left pointer starts from index 0
// Right pointer starts from the last index
// Let's see how it works!

// width = right - left = 8 - 0 = 8
// For height, we take smaller height between left and right, because if we calculate based on the taller height, the water would overflow from the container.

// height = min(height[left], height[right]) = min(1, 7) = 1
// Current max area should be

// 8 * 1 = 8
// After that, we want to move one of the pointers. How can we judge it? It's simple. We want to keep taller height between left and right because there is a possibility that we will get max area with the taller height.

// In this case,

// left vs right = 1 vs 7
// So we move the left pointer to next.

//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//    L             R

// max_area = 8
// We will repeat the same process until we break left < right condition. I'll speed up.

//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//    L             R

// max_area = 8
// current_area = 7 * 7 = 49
// max_area = max(8, 49) = 49
// Move R to next
//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//    L           R

// max_area = 49
// current_area = 6 * 3 = 18
// max_area = max(49, 18) = 49
// Move R to next
//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//    L         R

// max_area = 49
// current_area = 5 * 8 = 40
// max_area = max(49, 40) = 49
// Move L to next 
// In the above case, we can also move R instead of L because L and Rare the same(= 8).

//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//      L       R

// max_area = 49
// current_area = 4 * 6 = 14
// max_area = max(49, 24) = 49
// Move L to next 
//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//        L     R

// max_area = 49
// current_area = 3 * 2 = 6
// max_area = max(49, 6) = 49
// Move L to next 
//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//          L   R

// max_area = 49
// current_area = 2 * 5 = 10
// max_area = max(49, 10) = 49
// Move L to next 
//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//            L R

// max_area = 49
// current_area = 1 * 4 = 4
// max_area = max(49, 4) = 49
// Move L to next 
// Now L and R are the same index. We shop iteration.

//  0,1,2,3,4,5,6,7,8 (= index)
// [1,8,6,2,5,4,8,3,7]
//              L
//              R 
// return 49
// Easy!😄
// Let's see solution codes and step by step algorithm!



// ## Time & Space Complexity

// ---

// ## ⏱️ Time Complexity — O(n)

// ### Why O(n)?

// ```
// Array:  [1, 8, 6, 2, 5, 4, 8, 3, 7]
//          ↑                         ↑
//         left                     right
// ```

// ```
// Step 1: left=0,  right=8  → check area → move one pointer
// Step 2: left=1,  right=8  → check area → move one pointer
// Step 3: left=1,  right=7  → check area → move one pointer
// ...
// keeps going until left meets right
// ```

// | Fact | Explanation |
// |---|---|
// | Two pointers start at both ends | `left=0, right=n-1` |
// | Each step moves one pointer | either `left++` or `right--` |
// | They move **towards each other** | never go backwards |
// | Loop stops when they meet | `left < right` |
// | Total steps = n | each element visited **once** |

// > So if array has **9 elements** → maximum **9 steps** → **O(n)**

// ---

// ## 💾 Space Complexity — O(1)

// ### Why O(1)?

// ```cpp
// int maxArea = 0;      // 1 variable
// int left = 0;         // 1 variable
// int right = ...;      // 1 variable
// int currentArea = ..  // 1 variable
// ```

// | Variable | Space Used |
// |---|---|
// | `maxArea` | 1 integer |
// | `left` | 1 integer |
// | `right` | 1 integer |
// | `currentArea` | 1 integer |
// | **Total** | **4 integers only** |

// > No extra array, no recursion, no new data structure created — just **4 simple variables** regardless of input size → **O(1)**

// ---

// ## 📊 Simple Summary

// ```
// Input size grows:   n=10  → n=100  → n=10000
//                       ↓        ↓          ↓
// Time complexity:    10    →  100   →   10000  steps  (O(n))
// Space complexity:    4    →    4   →       4  vars   (O(1))
// ```

// ---

// ## 🧠 Real Life Analogy

// | Complexity | Analogy |
// |---|---|
// | **O(n) Time** | Reading a book — more pages = more time, directly proportional |
// | **O(1) Space** | You only use **1 bookmark** no matter how big the book is |

// ---

// ## ✅ Final Answer

// | | Complexity | Reason |
// |---|---|---|
// | **Time** | **O(n)** | Two pointers traverse array once |
// | **Space** | **O(1)** | Only 4 fixed variables used |

// > This is considered a **very efficient solution** — linear time with constant space! 🎯