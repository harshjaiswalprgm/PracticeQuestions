#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // creating a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp; // or tail = tail->next;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "this is our temp value :" << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(tail);

int a;
cout<<"enter a number of node:"<<endl;
cin>>a;

    insertAtTail(tail, a);
    print(tail);

  

    return 0;
}
