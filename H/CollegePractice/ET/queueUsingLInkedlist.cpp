//Q5 Write a code to store the project titles by implementing the concept of queue using linked list. 

#include <iostream>
using namespace std;

// Node structure for a project
struct ProjectNode {
    string title;
    ProjectNode* next;
    ProjectNode(string t) : title(t), next(nullptr) {}
};

// Queue class implementing a linked list
class ProjectQueue {
private:
    ProjectNode* front;
    ProjectNode* rear;

public:
    ProjectQueue() : front(nullptr), rear(nullptr) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to enqueue a project title
    void enqueue(string title) {
        ProjectNode* newNode = new ProjectNode(title);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << title << endl;
    }

    // Function to dequeue a project title
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }
        ProjectNode* temp = front;
        cout << "Dequeued: " << front->title << endl;
        front = front->next;
        delete temp;
    }

    // Function to display all project titles in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Project titles in the queue:\n";
        ProjectNode* current = front;
        while (current != nullptr) {
            cout << current->title << endl;
            current = current->next;
        }
    }
};

int main() {
    ProjectQueue queue;

    // Enqueue project titles
    queue.enqueue("Project A");
    queue.enqueue("Project B");
    queue.enqueue("Project C");

    // Display project titles
    queue.display();

    // Dequeue a project title
    queue.dequeue();

    // Display project titles after dequeue
    queue.display();

    return 0;
}