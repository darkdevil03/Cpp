
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* prev = NULL;
    struct ListNode* temp;

    while(current != NULL){
        temp = current -> next;
        current -> next = prev;
        prev = current;
        current = temp;
    }

    return prev;

}