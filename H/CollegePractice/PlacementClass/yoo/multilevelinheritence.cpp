#include <iostream>
using namespace std;

// First Base class
class X
{
public:
    int x1;
    int get_x1();

private:
    int x2;
    int get_x2();
};

// Definition of get_x1() function of X class
int X ::get_x1()
{
    return x1;
}

// Definition of get_x2() function of X class
int X ::get_x2()
{
    return x2;
}

// Intermediate base class, inheriting from class X
class Y : public X
{
public:
    int y1;
    int get_y1();

protected:
    int y2;
    int get_y2();
};

// Definition of get_y1() function of Y class
int Y ::get_y1()
{
    return y1;
}

// Definition of get_y2() function of Y class
int Y ::get_y2()
{
    return y2;
}

// Derived class Z, publicly inheriting the class Y
class Z : public Y
{
};

int main()
{
    Z ob;       // Making an object of derived class
    ob.x1 = 10; // Accessing an inherited property x1

    // ob.x2 = 10; not possible because x2 is private and cannot be inherited.

    ob.y1 = 20; // Accessing an inherited property y1
    // ob.y2 = 20; not possible because y2 is protected and cannot be directly accessed in the main method outside its class.

    cout << "The value of x1 is : " << ob.x1 << "\n";
    cout << "The value of y1 is : " << ob.y1 << "\n";

    return 0;
}