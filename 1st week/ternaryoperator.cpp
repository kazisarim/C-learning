  #include <iostream>


  int main() {
    
    // ternary operator
  using std::cout;
  using std::cin;

    int grade;

    bool parentsproud;

    
      cout << "Enter Your Grade: ";
      cin >> grade;

      cout << "Are Your Parents Proud? (1 for Yes/ 0 for No): \n";
      cin >> parentsproud;

    grade >= 60 ? cout << "You Passed!" : cout << "You Failed!";

  // parentsproud == 1 ? cout << "\nYour parents are proud!": cout << "\nYour parents are dissapointed at you!"; // You can either use this 
    
    cout << (parentsproud == 1 ? "\nYour Parents are proud!" : "\n Your parents are dissapointed at you!"); //  or this

    grade % 2 == 1 ? cout << "\nODD NUMBER" : cout << "\nEVEN NUMBER";

      return 0;
  }
