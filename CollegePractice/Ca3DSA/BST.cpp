#include <iostream>
using namespace std;
//  struct node in the BST
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int value)
{
    Node *newNode = new Node(); // func creating new node
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insertNode(Node* root, int value) { //fun hai ins kr rhee
    if (root == nullptr) {
        root = createNode(value);
    } else if (value <= root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root; 
}

int findHeight(Node* root) {
    if (root == nullptr) {
        return -1; // height empty hota hai tree is -1
    } else {
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}
int main()
{
    Node *root = nullptr; // in start giving null value bcz tree is null in the start
    root = insertNode(root, 5);//1 inserting 1st element
    root = insertNode(root, 3);//2
    root = insertNode(root, 7);//3
    root = insertNode(root, 1);//4
    root = insertNode(root, 4);//5
    root = insertNode(root, 6);//6
    root = insertNode(root, 5);//7
    // root = insertNode(root, 4);//8
    // root = insertNode(root, 6);//9
    // root = insertNode(root, 2);//10
    // root = insertNode(root, 8);//11
    // root = insertNode(root, 1);//12
    // root = insertNode(root, 4);//13
    // root = insertNode(root, 9);//14 last element

    // Find and print the height of the tree
    // cout<<"************************************************************"<<endl;
    // cout<<"************************************************************"<<endl;
    // cout<<"************************************************************"<<endl;
    cout << "Height of the Binary Search Tree is : " << findHeight(root) << endl;
    //  cout<<"************************************************************"<<endl;
    // cout<<"************************************************************"<<endl;
    // cout<<"************************************************************"<<endl;
    return 0;
}