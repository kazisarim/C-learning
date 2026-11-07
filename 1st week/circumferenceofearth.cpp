#include <iostream>

int main(){

  double pi = 3.14159265358979;
  double earthradius = 6371; 
  double circumference = 2 * pi * earthradius;
  std::cout << "The Circumference of the earth is: " << circumference << std::endl;
  return 0; 
}
