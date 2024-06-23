#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    Node *buildTree(Node *node)
    {
        cout << "enter the data" << endl;
        int data;
        cin >> data;
        root = new node(data);

        if (data == 1)
        {
            return NULL;
        }
        cout << "Enter th e data to the left" << data << endl;
        root->left = buildTree(root->left);

        cout << "Enter th e data to the rightt" << data << endl;
        root->right = buildTree(root->right);

        return root;
    }
};
int main()
{

    Node *root = NULL;
    root = root->buildTree(root);
    return 0;
}