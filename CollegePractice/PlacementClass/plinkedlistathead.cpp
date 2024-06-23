#include <iostream>
using namespace std;

class Node    //insertion at head...
{
public:
    int data;
    Node *next;

    // creating  a constructor
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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "this is our temp value :" << temp->data << endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *node1 = new Node(10);   //decleared object
    //cout << node1->data << endl;
    //cout << node1->next << endl;

    Node *head = node1;
    cout<<endl;
    print(head);
    insertAtHead(head, 121);
    print(head);
    cout<<endl;
    insertAtHead(head, 155);
    print(head);
    return 0;


}