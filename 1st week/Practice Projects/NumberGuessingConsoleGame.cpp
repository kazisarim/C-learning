    #include <iostream>

    int main() {
    using std::cout;
    using std::cin;

    int num;
    int guess; 
    int tries = 0;
    
    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "***************  NUMBER GUESSING GAME  ***************\n";


        do{
            cout << "Enter a guess between 1-100: ";
            cin >> guess;
            tries++;
            
            if(guess > num){

                cout << "Too high!\n";
            }
            else if (guess < num){

                cout << "Too low!\n";

            }
            else{

                cout << "YOU GOT IT RIGHT!!!!\n " << "It took you " << tries << " tries" << " and the number was #" << num; 

            }

        }while(guess != num);


    cout << "\n******************************************************";

        return 0;
    }

    
