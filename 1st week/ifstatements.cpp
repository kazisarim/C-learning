#include <iostream>


int main(){
    int age; // age variable

    std::cout << "Enter Your Age: "; // user prompt
    std::cin >> age; // user input to the age variable
    
    if (age <= 0){ 
        std::cout << "You are not even born how the hell are you using a computer";  // if age is less than or equal to zero message
    }
    else if (age < 18){
        std::cout << "You are under 18 years old";  // if age is less than 18 message
    }
    else if (age >= 18){
        std::cout << "You are 18 years old"; // if age is greater than or equal to 18 message
    }
    else if (age >= 100){
        std::cout << "How the hell are you even alive"; // if age is greater than or equal to 100 message
    }
    else{
        std::cout << "You are over 18 and up to 100 years old"; // if the if statement faces error
    }
    
    return 0;
}
