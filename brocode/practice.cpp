/*
//                                             Q1. Student Information
// Program banao jo ye information variables mein store kare:

// Name
// Age
// University
// Semester
// CGPA

// Phir sab ko proper format mein print karo.

#include <iostream>

int main (){
    std::string Name = "MUHAMMAD USMAN";
    int age = 21;
    std::string University = "University of balochistan";
    int  semester = 6;
    double CGPA = 3.6;

    std::cout << "Name: " << Name << std::endl;
    std::cout << "Age: " << age<< std::endl;
    std:: cout << "University Name: " <<University << std::endl;
    std:: cout << "Semester: " << semester << std::endl ;
    std::cout  << "CGPA: " << CGPA << std::endl ;
}

*/
/*
//                                           2. Simple Calculator
// Do numbers lo:

// num1 = 25
// num2 = 10

// Aur print karo:

// Addition
// Subtraction
// Multiplication
// Division

// #include <iostream>

int main(){
    int num1 = 25;
    int num2 = 10;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division = num1 / 10.0;

//    // double result = int / double; // decimal division
//       int / int       → integer division
//       int / double    → decimal division
//       double / int    → decimal division

//       Example:

//       10 / 25     → 0
//       10.0 / 25   → 0.4
//       10 / 25.0   → 0.4

    std::cout << "addition = " << addition << std::endl;
    std::cout << "subtraction = " << subtraction << std::endl;
    std::cout << "multiplication = "<< multiplication << std::endl;
    std::cout << "division = " << division << std::endl;

}

    */

/*

//                                                      Q3. Product Price
// Ek product ki:

// Name
// Price
// Quantity

// store karo aur total price calculate karke print karo.

// Example:

// Product: Laptop
// Price: 150000
// Quantity: 2
// Total: 300000

// #include <iostream>

int main (){
    std::string name = "Mobile";
    double price = 9.99;
    int quantity = 15;
    double total_price = price * quantity;

    std::cout << "Product name: "<< name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Total Price: " <<total_price << std::endl;

    return 0;
}
    */

 /*

//                                                 University Information program banao:

// University Name → const
// Department → const
// Total Semesters = 8 → const
// Current Semester → normal variable

// Output bhi proper format mein karo.

// Is baar const khud apply karo. 💪

#include <iostream>

int main(){
    const std::string University_name = "Unviersity of  Balochistan";
    const std::string Dept = "Computer Science";
    const int Total_semester = 8;
    int Current_semester = 6;

    std::cout << "University Name: " << University_name << std::endl;
    std::cout << "Department: " << Dept << std::endl;
    std::cout << "Total Semester: " << Total_semester << std::endl;
    std::cout << "Current Semester: "<< Current_semester << std::endl;

    return 0;
}

*/

 /*

//                                                Q5. Circle Calculation

//  const mein:

//  PI = 3.14159

//  rakho.

//  Radius variable mein lo aur calculate karo:

//  Area = PI × radius × radius

#include <iostream>

int main(){
    const double PI = 3.14159;
    int radius = 25;
    double area = PI * radius * radius;

    std::cout << "Your area is "<< area <<". "<<std::endl;

    return 0;
}

*/

/*

//                                           Q6 — Student Expense Tracker 💰

// Imagine tum ek student ho.   


// Daily expenses:

// Food = 500
// Transport = 300
// Internet = 200
// Other = 150
// Aur:

// Days = 30
// Program ko calculate karna hai:

// Daily Expense: ?
// Monthly Expense: ?
// Rules:
// Food, Transport, Internet, Other → variables
// Days → variable
// Daily expense calculate karo
// Monthly expense calculate karo
// Proper formatted output do
// No if, no loops, no functions, no arrays

// 💡 Bonus: Socho kaunsa data type use karna best hoga.

#include <iostream>

int main(){

    int food = 500;
    int transport = 300;
    int internet = 200;
    int other = 150;
    int days = 30;

    int daily_expense = food + transport + internet + other;
    int monthly_expense = daily_expense * days;

    std::cout << "Daily Food Expense: "<<food << std::endl;
    std::cout << "Daily Transport: " <<transport << std::endl;
    std::cout << "Daiy internet: "<<internet << std::endl;
    std::cout << "Other Expense: "<< other << std::endl;
    std::cout << "Days in month: "<<days << std::endl;
    std::cout << "Total Daily Expense: "<< daily_expense << std::endl;
    std::cout <<"Total Monthly Expense: "<< monthly_expense << std::endl;

    return 0;
}
*/

