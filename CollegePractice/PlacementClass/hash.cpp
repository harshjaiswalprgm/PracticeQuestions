#include <iostream>
#include <string>
using namespace std;

unsigned int hashFunction(const string &key, int tableKaSize)
{
    unsigned int hash = 0;
    for (char c : key)
    {
        hash = (hash * 31 + c) % tableKaSize; // Using a simple hashing algorithm formula
    }
    return hash;
}

// Employee structure
struct Employee
{
    string name;
    int age;
    double salary;
    // You can add more fields as needed
};

// Function to save employee data using hash address
void saveEmployeeData(Employee employees[], const string &name, int age, double salary, int tableKaSize)
{
    unsigned int hash = hashFunction(name, tableKaSize);
    employees[hash].name = name;
    employees[hash].age = age;
    employees[hash].salary = salary;
}

int main()
{
    const int tableKaSize = 100;     // Size of hash table
    Employee employees[tableKaSize]; // hash table to store employee data ofr understanding

    saveEmployeeData(employees, "Subh", 30, 50000.0, tableSize);
    saveEmployeeData(employees, "Harsh", 25, 60000.0, tableSize);

    cout << "Employee data:" << endl;
    for (int i = 0; i < tableSize; ++i)
    {
        if (!employees[i].name.empty())
        {
            cout << "Hash Address " << i << ": " << employees[i].name << ", " << employees[i].age << ", " << employees[i].salary << endl;
        }
    }

    return 0;
}
