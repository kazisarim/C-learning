  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;
  
    // While loops


    std::string name;



    while(name.empty()) // if the condition in the while loop remains true it will execute the code infinite amounts of time and when its false it will just move over the loop
    {

        cout << "Enter your name: ";
        std::getline(cin, name);

    }

    cout << "Hello " << name;

    // infinite while loop

    /*
    
    while(1 == 1){
    
        cout << "This is an infinite loop!";
    
    }
    
    
    
    
    */

      return 0;
  }

 
