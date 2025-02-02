#include <iostream>
using namespace std;
class doubly
{

    int data;
    struct node *next;
    struct node *prev;
};

*temp, *head, *last, *temp;
int choice = 1;
int main()
{
    last = 0 cout << "Inserting at the end of list";
    while (choice == 1)
    {
        temp = new node();
        cout << "Enter the data of node";
        cin >> temp->data;
        if (last == 0)
        {
            head = last = temp;
            temp->prev = 0;
            temp->next = 0;
        }
        else
        {
            last->next = temp;
            temp->prev = last;
            last = temp;

            last->next = 0;
        }
        cout <<“Do you want to continue ?”;
        cin >> choice;
    }
}