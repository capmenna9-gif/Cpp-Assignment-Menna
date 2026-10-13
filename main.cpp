#include <iostream>
using namespace std;

int main() {
    // --- Part 1: Syntax & Variables Answers ---
    // Q1: cout << "Enter your age: ";
    // Q2: int score = 100;
    // Q3: int age = 20;
    // Q4: int num; cin >> num;
    // Q5: int firstNumber = 10;

    // --- Part 2: Calculator Program ---
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "----------------------------------------\n";
    cout << "Plus (+): " << num1 + num2 << endl;
    cout << "Minus (-): " << num1 - num2 << endl;
    cout << "Multiply (*): " << num1 * num2 << endl;
    if (num2 != 0)
        cout << "Divide (/): " << num1 / num2 << endl;
    else
        cout << "Divide (/): Cannot divide by zero" << endl;

    return 0;
}