/*

//                                                                 🚀 Q7 — Shopping Bill

// Ab thoda interesting karte hain.

// Tum ek shop billing system bana rahe ho.

// Customer ne kharida:

// Burger = 350
// Pizza = 800
// Drink = 150

// Tax rat
// 5%

// Program ko calculate karna hai:

// Burger: 350
// Pizza: 800
// Drink: 150
// ----------------
// Subtotal: ?
// Tax: ?
// Final Bill: ?
// Rules

// Use:

// Variables
// const
// int / double
// Arithmetic operators
// std::cout

#include <iostream>

int main (){
    int burger = 351;
    int pizza = 800;
    int drink = 150;
    const double tax = 5;
    double subtotal = burger + pizza + drink;
    double total_tax = subtotal / 100 * tax;
  //  double total_tax = subtotal / 100.0 * tax; // ye be correct hai iss main decimal value aye ga
    double final_bill = subtotal + total_tax;

    std::cout << "Price of Burger: "<< burger << std::endl;
    std::cout << "Price of Pizza: "<< pizza << std::endl;
    std::cout << "Price of Drink: "<< drink << std::endl;
    std::cout << "Tax "<< tax <<"%" << std::endl;
    std::cout << "Subtotal: "<< subtotal << std::endl;
    std::cout << "Total Tax is: "<< total_tax << std::endl;
    std::cout << "Final Bill: "<< final_bill << std::endl;

    return 0;
}
*/

/*
//                                                  Q1. Apna Namespace banao
// Ek namespace Student banao jisme:
// name
// age
// semester
// store karo.
// Phir main() mein:
// Student::name
// Student::age
// Student::semester
#include <iostream>

namespace Student {
        std::string name = "MUHAMMAD USMAN";
        int age = 21;
        int semester = 6 ;
}
int main(){
    std::cout << "Student Name: "<< Student::name << std::endl;
    std::cout << "Student age: "<< Student::age << std::endl;
    std::cout << "Student semester: " << Student::semester<<std::endl;


    return 0;
}
    */
   /*
//                                                Q2 namespace variable
#include <iostream>
namespace student {
        std::string name = "Usman";

    }
namespace teacher {
    std::string name = "Sir ali";
}
int main(){
    std::cout<< "Student Name: "<< student::name<< std::endl;
    std::cout << "Teacher's Name: "<< teacher::name<< std::endl;
}
    */
/*
    #include <iostream>
    namespace Balochistan {
        std::string capital = "Quetta";
    }
    namespace india {
        std::string capital = "New Dehli";
    }
    int main (){
        std::cout << "Capital Balochistan: "<<Balochistan::capital<<std::endl;
        std::cout << "Capital India: " << india::capital << std::endl;
        return 0;
    }
        */
       /*
//                                     //Question typedef
//                                     Q1 — Basic typedef
// Ek program banao jisme:
// int ke liye typedef banao: Age
// double ke liye typedef banao: CGPA
// string ke liye typedef banao: Name
// Phir ek student ki information store karke print karo:
#include <iostream>
typedef std::string s;
typedef int i;
typedef double d;
//using std::cout;
//using std::endl;
int main(){
    i age = 21;
    d cgpa = 3.6;
    s Name = "Azad Baloch";

  std:: cout<<"Name: " << Name<<std::endl;
   // std::cout <<"Age: "<< age<<std::endl;
   // std::cout << "CGPA: "<< cgpa<<std::endl;

    return 0;
}
    */
   /*

//                                          Q2.Product system using typedef
#include <iostream>
typedef std::string s;
typedef int i;
typedef double d;

int main(){
    s product_name = "Laptop";
    d price = 150000;
    i quantity = 2;
    d total_price = price *quantity;

    std::cout << "Product: "<< product_name <<std::endl;
    std::cout << "Price: "<<price<<std::endl;
    std::cout << "Quanatity: "<<quantity<< '\n';
    std::cout << "Total Price: "<<total_price<< '\n';

    return 0;
}
    */
   /*
//                                        Q3.Studnet Record
#include <iostream>
typedef int i;
typedef std::string s;
typedef double d;

int main(){
    s name= "usman";
    i age = 21;
    d cgpa = 3.5;
    i semester = 6;

    std::cout << "Name: "<< name << std::endl;
std::cout << "Age: "<< age << std::endl;
std::cout << "Semester: "<< semester << std::endl;
std::cout << "CGPA: "<< cgpa << std::endl;

    return 0;
}
*/
/*
 //                                   Q4. Bank Account using typedef

 #include <iostream>
 
typedef int i;
typedef std::string s;
typedef double d;

int main(){
    const s currency = "PKR";
    s account_holder= "usman";
    i account_number = 12345;
    d balance = 50000.50;
    s account_type = "Savings";

    std::cout << "Account Holder: "<< account_holder << std::endl;
    std::cout << "Account Number: "<< account_number << std::endl;
    std::cout << "Balance: "<< balance << " " << currency <<std::endl;
    std::cout << "Account type: "<< account_type << std::endl;

    return 0;
}
*/


 //                                       Q5.Bank Transaction
 /*
    #include <iostream>

    int main (){
        std::cout << "======= BANK ACCOUNT ======="<<std::endl;
        std::string name = "Muhammad Usman";
        int initial_balance = 50000;
        double deposit = 20000;
        double withdrawal = 10000;
        double final_balance = initial_balance + deposit - withdrawal;
        std::string currency = "PKR";

        std::cout << "Account Holder: " << name << std::endl;
        std::cout << "Initial Balance: " << initial_balance << " " << currency << std::endl;
        std::cout << "Deposit: " << deposit << " " << currency << std::endl;
        std::cout << "Withdrawal: "<< withdrawal << " " <<  currency<< std::endl;
        std::cout << "Final Balance: "<< final_balance << " " << currency << std::endl;  

        return 0;
    }
*/


 //                               Arithmetic practice
