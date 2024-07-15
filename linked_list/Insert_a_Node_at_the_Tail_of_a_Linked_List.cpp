#include <bits/stdc++.h>
using namespace std;

class singleLinkedListNode {
public:
    int data;
    singleLinkedListNode* next;

    singleLinkedListNode(int d) {
        this->data = d;
        next = nullptr;
    }
};

class singleLinkedList {
public:
    singleLinkedListNode* head;

    singleLinkedList() {
        this->head = nullptr;
    }
};

void print_singly_linked_list(singleLinkedListNode* node) {
    while (node) {
        cout << node->data << endl;
        node = node->next;
    }
}

singleLinkedListNode* insertNodeAtTail(singleLinkedListNode* head, int data) {
    singleLinkedListNode* node = new singleLinkedListNode(data);

    if (head == nullptr) {
        return node;
    }
    singleLinkedListNode* current_node = head;
    while (current_node->next != nullptr) {
        current_node = current_node->next;
    }

    current_node->next = node;
    return head;
}


void free_linked_list(singleLinkedListNode* node) {
    while (node) {
        singleLinkedListNode* temp = node;
        node = node->next;
        delete(temp);
    }

}

int main() {
    singleLinkedList* llist = new singleLinkedList();

    int llist_count;
    cin >> llist_count;



    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;


        singleLinkedListNode* llist_head = insertNodeAtTail(llist->head, llist_item);
        llist->head = llist_head;
    }


    print_singly_linked_list(llist->head);

    free_linked_list(llist->head);



    return 0;
}