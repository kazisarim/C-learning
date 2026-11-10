    #include <iostream>

    void helloWorld(); // define the function before int main since compiler reads it up to down

    int main() {
    using std::cout;
    using std::cin;
  
    // function

    std::string wrd = "World";

        helloWorld(wrd);  // to call the function
        

 return 0;
}


//function void = a reusable block of code
 void helloWorld(std::string wrd){

     using std::cout;
    using std::cin;

        while(1 == 1){

            cout << "Hello " << wrd;

        }

        // not done with this one yet will do it tomorrow (tired asf)
