// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "Enter the id" << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
//     }

//     static void getCount(void)
//     {
//         // cout<<id; // throws an error
//         cout << "The value of count is " << count << endl;
//     }
// };

// // Count is the static data member of class Employee
// int Employee::count; // Default value is 0

// int main()
// {
//     Employee harry, rohan, lovish;
//     // harry.id = 1;
//     // harry.count=1; // cannot do this as id and count are private

//     harry.setData();
//     harry.getData();
//     Employee::getCount();

//     rohan.setData();
//     rohan.getData();
//     Employee::getCount();

//     lovish.setData();
//     lovish.getData();
//     Employee::getCount();

//     return 0;
// }

#include <iostream>
using namespace std;
class Student
{
    int id;
    int roll_no;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        cout << "enter the roll_no" << endl;
        cin >> roll_no;
        count++;
    }
    void getdata(void)
    {

        cout << "id is " << id << "and roll_no is " << roll_no <<"and count is "<< count << endl;
        // cout << "id is " << id <<"and this is count no." <<count << endl;
    }
    static void getcount(void)
    {
        cout << "count of student is" << count << endl;
    }
};
int Student::count;
int main()
{

    Student harsh, pagalchatti;
    harsh.setdata();
    harsh.getdata();
    Student::getcount();

    pagalchatti.setdata();
    pagalchatti.getdata();
    Student::getcount();

    return 0;
}