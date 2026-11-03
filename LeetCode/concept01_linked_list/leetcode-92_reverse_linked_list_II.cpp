/**
    LeetCode Question 92:
        https://leetcode.com/problems/reverse-linked-list-ii
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if (head == NULL || left == right) {
        return head;
    }

    // Create a dummy node to handle cases where left == 1 easily
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;

    // 1. Move prev to the node right before the 'left' position
    for (int i = 0; i < left - 1 ; i++) {
        prev = prev->next;
    }

    // 2. Reverse the sublist from left to right
    struct ListNode* curr = prev->next;
    struct ListNode* nextNode = NULL;
    struct ListNode* sublistTail = curr; // This will become the end of the reversed section

    for (int i = 0; i <= right - left; i++) {
        struct ListNode* temp = curr->next;
        curr->next = nextNode;
        nextNode = curr;
        curr = temp;
    }

    // 3. Connect the reversed sublist back to the main list
    prev->next = nextNode;
    sublistTail->next = curr;

    return dummy.next;
}