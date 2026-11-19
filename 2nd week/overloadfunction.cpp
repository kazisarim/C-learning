#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

// Function declarations 
void bakePizza();
void bakePizza(string tops);
void bakePizza(string tops, string cheese);

int main() {
    string topping1;
    cout << "What topping do you want your pizza to have (e.g., pepperoni, mushroom, or none): ";
    cin >> topping1;

    string extracheese;
    cout << "How much cheese do you want (e.g., No, Medium, Extra): ";
    cin >> extracheese;

    // Calls the two argument overload
    bakePizza(topping1, extracheese);

    return 0;
}

// Function defining
void bakePizza() {
    cout << "Here is your regular plain pizza.\n";
}

void bakePizza(string tops) {
    cout << "Here is your pizza with " << tops << ".\n";
}

void bakePizza(string tops, string cheese) {
    cout << "Here is your pizza with " << tops << " and " << cheese << " cheese.\n";
}