//                                             Q1. Calculator 🧮

// Do variables banao:

// int num1 = 25;
// int num2 = 10;

// Calculate karke print karo:

// Addition
// Subtraction
// Multiplication
// Division
// Remainder (%)

/*
#include <iostream>

int main(){

    int num1 = 25;
    int num2 = 10;
    int addition = num1+num2;
    int subtraction = num1-num2;
    int multiplication = num1*num2;
    int division = num1/num2;
    int remainder = num1%num2;

    std::cout << "Addtition: "<< addition << std::endl;
    std::cout << "subtraction: "<< subtraction << std::endl;
    std::cout << "Multiplication: "<< multiplication << std::endl;
    std::cout << "Division: "<< division << std::endl;
    std::cout << "Remainder: "<< remainder << std::endl; 

    return 0;
}
*/

/*
//                                         Question 2 — Celsius to Fahrenheit

// Ab khud ek program banao jo Celsius ko Fahrenheit mein convert kare.

// Requirements:

// double celsius = 37;
// Formula: F = (C × 9 / 5) + 32
// Fahrenheit ka result 98.6 aana chahiye.
// int aur double ka sahi use karna hai.

// Hint: Formula mein 9 / 5 ko dhyan se handle karna—integer division ka issue ho sakta hai.

#include <iostream>

typedef int i;
typedef double d;

int main (){

    d celsius = 37;
    i offset = 32;
    d fahrenheit  = (celsius *9.0 /5 )+ offset;

    std::cout << "Celsius: "<< celsius << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
   
}
    */

/*
       //                                             Q3.  Rectangle Calculator 📐

// Ab ye program khud banao:
// double length = 12.5;
// double width = 4.0;
// Area calculate karo: length * width
// Perimeter calculate karo: 2 * (length + width)
// Dono results print karo.

// Expected output:

// Area: 50
// Perimeter: 33

#include <iostream>

int main (){

double length = 12.5;
double width =4.0;
double area = length * width;
double perimeter = 2 * (length + width);

std::cout << "Area: "<< area << std::endl;
std::cout << "Perimeter: "<< perimeter << std::endl;

        return 0;
}
*/

