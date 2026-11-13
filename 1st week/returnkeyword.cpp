/* #include <iostream>

using std::cout;
using std::cin;

double square (double length);
double cube (double length);

int main(){

    double length;

    cout << "Enter length of the square: ";

    cin >> length;

    double area = square(length);

    double volume = cube(length);

    cout << "Area: " << area << "cm^2\n";

     cout << "Volume of the cube is: " << volume << "cm^3\n";

    return 0;
}

double square (double length){

  return length * length;

}

double cube (double length){

    return length * length * length;

}
    */


    #include <iostream>

    using std::cout;
    using std::cin;
    using std::string;

    string concatString(string string1, string string2);

    int main(){

        string firstname;
        cout << "Enter Your First Name: ";
        cin >> firstname;

        string lastname;

        cout << "Enter Your Last Name: ";
        cin >> lastname;

        string fullname = concatString(firstname, lastname);

        cout << "Your Full Name is " << fullname;

    }

string concatString(string string1, string string2){

        return string1 + " " + string2;

    }
