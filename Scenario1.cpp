#include <iostream>
using namespace std;

// Scenario 1: Simple Math Calculator
int main() {
    double num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "--------------------------------" << endl;
    cout << "Plus (+): " << num1 + num2 << endl;
    cout << "Minus (-): " << num1 - num2 << endl;
    cout << "Multiply (*): " << num1 * num2 << endl;
    cout << "Divide (/): " << num1 / num2 << endl;
    
    return 0;
}
