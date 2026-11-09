  #include <iostream>


  int main() {
  using std::cout;
  using std::cin;
  
// print rectangle made with symbol

    int rows;
    int colums;
    char symobol;

    cout << "How many rows: ";
    cin  >> rows;

     cout << "How many colums: ";
    cin  >> colums;
 
     cout << "Enter a symbol to use: ";
    cin  >> symobol;

        for(int i = 1; i <= rows; i++){

             for(int j = 1; j <= colums; j++){

                cout << symobol;
            }

            cout << '\n';
    }

    

      return 0;
  }

 
