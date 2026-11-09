    #include <iostream>

    int main() {
    using std::cout;
    using std::cin;
    char playAgain;
    
do{
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


        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n";

    }while(playAgain == 'y' || playAgain == 'Y'); // the whole thing is a in a loop if playAgain variable is Y it makes this statement true so it does the whole process all over again

    cout << "Thanks for playing!\n";

     cout << "\n******************************************************";

     while(1 == 1){} // so it doesnt auto close the windows

 return 0;
}
