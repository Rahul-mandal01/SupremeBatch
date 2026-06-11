// -----------------------Leetcode: 876 -----------------
// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.
// Example 2:


// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
// Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
 

// Constraints:

// The number of nodes in the list is in the range [1, 100].
// 1 <= Node.val <= 100

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

For LeetCode 876 (**Middle of the Linked List**), the standard solution is:

```cpp
ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
```

// # Time Complexity (TC)

// ### What happens?

// * `slow` moves **1 step** at a time.
// * `fast` moves **2 steps** at a time.

// Suppose the list has `n` nodes.

// Since `fast` moves twice as fast, it reaches the end after roughly:

// ```text
// n / 2
// ```

// iterations.

// Example for `n = 5`:

// ```text
// Iteration 0:
// slow = 1, fast = 1

// Iteration 1:
// slow = 2, fast = 3

// Iteration 2:
// slow = 3, fast = 5

// Stop
// ```

// Only about `n/2` iterations occur.

// So:

// ```text
// TC = O(n/2)
// ```

// In Big-O notation, constants are ignored:

// ```text
// TC = O(n)
// ```

// ---

// # Space Complexity (SC)

// We only create two pointers:

// ```cpp
// ListNode* slow;
// ListNode* fast;
// ```

// No matter whether the list has:

// * 5 nodes
// * 500 nodes
// * 5 million nodes

// we still use only these two pointers.

// Therefore:

// ```text
// SC = O(1)
// ```

// (Constant extra space)

// ---

// # Real-Life Analogy

// Imagine Rahul and Amit are walking on a road:

// * Rahul (`slow`) walks 1 step at a time.
// * Amit (`fast`) walks 2 steps at a time.

// When Amit reaches the end of the road, Rahul will naturally be around the middle.

// You didn't need:

// * an array,
// * a vector,
// * counting all nodes first,

// just two people walking at different speeds.

// That's why:

// | Complexity       | Value    |
// | ---------------- | -------- |
// | Time Complexity  | **O(n)** |
// | Space Complexity | **O(1)** |

// ### Interview One-Liner

// The algorithm traverses the linked list once using slow and fast pointers, so the time complexity is **O(n)** and the auxiliary space complexity is **O(1)**.
