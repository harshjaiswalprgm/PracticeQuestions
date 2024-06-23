/*#include <iostream>
using namespace std;

class harsh{

    private:

    int commission;


    public:


void calc(int &items)
{
if (items<=200)
{
    commission =(items*5);
    cout<<"commission is" <<commission<<endl;


}
else{
    commission= (items*5);
    commission+=(items-200)*10;
    cout<<"commission is"<<commission<<endl;

}
}
};

int main(){
int items;
cout<<"Enter items"<<endl;
cin>>items;
harsh j;
j.calc(items);
    return 0;
}*

#include <iostream>
using namespace std;
class Test {
  int x;
};
int main(){
  Test t;
  cout << t.x;
  return 0;
}
#include <iostream>
using namespace std;

class Number {
public:
    int num;
    Number(int n) {
        num = n;
    }
};

int main() {
    Number n1(5);
    Number n2 = n1;
    n2.num = 10;
    cout << n1.num << " " << n2.num << endl;
    return 0;
}
#include <iostream>
using namespace std;
class Sample {
    public:
        int x;
};
int main() {
    Sample obj;
    obj.x = 100;
    cout << "x = " << obj.x;
    return 0;
}

//////////////////////////////////////////////////3rd lecture 1st question//////////////////////////

// You are using GCC
#include<iostream>
using namespace std;
class Person
{private:
string name;
int age;
string gender;
public:
void print()
{cin>>name;
cout<<endl;
cin>>age;
cout<<endl;
cin>>gender;
for (int i=0;i<name.length();i++){
    name[i]=toupper(name[i]);
}
for (int i=0; i<gender.length();i++){
    gender[i]=toupper(gender[i]);
}
cout<<name<<"";
cout<<age<<"";
cout<<gender;
}
};
int main()
{
    Person obj;
obj.print();
return 0;
}
/////////////////////////////////////////////3rd lecture 2nd question///////////////////

#include<iostream>
using namespace std;
class Occurrence
{
    private:
    string str;
    char ch;

public:

void countOccurrence()
{
    cin>>str;
    cout<<endl;
    cin>>ch;
    cout<<endl;

    int count=0;
    for(int i=0; i<=str.size();i++)
    {
        if(ch==str[1])
        {
        count++;
    }
    }
    cout<<count;
}
};

int main()
{
    Occurrence obj;
    obj.countOccurrence();
    return 0;
}
//////////////////////////////////////////////////////////////3RD 3RD Q////////////
#include <iostream>
using namespace std;
class dayOfWeek;
class dayOfWeek{
    public:
    int day;
    void setDay(int d){
        day =d;
    }
    string setDay(){
        string dayStr;
        switch (day){

            case 0:
            dayStr = "Weekend";
            break;

            case 1:
            dayStr ="Sunday";
            break;

            case 2:
            dayStr ="Monday";
            break;

            case 3:
            dayStr ="Tuesday";
            break;

            case 4:
            dayStr ="Wednesday";
            break;

            case 5:
            dayStr ="Thursday";
            break;

            case 6:
            dayStr ="Friday";
            break;

            case 7:
            dayStr ="Saturday";
            break;

            default:
            dayStr ="Invalid";
            break;
        }
        return dayStr;
        }
};


int main(){
    dayOfWeek d;
    int dayNum;
    cin>>dayNum;
    d.setDay(dayNum);
    cout<<""<<d.setDay()<<endl;
    return 0;
}

////////////////////////////////////MCQ////////////////////////////
#include <iostream>
using namespace std;

union Data {
    int number;
};

class UnionExample {
public:
    void setNumber(int num) {
        data.number = num;
    }

    int getNumber() {
        return data.number;
    }

private:
    Data data;
};

int main() {
    UnionExample example;

    example.setNumber(42);
    cout << "Number: " << example.getNumber() << endl;

    return 0;
}


/////////////////////MCQ////////////
#include <iostream>
#include <string>
using namespace std;

struct Book {
    string name;
    double price;
};

class BookInfo {
public:
    void setBook(const string& n, double p) {
        book.name = n;
        book.price = p;
    }

    string getBookName() {
        return book.name;
    }

    double getBookPrice() {
        return book.price;
    }

private:
    Book book;
};

int main() {
    BookInfo bookInfo;

    bookInfo.setBook("The Great Gatsby", 10.99);
    cout << "Book Name: " << bookInfo.getBookName() << endl;
    cout << "Book Price: $" << bookInfo.getBookPrice() << endl;

    return 0;
}


///////////////////////////////////////MCQ.////////////////
#include <iostream>
using namespace std;
class Color {
public:
    enum ColorEnum {
        Black,
        Blue,
        Red
    };
};

int main() {
    Color::ColorEnum obj;
    cout << sizeof(obj) << endl;
    return 0;
}

// You are using GCC
// You are using GCC
///////////////////////////////////////////////question 4 ka 1st//////////////////
#include<bits/stdc++.h>
using namespace std;
struct Circle;
struct Circle{
    private:
    float pi=3.14;
    float radius;
    public:
    void input(){
        cin>>radius;
    }
    void area(){
        float circumference=2*pi*radius;
        float area=pi*radius*radius;
        cout<<fixed<<setprecision(2);
        cout<<circumference<<endl;
        cout<<area<<endl;

    }
};
int main(){
    Circle c;
    c.input();
    c.area();
    return 0;
}

#include<iostream>
using namespace std;
union Employee{
int id;
char name[20];
char dob [10];
char doj [10];
float salary;
};

int main(){
    union Employee u;

    cout<<"Enter the ID: ";
    cin>>u.id;

    cout<<"Enter the name: ";
    cin>>u.name;

    cout<<"Enter the date of birth: ";
    cin>>u.dob;

    cout<<"Enter the date of joining: ";
    cin>>u.doj;

    cout<<"Enter the salary: ";
    cin>>u.salary;

    cout<<endl;

    cout<<"ID : "<<u.id<<endl;

    cout<<"Name : "<<u.name<<endl;

    cout<<"DOB : "<<u.dob<<endl;

    cout<<"DOJ : "<<u.doj<<endl;

    cout<<"Salary : "<<u.salary<<endl;

    return 0;

}



#include <iostream>
using namespace std;

class Car
{
private:
    int id;
    string model;


public:
    static int no_of_wheels;
       static int H;
    void input()
    {
        cout << "Enter car model" << endl;
        cin >> model;

        cout << "Enter the id" << id << endl;
        cin >> id;
    }

    void display()
    {

        cout << "Car model is" << model << endl;
        cout << "id is " << id << endl;
    }

    static int count()
    {

        return H;
    }
};

int Car ::H = 0;
int main()
{

int n;
cin>>n;
for (int i=0, i<n; i++){
    Car H;

    Car:: H++;
    H.input();
    H.display();
    Car :: count();
}

    return 0;
}

// You are using GCC
// You are using GCC
// You are using GCC
///////////////////////////////////////////4th lec 3rd question//////////////
#include<iostream>
using namespace std;
class Year{
    private:
    int month;

    public :
    enum Month{
        JANUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
        };


    void input(){
        cin>>month;
    }
    void show(){
        if (month<=12){

            Month m = static_cast<Month>(month);

            switch(month){

                case 1 :
                cout<<"Month: JANUARY"<<endl;
                break;

                case 2 :
                cout<<"Month: FEBRUARY"<<endl;
                break;

                case 3 :
                cout<<"MOnth: MARCH"<<endl;
                break;

                case 4:
                cout<<"Month: APRIL"<<endl;
                break;

                case 5:
                cout<<"Month: MAY"<<endl;
                break;

                case 6:
                cout<<"Month: JUNE"<<endl;
                break;

                case 7:
                cout<<"Month: JULY"<<endl;
                break;

                case 8:
                cout<<"Month: AUGUST"<<endl;
                break;

                case 9:
                cout<<"Month: SEPTEMBER"<<endl;
                break;

                case 10:
                cout<<"Month: OCTOBER"<<endl;
                break;

                case 11:
                cout<<"Month: NOVEMBER"<<endl;
                break;

                case 12:
                cout<<"Month: DECEMBER"<<endl;
                break;
                default:
                cout<<"Invalid month input"<<endl;

            }
        }
        else cout<<"Invalid month input"<<endl;
    }

    };
    int main(){

        Year y;
        y.input();
        y.show();
        return 0;
    }


#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction();
};

void MyClass::myFunction() {
    cout << "This is a non-inline member function";
}

int main() {
    MyClass obj;
    obj.myFunction();
    return 0;
}
#include <iostream>
using namespace std;

inline void func1(int a, int b) {
    cout << "a=" << a << " and b=" << b << endl;
}

inline int func2(int x) {
    return x * x;
}

int main() {
    int temp;
    func1(1, 4);
    temp = func2(6);
    cout << "square val = " << temp << endl;
    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;
};

int MyClass::count = 10;

int main() {
    cout << MyClass::count << endl;
    return 0;
}///////////////////////////////////////////////

// You are using GCC
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length,width;
    static int count;

    static int getCoount(){
    return count;
}
void setDimensions(){
    cin>>length;
    cin>>width;
}

int getArea(){

    int area= length*width;
    return area;
}
};

int Rectangle :: count=0;
int main(){
    int n;
    cin>>n;
    cout<<"Total number of rectangles:"<<n<<endl;
    for(int i=0;i<n;i++){
        Rectangle ::count++;
        Rectangle r;

        r.setDimensions();
        int x=r.getArea();
        cout<<"Area of rectangle "<<Rectangle ::Rectangle ::count<<":"<<x<<endl;

    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int *ptr = arr;
   int *ptr2 = ptr + 3;
   int result = ptr2 - ptr;
   cout << result;
   return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;
    int& ref = num;
    cout << *ptr << " " << ref << endl;
    num = 20;
    cout << *ptr << " " << ref << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
   int arr[] = {10, 20, 30, 40, 50};
   int *ptr = arr;
   int **pptr = &ptr;
   int result = *(*pptr + 2);
   cout << result;
   return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p1, **p2;
    p1 = &a;
    p2 = &p1;
    cout << **p2 << endl;
    return 0;
}

#include <iostream>
using namespace std;
class employee
{                    //by creating a single object.
public:
    string name;
    float salary;

    void add(string n)
    {
        name += n;
    }

    void add(float s)
    {
        salary += s;
    }
};
int main()
{
    int n;
    employee h;

    cin >> n;
    for (int i = 0; i < n; i++)
    {

        string name;
        cin >> name;
        float salary;
        cin >> salary;
        h.add(name);
        h.add(salary);
    }
    cout << "name   " << h.name << endl;
    cout << "salary  " << h.salary << endl;
    return 0;
}
#include <iostream>
using namespace std;
string name;
float salary;
class employee
{
public:
    void add(string n)
    {
        name += n;
    }

    void add(float s)
    {
        salary += s;
    }
};
int main()
{
    int n;  //no. of employee

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        employee h;
        string name;
        cin >> name;
        float salary;
        cin >> salary;
        h.add(name);
        h.add(salary);
    }
    cout << "name   " << name << endl;
    cout << "salary  " << salary << endl;
    return 0;
}

// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    void*ptr;
    
    cin>>n >>c;
    ptr =&n;
    if(*(int*)ptr > 0){
        cout<<"The number is positive."<<endl;
    }
    else if(*(int*)ptr < 0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is zero."<<endl;
    }
    
    ptr = &c;
    if(isalpha(*(char*)ptr)){
        cout<<"The character is an alphabet."<<endl;
    }
    else if(isdigit(*(char*)ptr)){
        cout<<"The character is a number."<<endl;
    }
    else{
        cout<<"The character is not a number or a alphabet."<<endl;
    }
    return 0;
    }
    */