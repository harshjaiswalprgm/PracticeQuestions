/*#include<iostream>
using namespace std;
class Programming {
public:
Programming (string str){
    cout<<str<<endl;
}
Programming(){
    cout<<"I love programming languages"<<endl;}
};
int main(){
    string str="Hello";
    Programming h;
    Programming j(str);
    return 0;
}
*/

#include <iostream>
using namespace std;
class constructor_handling
{

public:
    string Name[50];
    int age;
    double salary;
    constructor_handling(){
        cout<<"Welcome to c programming!"<<endl;
    }
    constructor_handling(string name, double salary, int age)
    {
        cout << "Name is:"<<name<< endl;
        cout << "salary:"<<salary<< endl;
        cout << "age:"<<age<< endl;
    }
};

int main()
{
    string name;
    cin >> name;
    double salary;
    cin >> salary;
    int age;
    cin >> age;
    constructor_handling j;
    constructor_handling k(name,salary,age);

    return 0;
}