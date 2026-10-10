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