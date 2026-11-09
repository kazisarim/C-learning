  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;
  
    // some useful string methods

  std::string name;

  cout << "Enter your name: ";
  std::getline(cin, name);

 /* cout << name.at(0); */ // at (displays a character at a index number (starts from zero))

       /* name.insert(0, "@");  */ // will insert this at sign at the index number

  /* if (name.length() > 12) // checks if the input in the variable is more than 12 letters {  

    cout << "Your name cannot be more than 12 letters!";

  } 
  else if(name.empty()) // checks if name is empty {

      cout << "You did not enter your name!"; .

  }
  else{

        // name.append("@gmail.com"); // append inserts a specific string to the last of the string

        // name.clear; // clears the name at the last

        // name.erase(0, 3); // erases from the index 0 to the index 3

        //  name.find(' '); // finds the index of the letter in the argument example right now i have set it to find the letter space

    
      cout << "Welcome " << name;

  } */

  cout << name;
  
      return 0;
  }

  // more string features at https://cplusplus.com/reference/string/string/
