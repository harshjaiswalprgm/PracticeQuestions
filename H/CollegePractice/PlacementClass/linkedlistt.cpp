#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int data) // creating a constructor to insert the data
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertHead(Node*& head, int d)
{

    // now creating a new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

    void printdata(Node*& data)
    {
        Node* temp = head; // new node create kr rhee jo point krega  head ko
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp ->next;
            cout << endl;
        }
    }
}

int main()
{

    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    print(head);
    InsertHead(head,12);
     return 0;
}