/*
//                                            Q7. Shopping Bill
// Ek customer ne purchase kiya:

// Item	Price	Quantity
// Keyboard	2500.50	2
// Mouse	1200.75	1
// Headphones	3500.00	1

// Program calculate kare:

// Har item ka total
// Subtotal
// 5% tax
// Final bill

#include <iostream>

int main (){
    std::string item1 = "Keyboard";
    std::string item2 = "Mouse";
    std::string item3 = "Headphones";

    const double tax = 5; 

    double price1 = 2500.50;
    double price2 = 1200.75;
    double price3 = 3500.00;

    int quantity1 = 2;
    int quantity2 = 1;
    int quantity3 = 1;

    double total_item1 = quantity1*price1;
    double total_item2 = quantity2*price2;
    double total_item3 = quantity3*price3;

    double subtotal = total_item1+total_item2+total_item3;
    double total_tax = subtotal*tax/100.00;

    double final_bill = subtotal +total_tax;


    std::cout << "Keyboard Total: "<< total_item1 << " PKR" << std::endl;
    std::cout << "Mouse Total: "<< total_item2 << " PKR" << std::endl;
    std::cout << "Headphones Total: "<< total_item3 << " PKR"<< std::endl;
    std::cout << "Subtotal: "<< subtotal << " PKR"<< std::endl;
    std::cout << "Tax: "<< total_tax<< " PKR" << std::endl;
    std::cout << "Final Bill: "<< final_bill << " PKR"<<std::endl;
    
    return 0;
}
    */

    /*
             //                               Q7.Student Marks Calculator 🎓

// Ek student ke marks:
// int computer = 85;
// int mathematics = 78;
// int physics = 92;
// int english = 75;
// int pakistan_studies = 80;
// Total marks 500 hain.
// Calculate karo:
// Obtained marks
// Total marks
// Percentage
// Formula:
// $$ \text{Percentage} = \frac{\text{Obtained Marks}}{\text{Total Marks}} \times 100 $$

#include <iostream>

int main (){
    int computer = 85;
    int mathematics = 78;
    int physics = 92;
    int english = 75;
    int pakistan_studies = 80;

   const int total_marks = 500;
    double obtain_marks = computer+mathematics+physics+ english +pakistan_studies;
    double percentage = (obtain_marks / total_marks) * 100;

    std::cout << "Obtained Marks: " << obtain_marks << std::endl;
    std::cout << "Total Marks: "<< total_marks << std::endl;
    std::cout << "Percentage: " << percentage << " %" << std::endl;

    return 0;
}
*/
/*
//                                  USER INPUT basics QUESTIon
 //                                                       Question 1 — Personal Information 👨‍💻

// Ek program banao jo user se ye information input le:
// Name
// Age
// University name
// Current semester
#include <iostream>

int main (){

    std::string name;
    int age;
    std::string university_name;
    int current_semester;

    std::cout << "What is you  Name? ";
    std::cin>> name;

    std::cout << "What is your age ? ";
    std::cin>>age;

    std::cout<< "University Name? ";
    std::getline(std::cin>> std::ws , university_name);

    std::cout << "Current semester: ";
    std::cin>>current_semester;

    std::cout << "- - - - - - Studnet information - - - - - - -"<<std::endl;;
    std::cout<< "Your Name is " << name << "." <<std::endl;
    std::cout << "Your are "<< age << " years old. "<<std::endl;
    std::cout << "University: "<< university_name << "." << std::endl;
    std::cout << "Current Semeter: "<< current_semester << std::endl;

    return 0 ;
}
    */

    /*
//                                                     Question 2: Simple Calculator 🧮

// Ab ek calculator banao jo user se do numbers input le aur unke:

// Addition
// Subtraction
// Multiplication
// Division
// calculate karke print kare.

#include <iostream>

int main(){
    int a;
    int b;

    std::cout<< "Enter Your 1st number: ";
    std::cin>>a;

    std::cout <<"Enter Your 2nd number: ";
    std::cin>>b;

    int addition = a+b;
    int substraction = a-b;
    int multiplication = a*b;
    double division = (static_cast<double>(a)/b);
  
    std::cout<< "Addition: "<< addition << std::endl;
    std::cout << "Subtraction: "<< substraction << std::endl;
    std::cout << "Multiplication: "<< multiplication << std::endl;
    std::cout << "Division: " << division<<std::endl;

}
    */

    /*
//                                          Q2.  Rectangle Calculator 📐

// Now write a program that asks the user to enter the length and width of a rectangle.

// Requirements
// Ask for the length.
// Ask for the width.
// Calculate the area.
// Calculate the perimeter.
// Display both results.

// Formulas:

// area = Length × Width
// perimeter = 2 × (Length + Width)

#include <iostream>

int main (){
    double x;
    double y;
    double area;
    double perimeter;

    std::cout << "Enter rectangle Length: ";
    std::cin>>x;

    std::cout << "Enter rectangle Width: ";
    std::cin>>y;

    area = x* y;
    perimeter = 2 * (x+y);

    std::cout << "Area: "<<area << std::endl;
    std::cout << "Perimeter: "<<perimeter << std::endl;

    return 0;
}
*/


