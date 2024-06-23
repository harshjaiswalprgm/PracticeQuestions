#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node* &node)
{
    cout << "Enter the data or element" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == 1)
    {
        return NULL;
    }
    cout << "Enter the data to the left" << endl;
    root->left = buildTree(root -> left);
    cout << "Enter teh data to the right" << endl;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    node *root = NULL;
    root = buildTree(root);

    return 0;
}