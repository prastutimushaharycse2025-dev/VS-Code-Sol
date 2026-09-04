/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // Move slow pointer 1 step
        fast = fast->next->next;    // Move fast pointer 2 steps

        if (slow == fast) {         // Cycle detected
            return true;
        }
    }

    return false;                   // Reached the end of list (no cycle)
}