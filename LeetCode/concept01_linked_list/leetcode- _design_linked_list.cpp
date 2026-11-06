

// 1. Define the individual node structure
typedef struct Node {
    int val;
    struct Node* next;
} Node;

// 2. Define the main Linked List structure containing metadata
typedef struct {
    Node* head;
    int size;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList node* = (MyLinkedList *) malloc (sizeof(MyLinkedList));
    node -> head = NULL;
    node -> size = 0;
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if(index < 0 || index >= obj -> size){
        return -1;
    }
    Node temp* = obj -> head;
    int count = 1;
    while(temp != NULL){
        if(count == index){
            return temp -> val;
        }
        count++;
        temp = temp -> next;
    }
    return -1
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    Node newHead* = (Node *) malloc (sizeof(Node));
    newHead->val = val;
    newHead->next = obj -> head;
    obj -> head = newHead;
    obj->size++;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    Node newNode* = (Node *) malloc (sizeof(Node));
    newNode -> val = val;
    newNode -> next = NULL;

    if (obj->size == 0) {
        obj->head = newNode;
    } else {
        Node temp* = obj -> head;
        for(int i = 0; i < obj->size - 1; i++){
            temp = temp -> next;
        }
        temp->next = newNode;
    }
    obj->size++;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if(val > obj->size){
        return;
    }

    if (index <= 0) {
        myLinkedListAddAtHead(obj, val);
        return;
    }
    if (index == obj->size) {
        myLinkedListAddAtTail(obj, val);
        return;
    }

    Node temp* = (Node *) malloc (sizeof(Node));
    temp -> val = val;

    Node* cur = obj -> head;

    for(i= 0; i < index - 1 ;i++){
        cur = cur -> next;
    }
    temp -> next = cur -> next;
    cur -> next = temp;

    obj -> size++;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {

}

void myLinkedListFree(MyLinkedList* obj) {

}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/