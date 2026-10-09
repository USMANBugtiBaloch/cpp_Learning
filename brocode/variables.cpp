#include <iostream>

  


 int main(){
    //varibles
    /*
    int x = 5;
    int y = 10;
    int sum = x+y;

    std::cout << x <<'\n';
    std::cout << y <<'\n';
    std::cout << sum <<'\n';
    */
 //integer (whole number)
    int days = 7;
    int year = 2025;
    int age = 21;

    //std::cout << days;

 // double(number including decimal)
   double price = 9.99;
   double gpa = 7.5;
   double temperature = 25.1;

   // std::cout << price;

 //single character 
   char grade = 'A';
   char initial = 'C';
   char dollarSign = '$'; 

  // std::cout << initial;

// boolean (true or false)
  bool student = false; //is a studnet or not a studnet
  bool power = true; //power is on ,if false mean power is off
  bool ForSale = true; //if its avabile or not

    //std::cout << power;


//string (object that represent a sequence of text)
  std:: string name = "Usman";
  std:: string day ="Friday";
  std:: string food = "gosht";
  std:: string address = "sariab mill quetta";

    // std:: cout << "Hello " << name << '\n';
    // std:: cout << "Your are " << age <<" year old";
    //std::cout << '\n';


// Constant value 
// The const keyword specifies that a variable's value is constant 
// tell the compiler to prevent anything from modifying it 
// (read-only)

    //For example 
    // double pi = 3.14;
    // double radius = 10;
    // double circumference = 2 * pi * radius;

    //     std:: cout << circumference << "cm";

    // output will be 62.8


    //For example (here we can change the value of pi like)
    // double pi = 3.14;
    // pi = 20.20323;
    // double radius = 10;
    // double circumference = 2 * pi * radius;

    //     std:: cout << circumference << "cm";

        //output will be 404.065 because here pi have a new value but
        //we dont want to change the value of pi 
        //so what we do is we us (*const*) here

    
    //For example 
//     const double pi = 3.14;
//    // pi = 2.22;
//     double radius = 10;
//     double circumference = 2 * pi * radius;

//         std:: cout << circumference << "cm";

    //const example are like where value are constant 

        // const double PI = 3.14157;
        // const int SPEED_LIGHT = 10*9;
        // const int WEIGHT = 3090;
        // const int HEIGHT = 1020;
        // const int student = 30;




    return 0;
}