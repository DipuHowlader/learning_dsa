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

    void postOrder(Node* root) {
        if (root == NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
};
int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    cin >> t;

    while (t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.postOrder(root);

    return 0;
}

