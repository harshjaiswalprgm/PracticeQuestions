#include <iostream>
using namespace std;
struct studentName
{
    /* data */
    string name;
    int roll_no;
    float fee;
};

int main()
{

    studentName harsh;
    harsh.name = "harrshjaiswal";
    harsh.roll_no = 60;
    harsh.fee = 500;

    cout << "Name of student is: " << harsh.name << endl;
    cout << "roll_no of student is: " << harsh.roll_no << endl;
    cout << "fee of student is: " << harsh.fee << endl;

    return 0;
}
