#include <iostream>

int main(){

 const double PI = 3.14159265358979; // value of pi (const is used so the value is fixed)
  double earthradius = 6371; 
  double circumference = 2 * PI * earthradius;
  std::cout << "The Circumference of the earth is: " << circumference << "km" << std::endl;
  return 0; 
}
