//Q6 Write a code to store the prizes of different items by implement the concept of stack using linked list.

#include <iostream>
using namespace std;

// Node structure for an item
struct ItemNode {
    float prize;
    ItemNode* next;
    ItemNode(float p) : prize(p), next(nullptr) {}
};

// Stack class implementing a linked list
class ItemStack {
private:
    ItemNode* top;

public:
    ItemStack() : top(nullptr) {}

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to push an item's prize onto the stack
    void push(float prize) {
        ItemNode* newNode = new ItemNode(prize);
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << prize << endl;
    }

    // Function to pop an item's prize from the stack
    float pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return -1;
        }
        ItemNode* temp = top;
        float prize = top->prize;
        top = top->next;
        delete temp;
        cout << "Popped: " << prize << endl;
        return prize;
    }

    // Function to display all prizes in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Prizes of items in the stack:\n";
        ItemNode* current = top;
        while (current != nullptr) {
            cout << current->prize << endl;
            current = current->next;
        }
    }
};

int main() {
    ItemStack stack;

    // Push item prizes onto the stack
    stack.push(10.5);
    stack.push(20.7);
    stack.push(15.2);

    // Display item prizes
    stack.display();

    // Pop an item prize from the stack
    stack.pop();

    // Display item prizes after pop
    stack.display();

    return 0;
}