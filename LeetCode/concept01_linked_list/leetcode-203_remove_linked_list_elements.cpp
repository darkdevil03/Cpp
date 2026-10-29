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