#include <iostream>
using namespace std;

// Define the structure of a node in the binary search tree
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the BST
Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        root = createNode(value);
    } else if (value <= root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// Function to find the height of the BST
int findHeight(Node* root) {
    if (root == nullptr) {
        return -1; // Height of an empty tree is -1
    } else {
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

int main() {
    Node* root = nullptr; // Initialize an empty tree

    // Insert elements into the tree
    root = insertNode(root, 5);
    root = insertNode(root, 3);
    root = insertNode(root, 7);
    // root = insertNode(root, 1);
    // root = insertNode(root, 4);
    // root = insertNode(root, 6);
    // root = insertNode(root, 9);

    // Find and print the height of the tree
    cout << "Height of the BST is: " << findHeight(root) << endl;

    return 0;
}
