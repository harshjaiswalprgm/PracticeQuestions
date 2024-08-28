// Q8 Write a code to evaluate postfix expression by giving an infix expression at run time.


#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Function to perform arithmetic operation based on operator
int performOperation(char op, int operand1, int operand2) {
    switch(op) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
    }
    return -1; // Invalid operator
}

// Function to evaluate postfix expression
int evaluatePostfix(string expression) {
    stack<int> operands;
    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0'); // Convert char to integer
        } else if (isOperator(c)) {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(c, operand1, operand2);
            operands.push(result);
        }
    }
    return operands.top();
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string expression) {
    stack<char> operators;
    string postfix = "";
    for (char c : expression) {
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove '('
        } else if (isOperator(c)) {
            while (!operators.empty() && operators.top() != '(' && (c == '+' || c == '-') && (operators.top() == '*' || operators.top() == '/')) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result of evaluation: " << result << endl;

    return 0;
}