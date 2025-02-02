
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *insertInEmptyList(Node *last, int data){
//     if (last != nullptr) return last;

//     // Create a new node
//     Node *newNode = new Node(data);

//     // Point newNode to itself
//     newNode->next = newNode;

//     // Update last to point to the new node
//     last = newNode;
//     return last;
// }

// void printList(Node* last){
//     if(last == NULL) return;

//     // Start from the head node
//     Node* head = last->next;
//     while (true) {
//         cout << head->data << " ";
//         head = head->next;
//         if (head == last->next) break;
//     }
//     cout << endl;
// }

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node *insertInEmptyList(Node *last, int data) {
    if (last != nullptr) return last;

    // Create a new node
    Node *newNode = new Node(data);

    // Point newNode to itself
    newNode->next = newNode;

    // Update last to point to the new node
    last = newNode;
    return last;

}

void printList(Node* last) {
    if (last == nullptr) return;

    // Start from the head node
    Node* head = last->next;
    do {
        cout << head->data << " ";
        head = head->next;
    } while (head != last->next);
    cout << endl;
}

int main() {
    Node* last = nullptr;

    // Inserting nodes in an empty list
    last = insertInEmptyList(last, 10);
    last = insertInEmptyList(last, 20);

    // Printing the list
    printList(last);

    return 0;
}