/*
//                          3: Shopping Bill Calculator — User Input

// Ab program ko aisa banao ke user khud prices aur quantities enter kare, aur program automatically total bill calculate kare.

// Program user se ye 6 cheezein pooche:

// Keyboard ki price
// Keyboard ki quantity
// Mouse ki price
// Mouse ki quantity
// Headphones ki price
// Headphones ki quantity
// Phir program automatically calculate kare:
// Har item ka total
// Subtotal
// 5% tax
// Final bill

#include <iostream>

int main (){
    const int tax = 5;
    double price1;
    double price2;
    double price3;
    int quantity1;
    int quantity2;
    int quantity3;

    std::cout << "Keyboard Price: ";
    std::cin>>price1;

    std::cout << "Keyboard Quantity: ";
    std::cin>>quantity1;

    std::cout << "Mouse price: ";
    std::cin>>price2;

    std::cout << "Mouse Quantity: ";
    std::cin>>quantity2;

    std::cout << "Headphones price: ";
    std::cin>>price3;

    std::cout << "Headphone Quantity: ";
    std::cin>>quantity3;
    std::cout << std::endl;
    
    double total_price = price1*quantity1+price2*quantity2+price3*quantity3;
   // int total_quatity = quantity1 + quantity2 + quantity3;
    double subtotal = total_price * 1;//total_quatity;
    double total_tax = subtotal *tax /100;
    double final_bill = subtotal + total_tax;

    std::cout << "- - - - - - Shopping Bill - - - - - - "<< std::endl;
    std::cout << '\n';
    std::cout << "Total price: "<< total_price << " PKR" <<std::endl;
 //   std::cout << "Total Quantity: "<< total_quatity << " PKR" <<std::endl;
    std::cout << "Total Subtotal: "<< subtotal<< " PKR" <<std::endl;
    std::cout  << "Total tax: "<< total_tax << " PKR" <<std::endl;
    std::cout << "Final Bill: "<< final_bill << " PKR" <<std::endl;
    
    return 0;
}
    */

    /*
//                                             Q5: Student Marks & Percentage Calculator 🎓

// User se 5 subjects ke marks input lo:
// 1. Computer Science
// 2. Mathematics
// 3. Physics
// 4. English
// 5. Pakistan Studies
// Har subject ke total marks 100 hain.
// Phir calculate karo:
// - Obtained Marks: Sabhi 5 subjects ke marks ka sum.
// - Total Marks: 500.
// - Percentage: Obtained Marks ÷ Total Marks × 100.
// Marks ke liye int use karo.
// const int total_marks = 500; use karo.
// Percentage ke liye double use karo.
// User input ke liye std::cin use karo.
// Abhi if/else aur loops use nahi karne.
// Obtained Marks: Sabhi 5 subjects ke marks ka sum.
// Total Marks: 500.
// Percentage: Obtained Marks ÷ Total Marks × 100.

#include <iostream>

int main (){
    int computerscience;
    int mathematics;
    int physics;
    int english;
    int PakistanStudies;
  

    std::cout <<"Enter Comuter Science Marks: ";
    std::cin>>computerscience;

    std::cout << "Enter Mathematics Marks: ";
    std::cin>>mathematics;

    std::cout<< "Enter Physics Marks: ";
    std::cin>>physics;

    std::cout << "Enter English Marks: ";
    std::cin>>english;

    std::cout << "Enter PakistanStudies Marks: ";
    std::cin>>PakistanStudies;

    
    const int total_marks = 500;
    int obtained_mark = computerscience + mathematics + physics + english + PakistanStudies;
    double percentage = (static_cast<double>(obtained_mark) / total_marks * 100);

    std::cout << "Obtained Marks: "<<obtained_mark<<std::endl;
    std::cout << "Percentage: "<< percentage << "%" << std::endl;


    return 0;
}
    */
   /*
  // Math question:                        Square and Cube Calculator
#include <iostream>

int main (){
    double x;

    std::cout << "enter Number: ";
    std::cin>>x;

    double square = x*x;
    double cube = x*x*x;
    
    std::cout << "Square: "<< square <<std::endl;
    std::cout << "Cube: "<< cube << std::endl;

    return 0;

}
*/
/*
                                        Q2:Absolute
#include <iostream>
#include<cmath>

int main (){
    double x;
    
    std::cout << "Enter Number: ";
    std::cin>>x;

    double absolute = std::abs(x);
    std::cout << "Absolute: "<<absolute<<std::endl;

    return 0;
}
    */
   /*
   
//                               Question 3: Rounding Calculator 🔢
// Ab hum teen useful math functions practice karenge:
// - std::round()
// - std::floor()
// - std::ceil()
// Tumhara task
// User se ek decimal number input lo aur uske teen results display karo.
#include <iostream>
#include <cmath>

int main(){
    double x;

    std::cout << "Enter a number: ";
    std::cin>>x;

    double round_off = std::round(x);
    double round_down = std::floor(x);
    double round_up = std::ceil(x);

    std::cout << "Round OFF: "<<round_off<<std::endl;
    std::cout << "Round Down: "<< round_down<<std::endl;
    std::cout << "Round UP: "<< round_up<<std::endl;

    return 0;
}
    */
   /*
 //                                   4Question: Hypotenuse Calculator
// Right-angle triangle ki do sides user se input lo aur hypotenuse calculate karo.
// 1. Formula samjho
// Pythagorean theorem ke mutabiq:
// \[
// c=\sqrt{a^2+b^2}
// \]
// - a = Pehli side
// - b = Doosri side
// - c = Hypotenuse (right angle ke opposite wali sabse lambi side)

#include <iostream>
#include <cmath>

int main (){
    double x;
    double y;
    double c;

    std::cout<< "Enter Side A: ";
    std::cin>>x;
    std::cout << "Enter Side B: ";
    std::cin>>y;
    
  // x = pow(x,2);
  //  y = pow(y,2);
    c = sqrt(pow(x,2)+pow(y,2));

    std::cout << "Hypotenuse: "<< c << std::endl;

    return 0;
}
    */
   /*
//     if-else                 if statement       Q1  University Voting Eligibility Checker
// Scenario: Tum University of Balochistan mein ek software develop kar rahe ho jo check karega ke student university election mein vote de sakta hai ya nahi.
// Requirements
// 1. User se age input lo.
// 2. User se poochho ke uske paas valid student ID hai ya nahi.
// 3. Student tab vote de sakta hai jab:
//    - Age 18 ya usse zyada ho.
//    - Valid student ID bhi ho.
// 4. Agar dono conditions poori hon, print karo You are eligible to vote!
// 5. Warna print karo You are not eligible to vote!

#include <iostream>
int main (){
    int age;
    int student_id;

    std::cout << "Are you a studnet (1 = yes, 0 = N0): ";
    std::cin>>student_id;
    std::cout<< "ENter your age: ";
    std::cin>>age;


    if (age >=18 && student_id ==1){
        std::cout << "You can vote! ";
    }
    else {
        std::cout << "You cannot vote ";
    }
    // if(student_id == 1 && age >= 18){
    //     std::cout << "your can vote! ";
    // }
    // else if (student_id == 1 && age < 18){
    //     std::cout << "You cannot vote! ";
    // }
    // else if (student_id == 0 && age >= 18){
    //     std::cout <<"you can't vote! ";
    // }
    // else if (student_id == 0 && age < 18){
    //     std::cout << "you are not eligible for vote! ";
    // }


    return 0;
}
*/

