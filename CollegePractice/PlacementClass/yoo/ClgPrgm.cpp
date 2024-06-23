/*#include<stdio.h>
int main(){
    int default = 5, a = 3;
    if(a > 2)
    printf("%d",default);
    return 0;
}


#include<iostream>
using namespace std;
class Time{

    private:
    int date,month,year,hours,minutes;
    public:

    void getTime (){
        cin>>hours;
        cin>>minutes;
        cin>>date;
        cin>>month;
        cin>>year;
    };

    int calc(){
        return (hours*60)+minutes;
    }

    void output(){
        if(hours>24 || date>31 || month>12 || minutes>60){
            cout<<"Invalid"<<endl;
        }
        else{
            cout<<"Date:"<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"Time:"<<hours<<"hrs"<<minutes<<"mins"<<endl;
            cout<<"Total mins:"<<calc()<<endl;

        }
    }

};
int main(){

    Time t;
    t.getTime();
    t.output();
    return 0;
}
/////////////////////////////////////
#include<iostream>
using namespace std;
int main (){
    int set;
int x = 786;
cout << setfill('*') << setw(6) << x;
return 0;
}/////////////////////////////////////////

#include <iostream>
using namespace std;

extern inline int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int m;
    m=min(3,-5);
    cout << m;
    return 0;
}



#include <iostream>
using namespace std;

void fun(int a, int b = 10, int c = 20) {
    cout << a << " " << b << " " << c << endl;
}

int main() {
    fun(5);
    fun(5, 12);
    fun(5, 12, 17);
    return 0;
}

//////////////////

// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int n;
    std::cin>>n;
    for(int i=1; i<=n;i++)
    {
        std:: setw(0);
        std:: cout<<"0."<<i<<"";
    }
    return 0;
}



// You are using GCC
#include<iostream>
using namespace std;
class Area{

    public:
    inline void get()
    {cout<<"";
}

inline void squareArea(int sideLength){
    int area=sideLength*sideLength;
    cout<<"Area of the square:"<<area<<endl;
}
inline void rectangleArea(int length, int width){
    int area=length*width;
    cout<<"Area of the rectangle:"<<area<<endl;
}
inline void circleArea(float radius){
    float area=3.14*radius*radius;
    cout<<"Area of the circle:"<<fixed<<setprecision(2)<<area<<endl;
}

inline void parallelogramArea(float base,float height){
    float area=base*height;
    cout<<"Area of the parallelogram:"<<fixed<<setprecision(2)<<area<<endl;

}

};

int main(){
    Area obj;
    int side;
    cin>>side;
    obj.squareArea(side);
    int length,width;
    cin>>length;
    cin>>width;
    obj.rectangleArea(length,width);
    float radius;
    cin>>radius;
    obj.circleArea(radius);
    float base,height;
    cin>>base;
    cin>>heigth;
    obj.parallelogramArea(base, height);
    obj.get();
    return 0;
}




#include<stdio.h>

int main()

{

   int x,y,a,b,c;

   printf("Enter the value of X\n");

   scanf("%d",&x);

   printf("Enter the value of Y\n");

   scanf("%d",&y);

   a=(y-(5*x))/13;

   b=x+a;

   c=(2*a);

   printf("Number of children tickets sold : %d\n",a);

   printf("Number of adult tickets sold : %d\n",b);

   printf("Number of senior tickets sold : %d",c);

   return 0;



}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void suqareArea();
void rectangleArea();
void circleArea();
void parallelogramArea();


class Area{

    public:
    inline void squareArea(int sideLength){
        int area=sideLength*sideLength;
        cout<<"Area of the square:"<<area<<endl;
    }
    inline void rectangleArea(int length, int width){
        int area=length*width;
        cout<<"Area of the rectangle:"<<area<<endl;
    }
    inline void circleArea(float radius){
        float area=3.14*radius*radius;
        cout<<"Area of the circle:"<<fixed<<setprecision(2)<<area<<endl;
    }

    inline void parallelogramArea(float base, float height){
        float area=base*height;
        cout<<"Area of the parallelogram:"<<fixed<<setprecision(2)<<area<<endl;

    }

};

int main(){
    Area obj;
    int side;
    cin>>side;
    obj.squareArea(side);
    int length,width;
    cin>>length;
    cin>>width;
    obj.rectangleArea(length,width);
    float radius;
    cin>>radius;
    obj.circleArea(radius);
    float base,height;
    cin>>base;
    cin>>height;
    obj.parallelogramArea(base, height);
    return 0;
}


#include <iostream>
using namespace std;
class Box {
    double width;
    public:
        friend void printWidth( Box box );
        void setWidth( double wid );
};

void Box::setWidth(double wid) {
    width = wid;
}

void printWidth(Box box) {
    box.width = box.width * 2;
    cout << box.width << endl;
}

int main() {
    Box box;
    box.setWidth(10.0);
    printWidth( box );
    return 0;
}


#include<iostream>
using namespace std;
void print(int i) {
    cout << i;
}
void print(double f) {
    cout << f;
}
int main() {
    print(5);
    print(500.263);
    return 0;
}
///////////////////////////////

#include <iostream>
using namespace std;

class MyClass {
    friend void printMessageLoop(MyClass& obj, int count);
    int data;

public:
    int getData() {
        return data;
    }
};

void printMessageLoop(MyClass& obj, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Hello from friend function!" << endl;
    }
}

int main() {
    MyClass obj;
    int loopCount = 3;

    printMessageLoop(obj, loopCount);

    return 0;
}
#include <iostream>
using namespace std;
long factorial (long a) {
    if (a > 1)
        return (a * factorial (a - 1));
    else
        return 1;
}

int main () {
    long num = 3;
    cout << num << "! = " << factorial ( num );
    return 0;
}
#include <iostream>
using namespace std;

void modifyValue(int& num) {
    num *= 2;
}

int main() {
    int value = 10;
    modifyValue(value);
    cout << value;
    return 0;
}


#include <iostream>
using namespace std;

void increment(int num) {
    num++;
    cout << "Inside increment: " << num << endl;
}

int main() {
    int value = 5;
    increment(value);
    cout << "Inside main: " << value << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int &p = a;
    cout<<p;
    return 0;
}

///////////////////////////////////////////////////////PRACTICE///////////////////////////////////////


#include<iostream>
using namespace std;
int main(){
int myage =21;
cout<<"my age is:"<< myage <<" year old. "<<endl;
    return 0;
}

WAP program to implement a class called employee that has privet member variables for name employee id
and salary. Include member function to calculate and set salary based on employee performance.*

#include <iostream>
using namespace std;
class employee
{

private:
    string name;
    int employee_Id;
    int salary;
    int da;
    int hra;
    int incomeTax;
    int totalSalary;
    int finalresult;

public:
    void setdata(string s, int ss, int d, int id, int h, int ic)
    {
        name = s;
        employee_Id = id;
        salary = ss;
        da = d;
        hra = h;
        incomeTax = ic;
    }
    int calc()

    {
        totalSalary = hra + da;

        totalSalary = (incomeTax * totalSalary) / 100;
        finalresult = totalSalary - incomeTax;
        return finalresult;
    }
};

int main()
{
    string name;
    int employee_Id;
    int salary;
    int da;
    int hra;
    int incomeTax;
    int totalSalary;
    int finalresult;

    employee obj;
    cout << "enter name:";
    cin >> name;
    cout << "enter employee_id:";
    cin >> employee_Id;
    cout << "enter salary:";
    cin >> salary;
    cout << "enter hra:";
    cin >> hra;
    cout << "da:";
    cin >> da;
    cout << "Enter precentage of income tax:" << endl;
    cin >> incomeTax;

    obj.setdata(name, salary, da, employee_Id, hra, incomeTax);
    cout << "Total salary is" << obj.calc() << endl;
    return 0;
}*/
#include <iostream>
#include <cstring>
#include <cctype>

