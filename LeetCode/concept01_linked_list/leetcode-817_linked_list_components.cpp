/**
    LeetCode Question 817:
        https://leetcode.com/problems/linked-list-components
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {

    struct ListNode* travel = head;

    int presentNums[10002] = {0};
    for(int i = 0; i < numsSize; i++){
        presentNums[nums[i]] = 1;
    }

    int chain_count = 0;
    int chain_flag = 0;

    while(travel != NULL){
        if(presentNums[travel->val] == 1){
            if(chain_flag == 0){
                chain_count++;
                chain_flag = 1;
            }
        }
        else{
            chain_flag = 0;
        }
        travel = travel -> next;
    }

    return chain_count;
}
