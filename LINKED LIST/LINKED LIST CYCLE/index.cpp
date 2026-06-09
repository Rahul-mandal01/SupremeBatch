// ------------------LEETCODE PROBLEM : 141. Linked List Cycle------------------

// Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.

 

// Example 1:


// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
// Example 2:


// Input: head = [1,2], pos = 0
// Output: true
// Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
// Example 3:


// Input: head = [1], pos = -1
// Output: false
// Explanation: There is no cycle in the linked list.
 

// Constraints:

// The number of the nodes in the list is in the range [0, 104].
// -105 <= Node.val <= 105
// pos is -1 or a valid index in the linked-list.
 

// Follow up: Can you solve it using O(1) (i.e. constant) memory?

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         // Moves one step
            fast = fast->next->next;   // Moves two steps

            if (slow == fast) {        // If they meet, cycle exists
                return true;
            }
        }
        return false;  // If fast reaches the end, no cycle
    }
};

// # Time & Space Complexity of Linked List Cycle Detection

// ---

// ## Space Complexity — Start Here (Easier)

// ### What is Space Complexity?
// ```
// "How much EXTRA memory does my code use 
//  as the input grows?"
// ```

// ### Look at the code — what extra variables are created?

// ```cpp
// ListNode *slow = head;    // one pointer variable
// ListNode *fast = head;    // one pointer variable
// ```

// That's it. Just **two variables**. No array, no set, no list.

// It doesn't matter if the linked list has:
// ```
// 10 nodes    →  still just 2 variables
// 1000 nodes  →  still just 2 variables
// 1000000     →  still just 2 variables
// ```

// ### Space Complexity = O(1)
// ```
// O(1) means CONSTANT space
// "Extra memory used never grows, always fixed"
// ```

// This is exactly why Floyd's algorithm is brilliant — compare with naive approach:

// ```
// Naive (HashSet)  →  O(n) space  (set grows with list)
// Floyd's          →  O(1) space  (always just 2 pointers)
// ```

// ---

// ## Time Complexity — Two Cases

// ### What is Time Complexity?
// ```
// "How many STEPS does my code take
//  as the input grows?"
// ```

// Let's say the list has **n nodes**.

// ---

// ### Case 1 — No Cycle

// ```
// [1] → [2] → [3] → [4] → NULL
// ```

// Fast pointer moves 2 steps at a time:
// ```
// Step 1: fast at node 3
// Step 2: fast at NULL → loop stops
// ```

// Fast reaches NULL in **n/2 steps** roughly.

// ```
// n/2  →  we drop constants in Big O  →  O(n)
// ```

// ---

// ### Case 2 — Cycle Exists

// This needs slightly more thinking.

// ```
// [1] → [2] → [3] → [4] → [5]
//               ↑                |
//               └────────────────┘
// ```

// Two things happen:

// ```
// Phase 1: Fast enters the cycle
// Phase 2: Fast chases slow inside the cycle until they meet
// ```

// #### Phase 1:
// ```
// Both pointers travel until fast enters cycle.
// At most n steps.
// ```

// #### Phase 2:
// ```
// Once both are inside the cycle, 
// fast is gaining 1 step on slow every iteration
// (fast moves 2, slow moves 1 → gap closes by 1 each time)

// Cycle length is at most n.
// So they meet within n more steps.
// ```

// Total:
// ```
// Phase 1 + Phase 2  =  n + n  =  2n  →  drop constant  →  O(n)
// ```

// ### Time Complexity = O(n)

// ---

// ## Final Answer

// ```
// ┌─────────────────────────────────────────┐
// │                                         │
// │   Time Complexity  →  O(n)              │
// │                                         │
// │   "At most we visit each node           │
// │    a fixed number of times"             │
// │                                         │
// │   Space Complexity →  O(1)              │
// │                                         │
// │   "Only 2 pointer variables,            │
// │    never grows with input size"         │
// │                                         │
// └─────────────────────────────────────────┘
// ```

// ---

// ## Compare With Naive Approach

// ```
//                Time        Space
//                ────        ─────
// Naive(HashSet) O(n)        O(n)   ← extra memory grows
// Floyd's        O(n)        O(1)   ← always fixed memory
// ```

// Same time complexity — but Floyd's wins on space. That's why it's the preferred solution.