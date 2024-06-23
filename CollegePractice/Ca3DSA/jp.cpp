#include <iostream>
using namespace std;

int myQueue[5];
int front = -1, rear = -1, size = 5;

void insertQ(int value)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        cout << "queue overflow hooo gyaaa \n";
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == size - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    myQueue[rear] = value;
}

void deleteMyQueue()
{
    if (front == -1)
    {
        cout << "queue uderflow hoo gyaaa";
        return;
    }
    cout << "Element deleted from queue is : " << myQueue[front] << endl;

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == size - 1)
            front = 0;
        else
            front = front + 1;
    }
}

void displayMyQueue()
{
    int f = front, r = rear;
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are :\n";
    if (f <= r)
    {
        while (f <= r)
        {
            cout << myQueue[f] << " ";
            f++;
        }
    }
    else
    {
        while (f <= size - 1)
        {
            cout << myQueue[f] << " ";
            f++;
        }
        f = 0;
        while (f <= r)
        {
            cout << myQueue[f] << " ";
            f++;
        }
    }
    cout << endl;
}

int main()
{

    int choice, value;
    cout << "1)Insert\n";
    cout << "2)Delete\n";
    cout << "3)Display\n";
    cout << "4)Exit\n";
    do
    {
        cout << "Enter choice that u want 2 enter: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Input doo insertion ke liyee: " << endl;
            cin >> value;
            insertQ(value);
            break;

        case 2:
            deleteMyQueue();
            break;

        case 3:
            displayMyQueue();
            break;

        case 4:
            cout << "Exit\n";
            break;
        default:
            cout << "Incorrect hai yr!\n";
        }
    } while (choice != 4);
    return 0;
}
