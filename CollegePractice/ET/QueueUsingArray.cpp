//Q7 Write a code to store the kid痴 name by implementing the concept of queue using array. 

#include <iostream>
using namespace std;

#define MAX_SIZE 100

class KidQueue {
private:
    string kids[MAX_SIZE];
    int front, rear;

public:
    KidQueue() : front(-1), rear(-1) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    // Function to enqueue a kid's name
    void enqueue(string name) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue.\n";
            return;
        }
        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX_SIZE;
        kids[rear] = name;
        cout << "Enqueued: " << name << endl;
    }

    // Function to dequeue a kid's name
    string dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue.\n";
            return "";
        }
        string name = kids[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
        cout << "Dequeued: " << name << endl;
        return name;
    }

    // Function to display all kid's names in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Kid's names in the queue:\n";
        int i = front;
        while (i != rear) {
            cout << kids[i] << endl;
            i = (i + 1) % MAX_SIZE;
        }
        cout << kids[rear] << endl;
    }
};

int main() {
    KidQueue queue;

    // Enqueue kid's names
    queue.enqueue("Alice");
    queue.enqueue("Bob");
    queue.enqueue("Charlie");

    // Display kid's names
    queue.display();

    // Dequeue a kid's name
    queue.dequeue();

    // Display kid's names after dequeue
    queue.display();

    return 0;
}