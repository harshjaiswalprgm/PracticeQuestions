#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *head, *last;
void insert(int d)
{
    Node *temp = new Node(d); // creating a new node
    if (head == NULL)
    {
        head = last = temp; // temp apne aap ko popint kr rhaaa
        temp->next = NULL;
    }
    else
    {
        last->next = temp;
        last = temp;
    }
}
void print()
{
    Node *temp = head;
    while (temp != NULL) // continue when temp is not null
    {
        cout << "Overall NetSalary of user is :" << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{

    char ch = 'y';
    while (ch == 'y')
    {                    // Net Salary = Basic Salary + Allowances - Deductions
        int base_salary; // matlab orignal salary hota hai
        int allowance;   // matlab discount hota hai
        int deduction;   // katauti
        cout << "Enter the base_salary of User :" << endl;
        cin >> base_salary;
        cout << "Enter the allowance_salary User :" << endl;
        cin >> allowance;
        cout << "Enter the deduction_salary User :" << endl;
        cin >> deduction;
        int salary = base_salary + allowance - deduction;
        insert(salary);
        cout << "Enter y to calc more user --> NetSalary<-- press any key to end the loop :" << endl;
        cin >> ch;
    }
    print();
    return 0;
}