/**
    LeetCode Question 203:
        https://leetcode.com/problems/remove-linked-list-elements
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// Solution - 1
struct ListNode* removeElements(struct ListNode* head, int val) {

    struct ListNode* travel = head;
    struct ListNode* prev = NULL;
    struct ListNode* newHead = travel;

    int node = 1;

    while(travel != NULL){
        if(travel->val == val){
            if(travel == newHead){
                newHead = travel -> next;
                travel = newHead;
            }else{
                prev -> next = travel -> next;
                travel = travel -> next;
            }

        }else{
            prev = travel;
            travel = travel -> next;
        }

    }

    return newHead;
}

// Solution - 2
struct ListNode* removeElements(struct ListNode* head, int val) {
    // Create a dummy node that points to the head
    struct ListNode dummy;
    dummy.next = head; // Here, the head hold copy of original_head address. Then copy to dummy.next.

    struct ListNode* prev = &dummy;
    struct ListNode* travel = head;

    while (travel != NULL) {
        if (travel->val == val) {
            // Skip the current node
            prev->next = travel->next; // Here, head value is updating via head address's
        } else {
            // Move prev forward only if we didn't delete the node
            prev = travel;
        }
        travel = travel->next;
    }

    // The real new head is whatever follows the dummy node
    return dummy.next;
}