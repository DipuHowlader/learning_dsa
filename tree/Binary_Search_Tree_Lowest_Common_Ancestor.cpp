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
     Node *lca(Node *root, int v1,int v2) {
		if(root->data > v1 && root->data > v2){
            lca(root->left, v1,v2);
        }
        if(root->data < v1 && root->data < v2){
            lca(root->right, v1,v2);
        }
        return root;
    }
};



int main() {
    Solution tree;
    Node* root = NULL;

    int t, data;
    cin >> t;

    while (t--) {
        cin >> data;
        root = tree.insert(root, data);
    }
   int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = tree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}