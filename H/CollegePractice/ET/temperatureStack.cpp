//Q1 Write a code to store the different temperature reading in terms of degree using the concept of stack. 

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<double> temperatureStack;
    
    // Pushing temperature readings onto the stack
    temperatureStack.push(25.5); // 1
    temperatureStack.push(26.0); // 2
    temperatureStack.push(24.8); // 3
    temperatureStack.push(27.2); // 4
    
    // Displaying temperature readings from the stack
    cout << "Temperature Readings:" << endl;
    while (!temperatureStack.empty()) {
        cout << temperatureStack.top() << " degrees" << endl;
        temperatureStack.pop();
    }
    
    return 0;
}