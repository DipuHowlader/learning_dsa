#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        } else {
            if (data > root->data) {
                root->right = insert(root->right, data);
            } else {
                root->left = insert(root->left, data);
            }
        }
        return root;
    }

    void inOrder(Node* root) {
        if (root == NULL) {
            return;
        }
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);

    }
};


int main() {
    Solution tree;
    Node* root = NULL;

    int t, data;
    cin >> t;

    while (t--) {
        cin>> data;
        root = tree.insert(root, data);
    }
    tree.inOrder(root);
    return 0;
}