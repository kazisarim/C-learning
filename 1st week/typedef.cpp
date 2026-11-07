#include <iostream>

typedef std::string text_t; // defining a data type with alias to reduce typos and increase readability

int main(){
    text_t name = "John Doe";
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}
