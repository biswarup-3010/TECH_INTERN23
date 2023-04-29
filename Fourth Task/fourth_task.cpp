/*
    * Level 4
    * C/C++ Programming
    * Assume that you have a binary search tree (BST) 
    with unique integer values stored in each node. 
    Write a C++ or C program to find the maximum width 
    of the tree, which is the maximum number of nodes 
    that can appear at any level in the tree. 
    The program should have a time complexity of O(n),
    where n is the number of nodes in the tree.     
    * Name : Biswarup Banerjee
*/

#include <bits/stdc++.h>
#include<queue>
using namespace std;
class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        this->val = x;
        this->left = nullptr;
        this->right = nullptr;
    } 
    ~TreeNode(){
        delete (this->left);
        delete (this->right);
    }
};
int max_width(TreeNode* root) {
    if (!root) {
        return 0;
    }
    int max_width = 0;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        max_width = max(max_width, size);
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
    }
    return max_width;
}
int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    cout << "Maximum width of the tree: " << max_width(root) << endl;
    delete(root);
    return 0;
}
