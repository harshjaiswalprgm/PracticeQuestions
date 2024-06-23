//Q9 Write a code to generate a BST by providing the ages of students at run time.

#include <iostream>
using namespace std;

// Definition of a node in the BST
struct TreeNode {
    int age;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : age(x), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the BST
TreeNode* insertNode(TreeNode* root, int age) {
    if (root == nullptr) {
        root = new TreeNode(age);
    } else if (age < root->age) {
        root->left = insertNode(root->left, age);
    } else {
        root->right = insertNode(root->right, age);
    }
    return root;
}

// Function to perform inorder traversal of the BST
void inorderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->age << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;

    cout << "Enter the ages of students (enter -1 to stop):\n";
    int age;
    cin >> age;
    while (age != -1) {
        root = insertNode(root, age);
        cin >> age;
    }

    cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}