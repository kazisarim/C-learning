#include <iostream>
// name spaces are used to store values in the same variable (mainly used for large projects)
namespace first{
    int x = 1; // name space first value of x
}
namespace second{
    int x = 2; // name space second value of x
}
int main(){
    int x = 0; // local value of x
  
    std::cout << "Local x: " << x << std::endl; // prints local value of x
    std::cout << "First namespace value of  x: " << first::x << std::endl; // prints first namespace value of x
    std::cout << "Second namespace value of x: " << second::x << std::endl; // prints second namespace value of x
    return 0;
}
