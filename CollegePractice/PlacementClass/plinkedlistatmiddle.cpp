#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    NOde(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertAtPosition(Node *&head int d, int position)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next
    temp->next = NodeToInsert;
}selecion 

void print(Node* int position

int main()
{
    return 0;
}