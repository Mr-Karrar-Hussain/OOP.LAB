#include <iostream>
#include "Calculator.h"
using namespace std;

int main(){
    Calculator calculator;
    double first, second;
    char operation;

    cout << "Enter a calculation (example: 8 + 2): ";
    if (!(cin >> first >> operation >> second)) {
        cout << "Invalid input." << endl;
        return 1;
    }

    switch (operation) {
        case '+':
            cout << calculator.add(first, second) << endl;
            break;
        case '-':
            cout << calculator.subtract(first, second) << endl;
            break;
        case '*':
            cout << calculator.multiply(first, second) << endl;
            break;
        case '/':
            if (second == 0) {
                cout << "Cannot divide by zero." << endl;
                return 1;
            }
            cout << calculator.divide(first, second) << endl;
            break;
        default:
            cout << "Unknown operation." << endl;
            return 1;
    }

    return 0;
}