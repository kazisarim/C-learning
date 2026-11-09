  #include <iostream>
  #include <ctime>

  int main() {
  using std::cout;
  using std::cin;

  // random event generator
  
    srand(time(0));

    int randNum = rand() % 5 + 1;


    switch(randNum){

         case 1:

         cout << "You won a sticker!";

         break;

         case 2:

          cout << "You won a juice!";


         break;

         case 3:

          cout << "You won a chips packet!";


         break;

         case 4:

          cout << "You won a headphone!";


        break;

         case 5:

          cout << "You won a cat!";

          break;
    }


      return 0;
  }

 