/*

//  //   else- if               Q2.         Student Grade Calculator
// Bro, ab hum ek university result system banayenge. Is baar else if ki practice hogi.
// Requirements
// User se marks input lo aur grade calculate karo:
// Marks	Result
// 90–100	Grade A
// 80–89	Grade B
// 70–79	Grade C
// 60–69	Grade D
// 50–59	Grade E
// 0–49	Fail
// 0 se kam ya 100 se zyada	Invalid marks

#include <iostream>

int main(){
    int marks;

    std::cout << "Enter Your Marks: ";
    std::cin>>marks;

    if (marks>100 || marks < 0){
        std::cout << "Invalid marks ";
    }
    else if(marks>=90 ){// && marks <=100
        std::cout << "Grade A ";
    }
    else if (marks>=80 && marks<90){
        std::cout << "Grade B ";
    }
    else if(marks>=70 && marks<80){
        std::cout << "Grade C ";
    }
    else if(marks>=60 && marks<70){
        std::cout << "Grade D ";
    }
    else if (marks>=50 && marks<60){
        std::cout << "Grade E ";
    }
    else {
        std::cout << "Fail ";
    }

    return 0;
}
    */

    /*
//                     Q3. ATM Withdrawal System 🏧
// Bro, now let's apply if, else if, else, and || to a real-life situation.
// Your task: Create an ATM withdrawal program in C++.
// Requirements
// 1. Set the initial account balance to 50000.0.
// 2. Ask the user how much money they want to withdraw.
// 3. If the withdrawal amount is 0 or negative, print "Invalid withdrawal amount".
// 4. If the withdrawal amount is greater than the balance, print "Insufficient balance".
// 5. Otherwise:
//    - Print "Withdrawal successful!"
//    - Display the remaining balance.

#include <iostream>

int main (){    
    
    double account_balance = 50000.0;
    double withdrawal;

    std::cout << "Account Balance: "<< account_balance <<std::endl;
    std::cout << "Enter wtihdrawal ammout: ";
    std::cin>>withdrawal;

    if(withdrawal <=0){
        std::cout << "Invalid withdrawal amount. ";
    }
   else if(withdrawal > account_balance){
        std::cout << "Insufficient balace. ";
    }
    else {
        account_balance = account_balance - withdrawal;
        std::cout << "Withdrawal successful! " <<std::endl;
        std::cout << "Remaining Balance "<< account_balance <<std::endl;
        std::cout << "Thanks ";
    }
    
 return 0;
}
 */

 /*
//                                             Q4. Login System
// User se username aur password lo.
// Practice ke liye:
//  Username: admin
// - Password: 1234
// Dono correct hon to Login successful; warna Invalid username or password.
// Hint: && operator use karo.

#include <iostream>
#include<string>

int main (){
    std::string username = "admin";
    int password = 12345;

    std::cout << "enter Username: ";
    std::cin>>username;

    std::cout << "Enter Password: ";
    std::cin>>password;

    
    if(username == "admin" && password == 12345){
        std::cout << "Login successful ";
    }
    // else if(username !="admin" || password == 12345){
    //     std::cout << "Invalid Username ";
    // }
    // else if (username =="admin" || password!=12345){
    //     std::cout << "Invalid Paswword ";
    // }
    else {
        std::cout << "Login fail try again ";
    }

    return 0;
}
    */
   /*
//                                 Q5: Leap Year Checker in C++
// Ek C++ program banao jo user se year input le aur bataye ke woh Leap Year hai ya nahi.
// Requirements
// 1. User se year input lo.
// 2. Agar year 400 se divisible ho, toh leap year hai.
// 3. Warna agar 100 se divisible ho, toh leap year nahi hai.
// 4. Warna agar 4 se divisible ho, toh leap year hai.
// 5. Baqi cases mein leap year nahi hai.
#include <iostream>
int main (){
    int year;
   // double leap = year % 400 == 0 ;
    
    std::cout << "enter Year:  ";
    std::cin>>year;

   if (year % 400 == 0 || year % 4 == 0 && year % 100 !=0 ){
    std::cout << "its a leap year";
   }
   else {
    std::cout << "Not a leap year";
   }

    return 0;
}
    */

    /*
//                Q;6       Electricity Bill Calculator
// Ab ek real-life programming problem solve karo.
// C++ program banao jo user se electricity units input le aur bill calculate kare:
// - 100 units tak: Rs. 5 per unit
// - 101–200 units: Rs. 8 per unit
// - 200 se zyada units: Rs. 10 per unit
// Filhal simple rule: Saare units par usi rate se bill calculate karna jo selected range ka hai.

#include <iostream>

int main (){
    int units;
    
    std::cout << "Enter units: ";
    std::cin>>units;

    if(units>=0 && units <=100){
        std::cout << units *5<<std::endl;
    }
    else if(units>=101 && units <=200){
        std::cout << units*8<<std::endl;
    }
    else if(units >200){
        std::cout << units*10<<std::endl;
    }
    else{
        std::cout << "invalid number"<<std::endl;
        std::cout << "Try again ";
    }
        std::cout << "thanks"<<std::endl;

    return 0;
}
    */
   /*
      //            SWITCH practice 
     //                                      Q1. days in switch
 #include <iostream>

int main (){
    int month;
    
    std::cout << "Enter your month: ";
    std::cin>>month;

    switch (month)
    {
        case  1:
        std::cout << "Monday ";
        break;
        case 2:
        std::cout << "Tuesday";
        break;
        case 3:
        std::cout << "wednesday";
        break;
        case 4:
        std::cout << "Thursday";
        break;
        case 5:
        std::cout << "Friday";
        break;
        case 6:
        std::cout << "Satureday";
        break;
        case 7:
        std::cout << "Sunday";
        break;

    default:
        std::cout << "Invalid Number please enter (1-7)"<<std::endl;
        break;
    }  

    return 0;
}
    */

   /*
//                                          Question 2 — Restaurant Billing System 🍔
// Real-life example: Tum ek restaurant mein billing software bana rahe ho.
// Program mein menu show karo:
// ===== RESTAURANT MENU =====
// 1. Burger   - Rs. 350
// 2. Pizza    - Rs. 800
// 3. Sandwich - Rs. 250
// 4. Tea      - Rs. 100

// Enter your choice:

// Requirements:
// - User se menu choice input lo.
// - switch use karke item ki price select karo.
// - User se quantity input lo.
// - Total bill calculate karo.
// - Invalid choice par error show karo.
#include <iostream>
#include <string>

int main (){
    int choice;
    int quantity;
    int price;
    int total;
    std::string item;

    std::cout << "==== RESTAURANT MENU ===="<< std::endl;;
    std::cout << "1. Burger      -Rs. 350"<<std::endl;
    std::cout << "2. Pizza       -Rs. 800"<<std::endl;
    std::cout << "3. Sandwich    -Rs. 250"<<std::endl;
    std::cout << "4. Tea         -Rs. 100"<<std::endl;

    std::cout << "Enter your choice: ";
    std::cin>>choice;

    std::cout << "Enter Quantity: ";
    std::cin>>quantity;

   std::cout << std::endl;
   std::cout << "====== Bill ======="<<std::endl;

   if(quantity <=0){
    std::cout << "Invilad Quantity!";
    return 0;
   }

    switch(choice){
         case 1:
        price = 350;
        item = "Burger ";
            break;

         case 2:
        price = 800;
        item = "Pizza ";
        break;
          
         case 3: 
        price = 250;
        item = "Sandwich ";
        break;

         case 4: 
        price = 100;
        item = "Tea ";
        break;
        
        default:
        std::cout << "Error Please choice (1-4) ";
        return 0;
    }

     total = price * quantity;
     std::cout << "choice: "<< choice<<std::endl;
     std::cout << "item: "<< item <<std::endl;
     std::cout << "price: "<< price <<std::endl;
     std::cout << "Quantity: "<< quantity<<std::endl;
     std::cout << "Total bill: "<<  total<< std::endl;

    return 0;
}
    */

    /*
//                                                Question 3: Mobile Banking Menu 🏦
// Real-life situation: Tum ek bank ka simple ATM menu bana rahe ho.
// Program ka menu
// ===== ATM MENU =====
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

// Enter your choice:

// Requirements
// - Starting balance: 50000 rupees.
// - 1 select karne par account balance show karo.
// - 2 select karne par deposit amount input lo aur balance increase karo.
// - 3 select karne par withdrawal amount input lo aur balance decrease karo.
// - Agar withdrawal balance se zyada ho, toh Insufficient Balance show karo.
// - Agar deposit ya withdrawal amount 0 ya negative ho, toh Invalid Amount show karo.
// - 4 select karne par Thank you for using our ATM! show karo.
// - Kisi aur number par Invalid choice! show karo.

#include <iostream>

int main (){
    int choice;
    int balance = 50000;
    int deposit_money;
    int withdraw_money;

    std::cout << "==== ATM MENU ===="<<std::endl;
    std::cout << "1. Check balance "<<std::endl;
    std::cout << "2. Deposit Money "<<std::endl;
    std::cout << "3. Withdraw Money "<<std::endl;
    std::cout << "4. Exit "<<std::endl;

    std::cout << "Enter your choice: ";
    std::cin>>choice;

    if(choice <=0){
        std::cout << "Invalid Number pleace use(1-4)";
        return 0;
    }
    switch(choice){
        case 1:
        std::cout << "Your Balance: "<<balance<<std::endl;
        break;

        case 2:
        std::cout << "Enter Deposit money: ";
        std::cin>>deposit_money;
        if(deposit_money <=0){
        std::cout << "Invalid Amount ";
        return 0;
        }
        balance = deposit_money +balance;
        std::cout << "Deposit succesfully "<<std::endl;
        std::cout << "New balance: " << balance<<std::endl;
        break;
        
        case 3:
        std::cout << "Enter Wihtdraw amount: ";
        std::cin>>withdraw_money;
        if (withdraw_money <= 0) {
    std::cout << "Invalid Amount";
    return 0;
        }
        if (withdraw_money > balance) {
    std::cout << "Insufficient Balance";
    return 0;
}
        std::cout << "Wtihdraw succesfully "<<std::endl;
        balance = balance - withdraw_money;
        std::cout << "Remanining ammount: "<<balance<<std::endl;
        break;

        case 4:
        std::cout << "Thank you for using our ATM! "<<std::endl;
        return 0;

        default:
        std::cout << "Invalid number! ";
        return 0;
    }

    return 0;
}
*/

/*

//        Temperature conversion Fahrenheit to celsius
#include <iostream>

int main (){

    double temp;
    char unit;

    std::cout << "****** Temperature Conversion ******\n";
    std::cout << "F = Fahrenheit\n";
    std::cout <<  "C = celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin>>unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp)+ 32.0;
        std::cout << "Temperature is : "<< temp << "F\n";
    }
else if (unit == 'c' || unit == 'C'){
        std::cout << "Enter the temerature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32)/1.8;
        std::cout << "Temperature is: "<< temp << "C\n";
}
else {
    std::cout << "please enter in only in C or F\n ";
}

   std::cout << "************************************ \n ";
   
   return 0;
}
    */