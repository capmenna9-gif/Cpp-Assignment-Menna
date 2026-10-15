#include <iostream>
#include <string>
using namespace std;

// Scenario 3: Special Offer Store Invoice
int main() {
    string customerName;
    string phoneNumber;
    int quantity;
    const double unitPrice = 100.0;
    
    cout << "=== SUPERMARKET SPECIAL OFFER ===" << endl;
    cout << "Item: Basmati Rice (Unit Price: 100 EGP)" << endl;
    cout << "* SPECIAL DEAL: GET 20% DISCOUNT ON YOUR TOTAL ORDER! *" << endl;
    cout << "--------------------------------------------------" << endl;
    
    cout << "Enter your name: ";
    getline(cin, customerName);
    
    cout << "Enter your phone number: ";
    cin >> phoneNumber;
    
    cout << "Enter quantity (bags): ";
    cin >> quantity;
    
    double totalPriceBefore = quantity * unitPrice;
    double discount = totalPriceBefore * 0.20;
    double totalPriceAfter = totalPriceBefore - discount;
    
    cout << "--------------------------------------------------" << endl;
    cout << "=== OFFICIAL INVOICE ===" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Quantity Purchased: " << quantity << " bags" << endl;
    cout << "Total Price Before Discount: " << totalPriceBefore << " EGP" << endl;
    cout << "Total Price After 20% Discount: " << totalPriceAfter << " EGP" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Thank you for shopping with us. Goodbye!" << endl;
    
    return 0;
}
