// ------------------LEETCODE PROBLEM : 142. Linked List Cycle II------------------


// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

// Do not modify the linked list.

 

// Example 1:


// Input: head = [3,2,0,-4], pos = 1
// Output: tail connects to node index 1
// Explanation: There is a cycle in the linked list, where tail connects to the second node.
// Example 2:


// Input: head = [1,2], pos = 0
// Output: tail connects to node index 0
// Explanation: There is a cycle in the linked list, where tail connects to the first node.
// Example 3:


// Input: head = [1], pos = -1
// Output: no cycle
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                ListNode *entry = head;
                // The amazing fact proved by Floyd's algorithm is:
                // If one pointer starts from head and another starts from the meeting point, and both move one step at a time, they will meet exactly at the cycle's starting node.
                while(entry != slow){
                    entry = entry -> next;
                    slow = slow->next;
                }
                return entry;
            }
        }
        return nullptr;
    }
};

// # Time & Space Complexity of Linked List Cycle II Detection

// # Time Complexity (TC)

// Let:

// * `n` = total number of nodes in the linked list

// There are **two phases**:

// ## Phase 1: Detect whether a cycle exists

// ```cpp
// while (fast != nullptr && fast->next != nullptr)
// ```

// In the worst case, `slow` and `fast` traverse the list and meet after visiting at most `n` nodes.

// So:

// ```text
// O(n)
// ```

// ---

// ## Phase 2: Find the starting node of the cycle

// ```cpp
// while (entry != slow)
// ```

// Both pointers move one step at a time.

// They can travel at most the distance from `head` to the cycle start.

// That distance cannot exceed `n`.

// So:

// ```text
// O(n)
// ```

// ---

// ## Total Time Complexity

// ```text
// O(n) + O(n)
// ```

// We drop constants:

// ```text
// O(n)
// ```

// ### Why not O(n²)?

// Because the two loops are **not nested**.

// Think of it like:

// ```cpp
// for (...) // O(n)

// for (...) // O(n)
// ```

// This is:

// ```text
// O(n + n) = O(n)
// ```

// not:

// ```text
// O(n²)
// ```

// ---

// # Space Complexity (SC)

// Variables used:

// ```cpp
// ListNode *slow;
// ListNode *fast;
// ListNode *entry;
// ```

// Only **3 pointers** are created.

// No extra array, vector, set, or map is used.

// Regardless of whether the list has:

// * 10 nodes
// * 1000 nodes
// * 1 million nodes

// we still use only 3 pointers.

// Therefore:

// ```text
// Space Complexity = O(1)
// ```

// (Constant extra space)

// ---

// # Comparison with HashSet Approach

// Another solution is:

// ```cpp
// unordered_set<ListNode*> visited;
// ```

// Store every node and check if it has been seen before.

// ### TC

// ```text
// O(n)
// ```

// ### SC

// ```text
// O(n)
// ```

// because up to `n` nodes are stored.

// ---

// # Interview Answer

// | Complexity       | Value    |
// | ---------------- | -------- |
// | Time Complexity  | **O(n)** |
// | Space Complexity | **O(1)** |

// **Explanation:** Floyd's Cycle Detection Algorithm traverses the linked list at most a constant number of times, giving `O(n)` time complexity, and uses only a few pointers (`slow`, `fast`, `entry`), giving `O(1)` auxiliary space.
