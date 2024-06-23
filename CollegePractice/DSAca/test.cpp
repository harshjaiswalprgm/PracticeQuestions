#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    double basicSalary;
    double allowances;
    double deductions;
    double netSalary;
    Employee *next;

    // Constructor
    Employee(string _name, double _basicSalary, double _allowances, double _deductions)
        : name(_name), basicSalary(_basicSalary), allowances(_allowances), deductions(_deductions), next(nullptr)
    {
        calculateNetSalary();
    }

    // Calculating  net salary
    void calculateNetSalary()
    {
        netSalary = basicSalary + allowances - deductions;
    }
};

class Payment
{

public:
    Employee *head;
    Payment() : head(nullptr) {}

    // Add employee to the payment
    void addEmployee()
    {
        string name;
        double basicSalary, allowances, deductions;

        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cout << "Enter allowances: ";
        cin >> allowances;
        cout << "Enter deductions: ";
        cin >> deductions;

        Employee *newEmployee = new Employee(name, basicSalary, allowances, deductions);
        if (head == nullptr)
        {
            head = newEmployee;
        }
        else
        {
            Employee *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newEmployee;
        }
    }

    // Display payroll information
    void displayPayment()
    {
        if (head == nullptr)
        {
            cout << "Payment is empty." << endl;
            return;
        }
        Employee *temp = head;
        cout << "Employee Name\tBasic Salary\tAllowances\tDeductions\tNet Salary" << endl;
        while (temp != nullptr)
        {
            cout << temp->name << "\t\t" << temp->basicSalary << "\t\t" << temp->allowances << "\t\t"
                 << temp->deductions << "\t\t" << temp->netSalary << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    Payment payment;
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; ++i)
    {
        cout << "Enter details for employee " << i + 1 << ":" << endl;
        payment.addEmployee();
    }

    cout << "\nPayment Information:\n";
    payment.displayPayment();

    return 0;
}
