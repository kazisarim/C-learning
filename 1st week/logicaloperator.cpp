  #include <iostream>


  int main() {
    
    using std::cout;
    using std::cin;

    int temp;

    bool sunny = true;

    cout << "Enter the tempreture: ";
    cin >> temp;

    // && logical operator (checks if two conditon are true)

    /* if(temp >= 0 && temp <= 30){

      cout << "\nThe tempreture is good!";

    }
    else{

      cout << "\nThe tempreture is bad!";

    }
*/

// || logical operator (checks if atleast one of two conditon is true)

  if(temp <= 0 || temp >= 30){

      cout << "\nThe tempreture is bad!";
    }
    else{

      cout << "\nThe tempreture is good!";  

    }


// ! logical operator  (mainly checks if  it is not in this case it checks if it is not sunny)

    if(!sunny){

      cout << "\nIt is cloudy outside";

    }
    else{

      cout << "\nIt is sunny outside";

    }

      return 0;
  }
