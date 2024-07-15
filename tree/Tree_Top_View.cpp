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
        if (root == NULL)
            return new Node(data);

        if (data > root->data) {
            root->right = insert(root->right, data);
        } else {
            root->left = insert(root->left, data);
        }

        return root;
    }

    void topView(Node* root){
        
    }
};


int main() {
    Solution tree;
    Node* root = NULL;

    int t, data;

    while (t--) {
        cin >> data;
        root = tree.insert(root, data);        
    }

    tree.topView(root);
}