// function isValidParentheses(str) {
//     const stack = [];
//     const pairs = {
//         "(": ")",
//         "[": "]",
//         "{": "}",
//     };

//     for (let char of str) {
//         if (pairs[char]) {
//             stack.push(char);
//         } else if (
//             char === ")" ||
//             char === "]" ||
//             char === "}"
//         ) {
//             if (
//                 pairs[stack.pop()] !==
//                 char
//             ) {
//                 return false;
//             }
//         }
//     }

//     return stack.length === 0;
// }

// const inputString = "({()})";
// console.log(
//     `Is it a valid Paranthesis ? :
// ${isValidParentheses(inputString)}`
// );



// #include <iostream>
// using namespace std;

// #define MAX 5  // Maximum size of the stack

// class Stack {
//     int topIndex;  // Variable to track the top element in the stack
//     int arr[MAX];  // Array to hold stack elements

// public:
//     Stack() {
//         topIndex = -1;  // Initializing the stack as empty
//     }

//     // Function to push an element onto the stack
//     void push(int x) {
//         if (isFull()) {
//             cout << "Stack Overflow. Cannot push " << x << "." << endl;
//         } else {
//             arr[++topIndex] = x;
//             cout << x << " pushed onto the stack." << endl;
//         }
//     }

//     // Function to pop an element from the stack
//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow. Cannot pop." << endl;
//         } else {
//             cout << arr[topIndex--] << " popped from the stack." << endl;
//         }
//     }

//     // Function to return the top element of the stack
//     int top() {
//         if (isEmpty()) {
//             cout << "Stack is empty." << endl;
//             return -1;
//         } else {
//             return arr[topIndex];
//         }
//     }

//     // Function to check if the stack is empty
//     bool isEmpty() {
//         return topIndex == -1;
//     }

//     // Function to check if the stack is full
//     bool isFull() {
//         return topIndex == MAX - 1;
//     }
// };

// int main() {
//     Stack stack;

//     stack.push(10);  // Push elements onto the stack
//     stack.push(20);
//     stack.push(30);

//     cout << "Top element is: " << stack.top() << endl;  // View the top element

//     stack.pop();  // Pop the top element

//     cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;  // Check if stack is empty

//     stack.push(40);  // Push more elements onto the stack
//     stack.push(50);
//     stack.push(60);

//     cout << "Is stack full? " << (stack.isFull() ? "Yes" : "No") << endl;  // Check if stack is full

//     return 0;
// }
