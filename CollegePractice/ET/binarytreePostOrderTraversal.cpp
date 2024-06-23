// Q4 Write a code to traverse a binary tree in terms of post-order traversal approach.

#include <iostream>
using namespace std;

// Definition of a node in the binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTree {
public:
    // Function to perform post-order traversal
    void postorderTraversal(TreeNode* root) {
        if (root == NULL)
            return;
        
        postorderTraversal(root->left);   // Traverse left subtree
        postorderTraversal(root->right);  // Traverse right subtree
        cout << root->val << " ";         // Visit the root
    }
};

int main() {
    // Create the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Create an instance of the BinaryTree class
    BinaryTree tree;

    // Perform post-order traversal
    cout << "Post-order traversal: ";
    tree.postorderTraversal(root);
    cout << endl;

    return 0;
}