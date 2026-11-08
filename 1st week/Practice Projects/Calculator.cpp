#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;
    
    char op;
    double num1; 
    double num2;
    double result;
    
    cout << "***************  CALCULATOR  ***************\n";

    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
            
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;

        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;

        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
            } else {
                result = num1 / num2;
                cout << "result: " << result << '\n';
            }
            break;

        case '^':
            result = pow(num1, num2);
            cout << "result: " << result << '\n';
            break;

        default:
            cout << "The operator is not valid, try again!\n";
            break;
    }
    
    
    cout << "********************************************\n";
    return 0;
}
