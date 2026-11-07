#include <iostream>

int main(){

 const double PI = 3.14159265358979;
  double earthradius = 6371; 
  double circumference = 2 * PI * earthradius;
  std::cout << "The Circumference of the earth is: " << circumference << std::endl;
  return 0; 
}
