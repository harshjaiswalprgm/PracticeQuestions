// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data) {
//         this->data = data;
//         left = right = nullptr;
//     }
// };

// int main() {
//     Node* root = new Node(50);
//     root->left = new Node(30);
//     root->right = new Node(70);
//     cout << "Root data: " << root->data << endl;
//     cout << "Left child data: " << root->left->data << endl;
//     cout << "Right child data: " << root->right->data << endl;
//     return 0;
    
// }

// now we ahve ot put condition like -1 and 0 to check the condition to insert the node

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;

    // Additional condition to check for duplicate values
    if (data == root->data) {
        cout << "Duplicate value found: " << data << endl;
        return root;
    }
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    root = insertNode(root, 50); // Duplicate value
    cout << "Root data: " << root->data << endl;
    cout << "Left child data: " << root->left->data << endl;
    cout << "Right child data: " << root->right->data << endl;
    return 0;
}
