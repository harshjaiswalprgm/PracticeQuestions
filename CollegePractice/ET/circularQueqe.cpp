// Q2 Write a code to implement circular queue for storing prices of items. 

#include <iostream>
using namespace std;

#define MAX_SIZE 10

class CircularQueue {
private:
    int front, rear;
    float prices[MAX_SIZE];

public:
    CircularQueue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1);
    }

    void enqueue(float price) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue.\n";
            return;
        }
        if (front == -1)
            front = rear = 0;
        else if (rear == MAX_SIZE - 1)
            rear = 0;
        else
            rear++;
        prices[rear] = price;
        cout << "Enqueued " << price << endl;
    }

    float dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue.\n";
            return -1;
        }
        float price = prices[front];
        if (front == rear)
            front = rear = -1;
        else if (front == MAX_SIZE - 1)
            front = 0;
        else
            front++;
        cout << "Dequeued " << price << endl;
        return price;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue contents: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << prices[i] << " ";
        } else {
            for (int i = front; i < MAX_SIZE; i++)
                cout << prices[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << prices[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue queue;
    queue.enqueue(10.5);
    queue.enqueue(20.7);
    queue.enqueue(15.2);
    queue.display();
    queue.dequeue();
    queue.display();
    queue.enqueue(30.1);
    queue.enqueue(25.9);
    queue.enqueue(35.6);
    queue.enqueue(40.3);
    queue.enqueue(45.8);
    queue.enqueue(50.2);
    queue.enqueue(55.4);
    queue.display();
    queue.dequeue();
    queue.dequeue();
    queue.enqueue(60.7);
    queue.enqueue(65.9);
    queue.display();

    return 0;
}