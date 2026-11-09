  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;

    //pseudo-random  not truly random but very close to truly random

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    cout << num;


      return 0;
  }

 
