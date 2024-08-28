#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin >> num1;                          /* '>>' is called Extraction operator */

    cout << "Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin >> num2;                          /* '>>' is called Extraction operator */

    cout << "The sum is " << num1 + num2;

    return 0;
}

/*C++ Basic Input/Output & More | C++ Tutorials for Beginners #5
In this tutorial, we will visualize basic input and output in the C++ language. In our last lesson, we discussed the variable's scope and data types. In this C++ tutorial, we are going to cover basic input and output:

Basic Input and Output in C++
C++ language comes with different libraries, which helps us in performing input/output operations. In C++ sequence of bytes corresponding to input and output are commonly known as streams. There are two types of streams:

Input stream
In the input stream, the direction of the flow of bytes occurs from the input device (for ex keyboard) to the main memory.

Output stream
In output stream, the direction of flow of bytes occurs from main memory to the output device (for ex-display)

Practical Explanation of Input/Output
We will see the actual code for input/output, and it's working. Consider the code below:



Figure 1: Basic input/output program

In this piece of code, we have declared two integer variables "num1" and "num2". Firstly we used "cout" to print "Enter the value of num1:" as it is on the screen, and then we used "cin" to take the input in "num1" at run time from the user.

Secondly, we used "cout" to print "Enter the value of num2:" as it is on the screen, and then we used "cin" to take the input in "num2" at run time from the user.

In the end, we used "cout" to print "The sum is" as it is on the screen and also gave the literal "num1+num2" which will add the values of both variables and print it on the screen.

The output of the following program is shown in figure 2.



Figure 2: Output of the Program

 We have executed our program two times, which can be seen in figure 2. In our 1st execution, we had input the value "54" for the variable "num1" and value "4" for the variable "num2". This gives us the sum of both numbers as "58".

In our 2nd execution, we had input the value "5" for the variable "num1" and value "8" for the variable "num2". This gives us the sum of both numbers as "13".

Important Points
The sign "<<" is called insertion operator
The sign ">>" is called extraction operator
"cout" keyword is used to print
"cin" keyword is used to take input at run time.
Reserved keywords in C++
Reserved keywords are those keywords that are used by the language itself, which is why these keywords are not available for re-definition or overloading. In short, you cannot create variables with these names. A list of reserved keywords is shown in figure 3.



Figure 3: Reserved keywords in C++*/