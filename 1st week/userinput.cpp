#include <iostream>

int main(){
// cout (insertion operator <<) is used to print the output to the console
// cin (extraction operator >>) is used to take input from the console
// getline is used to take the value even after the first space in the input

std::string name; // the variable name
std::string age; 
std::cout << "Enter your full name: "; // prompt the user to enter their name
std::getline(std::cin , name); // take the value given by the user and store it in the variable name the std getline function is used to take the full name as input from the user cuz without it, it wont read anything after the first space
std::cout << "Enter your age: "; // prompt the user to enter their age
std::cin >> age; // take the value given by the user and store it in the variable age

std::cout << "Hello, " << name << "!" << std::endl; // print the result by taking the value from the variable name
std::cout << "You are " << age << " years old." << std::endl; // print the result by taking the value from the variable age
return 0;
}
