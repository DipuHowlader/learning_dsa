#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

class singlyLinkedList {
public:
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;

    singlyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int new_data) {
        SinglyLinkedListNode* node = new SinglyLinkedListNode(new_data);

        if (!this->head) {
            this->head = node;
            this->tail = nullptr;
        } else {
            this->tail->next = node;
        }

        this->tail = node;
    }

};

void free_linked_list(SinglyLinkedListNode* Node) {
    while (Node) {
        SinglyLinkedListNode* temp = Node;
        Node = Node->next;

        free(temp);
    }

}

void printLinkedList(SinglyLinkedListNode* head) {
    while (head) {
        cout << head->data << endl;
        head = head->next;
    }

}

int main() {
    singlyLinkedList* llist = new singlyLinkedList();

    int length, item;cin >> length;
    while (length--) {
        cin >> item;
        llist->insert_node(item);
    }

    printLinkedList(llist->head);
    free_linked_list(llist->head);
}