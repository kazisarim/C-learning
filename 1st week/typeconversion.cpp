#include <iostream>

int main(){
    
// type conversion 

// double x  = (int) 3.14; // explicit type conversion from double to int
 // char x = 100; // implicit type conversion from int to char
// std::cout <<x << std::endl;

//int correct = 8;
//int questions = 10;
//int score = correct/questions * 100; // implicit type conversion from int to double
//std::cout << score << std::endl; // output will be 0 because of integer data type

 int correct = 8;
 int questions = 10;
 int score = correct/(double)questions * 100; // explicit type conversion from int to double
 char per = '%';
std::cout << score << per << std::endl;
return 0;
}
