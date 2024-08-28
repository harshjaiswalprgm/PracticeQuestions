#include <iostream>
using namespace std;
// Node class to represent each element in the stack
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class
class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }

    // Function to push an element onto the stack
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            top = newNode;
        }
        else
        {
            newNode->next = top;
            top = newNode;
        }
        cout << data <<endl;