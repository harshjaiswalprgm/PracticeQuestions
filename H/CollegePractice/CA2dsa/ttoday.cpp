
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        int value = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    bool isEmpty()
    {
        return (top == nullptr);
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    int findHighestScore()
    {
        int highest = 0;
        Node *current = top;
        while (current != nullptr)
        {
            if (current->data > highest)
            {
                highest = current->data;
            }
            current = current->next;
        }
        return highest;
    }
};

int main()
{
    Stack stack;
    int scores[5];

    cout << "Enter test scores of 5 cricketers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[i];
        stack.push(scores[i]);
    }

    int highestScore = stack.findHighestScore();
    cout << "The highest test score among the cricketers is: " << highestScore << endl;

    return 0;
}
