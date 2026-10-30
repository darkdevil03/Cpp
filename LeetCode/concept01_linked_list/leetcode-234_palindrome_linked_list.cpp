/**
    LeetCode Question 234:
        https://leetcode.com/problems/palindrome-linked-list
 */

// Full working code written,
// if you are referring for solution function find below from line 48.
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createList(struct ListNode* head, int val) {
    struct ListNode* temp = new ListNode();
    temp->val = val;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct ListNode* curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }

    return head;
}

void displayList(struct ListNode* head) {
    struct ListNode* curr = head;
    while (curr != NULL) {
        cout << curr->val;
        if (curr->next != NULL) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

//----------------------LeetCode Solution Start---------------------------

struct ListNode* reverse(struct ListNode* node){
    struct ListNode* prev = NULL;
    struct ListNode* curr = node;
    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return true;

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* p1 = head;
    struct ListNode* p2 = reverse(slow);

    while(p2 != NULL){
        if(p1->val != p2->val){
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

// --------------------------LeetCode Solution End----------------------------

int main() {
    struct ListNode* head = NULL;
    cout << "---------- Palindrome Linked List ----------" << endl;
    cout << "Enter the size for your list : ";
    int size;
    cin >> size;

    cout << "\nEnter the " << size << " elements : ";
    for(int i = 0; i < size; i++) {
        int val;
        cin >> val;
        head = createList(head,val); // Just pass the value!
    }

    cout << "\nValues in LinkedList: ";
    displayList(head);

    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is NOT a palindrome." << endl;
    }

    return EXIT_SUCCESS;
}