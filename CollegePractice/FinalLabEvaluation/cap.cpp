#include <iostream>
using namespace std;

class Node
{
    int data;
    int base_salary;
    int allowance;
    int deduction;
    int net_salary;
    Node *next;

public:
    Node()
    {
    }
    Node(int value)
    {
        this->base_salary = value;
        cout << "allowance: " << endl;
        cin >> this->allowance;
        cout << "deduction: " << endl;
        cin >> this->deduction;
        this->net_salary = this->base_salary + this->allowance this->deduction; // formula
    }
    void insertAtHead(Node *&head, int b_salary)
    {
        Node *newnode = new Node(b_salary);
        newnode->next = head;
        head = newnode;
    }
    void display(Node *head)
    {
        cout << "===== Displaying LL =====" << endl;
        cout << "Person net salary: " << head->net_salary << endl;
        head = head->next;
        cout << endl;
    }
    void displayFullLL(Node *head)
    {
        cout << "===== Displaying company empoloyees net salary ====" << endl; // for the final answer to print line by line
        while (head)
        {
            cout << "Person net salary: " << head->net_salary << endl;
            head = head->next;
        }
        cout << endl;
    }
} *head = NULL;

int main()
{
    Node ll; // not passing any value.. that's why we upar not pass any value and create a default constructor to call..
    A int n_emp;
    cout << "Enter number of emp: ";
    cin >> n_emp; // 5

    int baseSalary;
    while (n_emp != 0) // 4 3 2 1
    {
        cout << "base salary: ";
        cin >> baseSalary;
        ll.insertAtHead(head, baseSalary);
        ll.display(head);
        n_emp--;
    }

    ll.displayFullLL(head);
}