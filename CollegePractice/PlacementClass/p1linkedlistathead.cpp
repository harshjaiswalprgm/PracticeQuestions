#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head; // creating another temp pointer which is pointing to head for printing the element's..
    while (temp != NULL)
    {
        cout << "printing temp data :" << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    //  cout << node1->data << endl;
    // cout << node1->next << end
    Node *head = node1;
    cout << endl;
    insertAtHead(head, 12);
    print(head);
    cout << endl;
    insertAtHead(head, 13);
    print(head);

    return 0;
}