#include <iostream>
using namespace std;
int main()
{

    class Student
    {

    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number(void);
    };

    void Student ::set_roll_number(int r)
    {
        roll_number = r;
    }

    void Student ::get_roll_no()
    {
        cout << "the roll_no is :" << roll_number << endl;
    }

    return 0;
}