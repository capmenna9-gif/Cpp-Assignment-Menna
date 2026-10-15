#include <iostream>
#include <string>
using namespace std;

// Scenario 2: Customer Greetings & Info Registration
int main() {
    string fullName;
    string phoneNumber;
    
    cout << "Enter your full name: ";
    getline(cin, fullName);
    
    cout << "Enter your phone number: ";
    cin >> phoneNumber;
    
    cout << "--------------------------------" << endl;
    cout << "Hello " << fullName << "!" << endl;
    cout << "Your registered phone number is: " << phoneNumber << endl;
    cout << "Welcome to our store!" << endl;
    
    return 0;
}
