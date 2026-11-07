#include <iostream>
#include <cmath>

int main(){
    // hypotenuse calculator in c++

   double a; // var a
   double b; // var b
   double c; // var c

   std::cout << "Enter Side A: "; // prompt for side a 
    std::cin >> a; // inputing the user value in var a

    std::cout << "Enter Side B: "; // prompt for side b
    std::cin >> b; // inputing the user value in var b

   /* a = pow(a, 2); // a^2 because of the formula c = root over a^2 + b^2
    b = pow(b,2); // b^2 because of the formula c = root over a^2 + b^2
    c = sqrt(a + b); // square rooting a^2 + b^2 because of the formula c = root over a^2 + b^2
   */

    // to shorten it 
     c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C is: " << c;

    return 0;
}
