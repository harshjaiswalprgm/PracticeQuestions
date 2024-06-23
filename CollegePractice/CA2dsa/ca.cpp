#include <iostream>
using namespace std;
const int MAX_SIZE = 5; 
// Maximum size of the stack fixing the size of my array.
class Stack
{
private:
    int top;
    int items[MAX_SIZE];

public:
    Stack()
    {
        top = -1; // stack is empty in start
    }
    bool isEmpty()
    {
        return top == -1; // returning -1 mean no element
    }
    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }
    void push(int value)
    { // inserting the values--
        if (!isFull())
        {
            top++;              // top to aage badhaa do....
            items[top] = value; // dala element
        }
        else
        {
            cout << "Stack Overflow\n"; // when stack is empty
        }
    }
    int pop()   //entering my dataaaa and checking ...
    {
        if (!isEmpty())
        {
            int temp = items[top];
            top--;
            return temp;
        }
        else
        {
            cout << "Stack Underflow\n";  //when my stack is empty
            return -1;
        }
    }
    int peek()
    {
        if (!isEmpty())  //checking if it is empty or not
        {
            return items[top];
        }
        else
        {
            cout << "Stack is empty\n";
            return -1;
        }
    }
};

int main()
{
    Stack scores;
    int cricketers[5];  //defineng array mean enter the score os pllayers

    // Input test scores
    cout << "Enter test scores of 5 cricketers:\n";
    for (int i = 0; i < 5; i++)  //for printing the scores of each person
    {
        cin >> cricketers[i];
        scores.push(cricketers[i]);
    }

    // Finding the highest score
    int highestScore = scores.pop(); // Pop the topmost score
    while (!scores.isEmpty())
    {
        int temp = scores.pop();
        if (temp > highestScore)   //here i ma checking which person score maximu score in match
        {
            highestScore = temp;
        }
    }
    //printing the score's
    cout << "The highest score among the cricketers is: " << highestScore << endl;

    return 0;
}