int countWords(const char *input) {
    int count = 0;
    int insideWord = 0;

    // Iterate through each character in the input
    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            // If the current character is a letter, it's part of a word
            if (!insideWord) {
                count++;
                insideWord = 1;
            }
        } else {
            // If the current character is not a letter, it's not part of a word
            insideWord = 0;
        }
    }

    return count;
}

int main() {
    char input[1000];
    std::cout << "Enter a sentence: ";
    std::cin.getline(input, sizeof(input));

    // Remove the newline character from the input
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    const char *ptr = input;

    int wordCount = countWords(ptr);ṇ

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}
  #include <iostream>

using namespace std;

// Function to count the number of words in a sentence using pointer to pointer
int countWords(char **str) {

  int wordCount = 0;

  // Iterate over the sentence until the null character is reached
  while (**str != '\0') {

    // If the current character is a space and the previous character is not a space,
    // then increment the word count
    if (**str == ' ' && *(*str - 1) != ' ') {
      wordCount++;
    }

    // Move to the next character in the sentence
    *str++;
  }

  // Return the word count
  return wordCount + 1;
}

// Driver code
int main() {

  // Declare a pointer to a pointer to a character
  char **sentence;

  // Allocate memory for the pointer to a pointer to a character
  sentence = (char **)malloc(sizeof(char *));

  // Read the user input
  cout << "Enter a sentence: ";
  cin.getline(*sentence, 1000);

  // Count the number of words in the sentence
  int wordCount = countWords(sentence);

  // Print the number of words in the sentence
  cout << "The number of words in the sentence is: " << wordCount << endl;

  // Free the allocated memory
  free(sentence);

  return 0;
}
