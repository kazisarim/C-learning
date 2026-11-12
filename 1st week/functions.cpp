    #include <iostream>

    void hello(std::string name, int age); // define the function before int main since compiler reads it up to down btw if you declare the function at first and code it later make sure to add the parameter in the brackets (i did that mistake and the code didnt run xd)

    int main() {
    using std::cout;
    using std::cin;
  
    // function

    std::string name;
    int age;

    cout << "What's Your name?:";

    std::getline(cin, name);

         cout << "What's age?:";
         cin >> age;

        hello(name, age);  // to call the function // in the bracket its making the recieving function aware of this string and it is called an argument
        

 return 0;
}


//function void = a reusable block of code
 void hello(std::string name, int age) // in the bracket its recieving the argument from the main function which is known as a parameter (don't forget to write the data type btw) also parameter can have different name than the actual variable name defined in the main function
 
 {

     using std::cout;
    using std::cin;

        while(true){
            
            
            cout << " Hello " << name << " You are " << age << " years old ";

        }

    }
