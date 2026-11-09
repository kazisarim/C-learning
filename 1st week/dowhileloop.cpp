  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;
  
    // Do while loops (it does the code/function first then checks the condition and repeat if the condition is true)


    int number;

   do{

        cout << "Enter a positive number: ";
        cin >> number;

    }  while(number < 0);

    cout << "This number is: " << number;


      return 0;
  }

 
