#include <iostream>
using namespace std;
class A
{
public:
    void funA()
    {
        int a = 10;
        int b = 30;
        cout << a << endl;
        cout << b;
    }
};

class B : protected A
{
public:
    void funB()
    {
        int a = 40;
        int b = 60;
        cout << a;
        cout << b;
    }

}; class C :public B
{
public:
    void funC()
    {
        int a = 90;
        int b = 50;
        cout << a<<endl;
        cout << b<<endl;
    }
};

int
main()
{
C obj;
obj.funC();

    return 0;
}