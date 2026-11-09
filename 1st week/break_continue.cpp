  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;
  

  // break = break out a loop <=============================================================================================================================================|    
  // continue = skip current iteration <=========================================================|                                                                          |
                                 //                                                              |                                                                          |
  for(int i = 1; i <=20; i++){   //                                                              |                                                                          |
                                   //                                                            |                                                                          |
    if(i == 13){                    //                                                           |                                                                          |
       // continue;  // if continue is used here it mainly counts till 20 but skips 13 ----------|                                                                          |
       //                                                                                                                                                                   |            
       //                                                                                                                                                                   |
       //                                                                                                                                                                   |
       // break; // if break is used it breaks the loop when 13 is about to reach ex. in this code if break is used it will only count till 12 and stop the code-------------
    } 

        cout << i << "\n";


  }

      return 0;
  }

 // tried to do this arrow pointing things :]
