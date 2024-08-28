#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// void InsertAtHead(Node *&head, int d) //  &<-- iss liyee use kiyaa his bcz ham caahte hai koi copy nahi create ho..
// {                                     // jo hamaari orignal linked list hai usii me changes hoo..

//     Node *temp = new Node(d); // now creating a new node for new data
//     temp->next = head;        // temp ka jo next(mean addres of next node) hai usko point kraa do 1'st node ke head ko
//     head = temp;
// }

void InsertAtTail(Node* &tail, int d)
{

    Node *temp = new Node(d); // now creating a new node for new data
    tail->next = temp;
    tail=temp;
}
void printdata(Node* &head)
{
    Node *temp = head;   // new node create kr rhee jo point krega head ko(1'st node ki value hold kregaa)
   
    while (temp != NULL) // jab tak temp NULL nahi ho jataa..print temp
    {
        cout << temp->data << endl; // printing value of temp
        temp = temp->next;          // aur temp ko aage bdhaa doo... temp+1
        // cout << endl;
    }
}
int main()
{
    // created new node
    Node *node1 = new Node(10); // creating the object of node class
    // cout << node1->data << endl; // next node ki address ki value
    // cout << node1->next << endl; // it means the address of next node that is present in current node

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtTail(tail, 12;)

        print(head);
    insertAtTail(tail, 15;)

        print(head);
    // head pointed to node1
    // Node *head = node1;
    // cout << "linked list before insertion :" << endl;
    // printdata(head);
    // cout << "linked list after  insertion :" << endl;
    // InsertAtHead(head, 12);
    // InsertAtHead(head, 15);
    // printdata(head);
    return 0;
}
