/*#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    void printValue() {
        cout << this->value << endl;
    }
};

int main() {
    MyClass obj;
    obj.value = 10;
    obj.printValue();
    return 0;
}
#include <iostream>
using namespace std;

int* getPointer() {
    int num = 10;
    return &num;
}
int main() {
    int* ptr = getPointer();
    cout << *ptr;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int* wildPtr = nullptr;
    cout << *wildPtr;
    return 0;
}
#include <iostream>
int* createArray() {
    int arr[3] = {1, 2, 3};
    return arr;
}

int main() {
    int* ptr = createArray();
    std::cout << ptr[1];
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int* ptr = &arr[0][0];
    for (int i = 0; i < 9; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;
class ArrayProcessor {
public:
   static void processArray(int arr[][3], int rows) {
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
         }
         cout << endl;
      }
   }
};
int main() {
   int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
   ArrayProcessor::processArray(arr, 2);
   return 0;
}
#include <iostream>
class Matrix {
private:
    static const int ROWS = 2;
    static const int COLS = 3;
    int arr[ROWS][COLS];
public:
    void initialize() {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                arr[i][j] = i + j;
            }
        }
    }
    void printElement(int row, int col) {
        std::cout << arr[row][col] << std::endl;
    }
};
int main() {
    Matrix m;
    m.initialize();
    m.printElement(1, 2);
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*ptr)[3] = arr;
    cout << ptr[1][2];
    return 0;
}
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    void increment() {
        x++;
    }
};

int main() {
    MyClass arr[3];
    for (int i = 0; i < 3; i++) {
        arr[i].increment();
    }
    cout << arr[2].x << endl;
    return 0;
}


#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    void increment() {
        x++;
    }
};

int main() {
    MyClass arr[3];
    for (int i = 0; i < 3; i++) {
        arr[i].increment();
    }
    cout << arr[2].x << endl;
    return 0;
}
#include <iostream>
#include <string>
    
class Person {
public:
    std::string name;
    Person(const std::string& name) {
        this->name = name;
    }
};

int main() {
    const int arraySize = 3;
    Person people[arraySize] = { Person("John"), Person("Alice"), Person("Bob") };
    for (int i = 0; i < arraySize; ++i) {
        std::cout << people[i].name << std::endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    str += " World!";
    cout << str.size() << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    cout << str[7] << endl;
    return 0;
}#include <iostream>
#include <string>
    
int main() {
    std::string str = "Hello, World!";
    str.insert(7, "there ");
    std::cout << str;
    return 0;
}
#include <iostream>
#include <string>
int main() {
    std::string str = "Hello, World!";
    str.replace(7, 5, "Universe");
    std::cout << str;
    return 0;
}
#include <iostream>
#include <string>
    
int main() {
    std::string str = "Hello, World!";
    std::cout << str.substr(7);
    return 0;
}
#include <iostream>
#include <string>
int main() {
    std::string str = "Programming";
    str.erase(4, 7);
    std::cout << str;
    return 0;
}
//lecture 14
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    str.push_back('!');
    std::cout << str;
    return 0;
}#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    str.erase(0, 5);
    std::cout << str;
    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    str.insert(5, "beautiful ");
    std::cout << str;
    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    str.resize(5);
    std::cout << str;
    return 0;
}
#include <iostream>
class MyClass {
public:
  int x;
  MyClass() {
    x = 0;
    std::cout << "Default constructor called!" << std::endl;
  }
};

int main() {
  MyClass obj;
  std::cout << obj.x << std::endl;
  return 0;
}
#include <iostream>

class MyClass {
public:
  int x;
  MyClass() {
    std::cout << "Default constructor called!" << std::endl;
  }
  MyClass(int value) {
    x = value;
    std::cout << "Parameterized constructor called!" << std::endl;
  }
};

int main() {
  MyClass obj1;
  MyClass obj2(5);
  std::cout << obj1.x << " " << obj2.x << std::endl;
  return 0;
}
class Manager {
public:
    Manager() {
        std::cout << "Default constructor called." << std::endl;
    }
};
#include <iostream>

class MyClass {
public:
  int x;
  MyClass() {
    x = 0;
    std::cout << "Default constructor called!" << std::endl;
  }
  ~MyClass() {
    std::cout << "Destructor called!" << std::endl;
  }
};

int main() {
  MyClass obj;
  obj.x = 5;
  std::cout << obj.x << std::endl;
  return 0;
}
#include <iostream>
#include <string>

class MyString {
public:
  std::string str;

  MyString(const std::string& s) : str(s) {}

  MyString(const MyString& other) : str(other.str) {}
};

int main() {
  MyString str1("Hello");
  MyString str2 = str1;

  std::cout << str1.str << std::endl;
  std::cout << str2.str << std::endl;


  return 0;
}
#include <iostream>

class MyClass {
public:
  int x;
  MyClass(int value) : x(value) {
    std::cout << "Parameterized constructor called!" << std::endl;
  }
  ~MyClass() {
    std::cout << "Destructor called!" << std::endl;
  }
};

int main() {
  MyClass obj(10);
  std::cout << "Hello, World!" << std::endl;

  return 0;
}

#include <iostream>

class MyClass {
public:
  int x;
  MyClass(int value = 0) : x(value) {
    std::cout << "Parameterized constructor called!" << std::endl;
  }
  MyClass(const MyClass& other) : x(other.x) {
    std::cout << "Copy constructor called!" << std::endl;
  }
  ~MyClass() {
    std::cout << "Destructor called!" << std::endl;
  }
};

int main() {
  MyClass obj1(5);
  std::cout << obj1.x << std::endl;
  
  return 0;
}

#include <iostream> 
using namespace std; 
class Test 
{ 
    private: 
    int x; 
    public: 
    Test(int i) 
    { 
        x = i; 
        cout << "Called" << endl; 
    } 
}; 
int main() 
{ 
    Test t(20); 
    t = 30;  
    return 0; 
} #include <iostream>
#include <cstring>

class MyString {
public:
  char* str;

  MyString(const char* s) {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
  }

  MyString(const MyString& other) {
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
  }

  ~MyString() {
    delete[] str;
  }
};


int main() {
  MyString str1("Hello");
  MyString str2 = str1;

  str1.str[0] = 'C';
  std::cout << str2.str << std::endl;

  return 0;
}
#include <iostream>

class MyClass {
public:
  int x;
  MyClass() : x(0) {
  }
  MyClass(const MyClass& other) : x(other.x) {
  }
};

int main() {
  MyClass obj1;
  obj1.x = 5;
  MyClass obj2 = obj1;
  obj2.x = 10;
  std::cout << obj1.x << " " << obj2.x << std::endl;
  return 0;
}
#include <iostream>

class MyClass {
public:
  MyClass() {
    std::cout << "Default constructor called!" << std::endl;
  }
};

int main() {
  MyClass obj;
  return 0;
}


#include<iostream> 
using namespace std; 
  
class Test 
{ 
public: 
   Test(Test &t) {  } 
   Test()        {  } 
}; 
  
Test fun() 
{ 
    cout << "fun() Called\n"; 
    Test t; 
    return t; 
} 
  
int main() 
{ 
    Test t1; 
    Test t2 = fun(); 
    return 0; 
} 
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream file("filename.txt"); 

    if (file.is_open) {
        cout << "File opened successfully!";
        file.close(); 
    } else {
        cout << "Failed to open the file.";
    }

    return 0;
}
#include <iostream>
#include <fstream>

int main(){
    std::ifstream file("myfile.txt");
    if (!file){
        std::cerr << "Error opening file" << std::endl;
    }
    else{
        char c;
        int n = 0;
        while (file.get(c)){
            if (c == '$'){
                n++;
            }
        }
        file.close();
        std::cout << n << std::endl;
    }
    return 0;
}
#include <iostream>
#include <fstream>

int main() {
    ifstream file("filename.txt", ios::app); 
    if (file.is_open()) {
        string content = "This is some new content.";
        file << content 
        file.close(); 
    } else {
        cout << "Failed to open the file." 
    }

    return 0;
}
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("filename.txt");

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl; 
        }
        file.close(); 
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <fstream>

int main(){
    char buffer[] = { 'x', 'y', 'z' };
    std::ofstream file("myfile.txt", std::ios::binary);
    if (!file){
        std::cerr << "Error opening file" << std::endl;
    }
    else{
        file.write(buffer, sizeof(buffer));
        file.close();
    }
    return 0;
}

#include <iostream>
#include <fstream>

int main() {
  std::ifstream file("data.txt");
  // File operations
  file.close();
  return 0;
}
#include<iostream>
#include <fstream>
int main(){
    long pos;
    std::ofstream outfile;
    outfile.open("test.txt");
    outfile.write("This is an apple", 16);
    pos = outfile.tellp();
    outfile.seekp(pos - 7);
    outfile.write(" sam", 4);
    outfile.close();
    return 0;
}
#include <iostream>
#include <fstream>

int main(){
    std::ifstream file("test.txt", std::ios::binary);
    if (!file){
        std::cerr << "Error opening file" << std::endl;
    }
    else{
        file.seekg(0, std::ios::end);
        long size = file.tellg();
        file.close();
        std::cout << size << std::endl;
    }
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("test.txt");
    for (int n = 0; n < 100; n++){
        outfile << n;
        outfile.flush();
    }
    std::cout << "Done";
    outfile.close();
    return 0;
}
#include <iostream>
#include <fstream>

int main() {
    std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::binary);
    int number = 42;
    file.write(reinterpret_cast<char*>(&number), sizeof(number));
    file.seekg(0);
    int readNumber;
    file.read(reinterpret_cast<char*>(&readNumber), sizeof(readNumber));
    file.close();
    std::cout << "The number read from the file is: " << readNumber << std::endl;
    return 0;
}
#include <iostream>
#include <fstream>

class Person {
    std::string name;
    int age;

public:
    void setName(std::string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void saveToFile() {
        std::ofstream outfile("person.txt");
        outfile << name << std::endl;
        outfile << age << std::endl;
        outfile.close();
    }
};

int main() {
    Person person;
    person.setName("John");
    person.setAge(25);
    person.saveToFile();
    return 0;
}

#include <iostream>
#include <fstream>

struct Product {
    std::string name;
    float price;
};

int main() {
    Product product;
    product.name = "Apple";
    product.price = 1.99;
    std::ofstream outfile("product.txt");
    outfile << "Name: " << product.name << std::endl;
    outfile << "Price: " << product.price << std::endl;
    outfile.close();
    return 0;
}
#include <iostream>
#include <fstream>

int main() {
    std::fstream file("data.txt", std::ios::in | std::ios::out | std::ios::binary);
    int num1 = 10;
    int num2;
    file.write(reinterpret_cast<char*>(&num1), sizeof(int));
    file.seekg(0);
    file.read(reinterpret_cast<char*>(&num2), sizeof(int));
    file.close();
    std::cout << "The value read from the file is: " << num2 << std::endl;
    return 0;
}*/
#include <iostream>

class MyClass {
    int value;
public:
    MyClass(int v) : value(v) {}
    MyClass operator++() {
        return MyClass(++value);
    }
    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj(5);
    ++obj;
    std::cout << obj.getValue();
    return 0;
}


// #include <iostream>

// class MyClass {
//     int value;
// public:
//     MyClass(int v) : value(v) {}
//     MyClass operator-() {
//         return MyClass(-value);
//     }
//     int getValue() const {
//         return value;
//     }
// };

// int main() {
//     MyClass obj(8);
//     MyClass result = -obj;
//     std::cout << result.getValue();
//     return 0;
// }