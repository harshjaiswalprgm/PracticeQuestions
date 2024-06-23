#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // node pointer that is pointing to the next node

    Node(int data) // creating a constructor to insert the data
    {
        this->data = data; // entering the data in new node
        this->next = NULL; // aur next ko NULL krnaa hia
    }
};

void InsertAtHead(Node *&head, int d) //  &<-- iss liyee use kiyaa his bcz ham caahte hai koi copy nahi create ho..
{                                     // jo hamaari orignal linked list hai usii me changes hoo..

    Node *temp = new Node(d); // now creating a new node for new data
    temp->next = head;        // temp ka jo next(mean addres of next node) hai usko point kraa do 1'st node ke head ko
    head = temp;
}
void printdata(Node *&head)
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

    // head pointed to node1
    Node *head = node1;
    cout << "linked list before insertion :" << endl;
    printdata(head);
    cout << "linked list after  insertion :" << endl;
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    printdata(head);
    return 0;
}
