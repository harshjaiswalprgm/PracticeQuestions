#include <iostream>
using namespace std;

// Node class to represent each element in the queue
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

// Queue class
class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    // Function to check if the queue is empty or not
    bool isEmpty()
    {
        return front == nullptr;
    }

    // Function to add an element to the rear of the queue
    void enqueue(int data) // inserting data in linked list
    {
        Node *newNode = new Node(data);
        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        cout << data << " enqueued to queue." << endl;
    }

    // Function to remove an element from the front of the queue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            rear = nullptr;
        }
        cout << temp->data << " dequeued from queue." << endl;
        delete temp;
    }

    // Function to get the element at the front of the queue without removing it
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(50);

    cout << "Front element: " << q.peek() << endl;
    // cout<<"the length of queue is :"<<enqueue.size();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    if (q.isEmpty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
