#include <iostream>

int main() {
  // using namespace std; //would not recommend using this because std has hundreds of entites so there is a high chance of name confilict
  // safer alternative
  using  std::cout; // to cut out the standard character out
  using  std::string; // to cut out standard string 

string name = "John Doe";
   cout << name << std::endl;
}
