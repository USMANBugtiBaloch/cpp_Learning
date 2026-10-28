/*
#include <iostream>

// funtion definition
int printHello()
{
    std::cout << "Hello \n";
    return 3;
}

int main()
{
    //   function call / invoke
    // int val = printHello();
    // std::cout << "val = " << val << std::endl;
    std::cout << printHello() << std::endl;

    // std::cout << "Hello \n";

    // int a = 10;
    // int b = 20;

    // std::cout << "Hello \n";

    return 0;
}*/
/*
// parameters
//  returntype funName (type p1 , type p2)
#include <iostream>

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int multipy (int x, int y){
    int multi = x * y;
    return multi;
}


int main()
{
    std::cout << sum(10, 20) << std::endl;
    std::cout << sum(100, 20) << std::endl;
    std::cout << multipy(100,20) << std::endl;
}
    */
/*
    #include <iostream>

    int factorialN (int n){
        int fact = 1;

        for(int i = 1; i <= n; i++){
            fact *=i;
        }
     return fact;
    }
    int main (){
        std::cout << factorialN(4) <<std::endl;
        std::cout << factorialN(5) <<std::endl;

        return 0;
    }
*/
/*
// pass by value
#include <iostream>
void changeX(int x){
    x = 2*x;
    std::cout << "X = "<< x <<std::endl;

}

int main (){
    int x = 5;
    changeX(x);

    std::cout << "X = " << x <<std::endl;

    return 0;
}
*/
/*
#include <iostream>
void printNumber()
{
    for (int i = 1; i <= 5; i++)
        std::cout << i << std::endl;
}

int main()
{

    printNumber();
    return 0;
}
*/
/*
// taking square using fucntion
#include <iostream>
void printSquare(int i)
{
    i = i * i;
    std::cout <<"square = " << i << std::endl;
}

int main()
{
    // int square;
    printSquare(5);
    // printSquare(4);
   return 0;
}
// #include <iostream>

// void printSquare(int square)
// {
//     square = square * square;
//     std::cout << "square = "<< square << std::endl;
// }
// int main (){
//     printSquare(5);
//     printSquare(4);

//     return 0;
// }
*/
/*
// adding two number using function
#include <iostream>

void add(int a, int b){
  int  result = a + b;
    std::cout << "result = "<< result <<std::endl;
}

int main (){
    add(10 , 20);
    add(5 , 7);

    return 0;
}
*/
/*
// adding two number using return
#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(50, 25);
    std::cout << "result = " << result << std::endl;

    return 0;
}
*/
/*
#include <iostream>

bool isEven(int number)
{
    if (number % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
   std::cout << "10 is Even: " << isEven(10)<< std::endl;
   std::cout << "5 is Odd: " << isEven(5)<<std::endl;
    return 0;
}
*/
/*
//using string to print name
#include <iostream>
#include <string>

void name(std::string a)
{

    std::cout << "Ener you name! ";
    std::cin >> a;
    std::cout << "Hello " << a << std::endl;
}

int main()
{
    std::string username;
    name(username);
}
*/
/*
//using function printing hello for 3 time just call the fuction
#include <iostream>

void greet()
{
    std::cout << "hello " << std::endl;
}

int main()
{
    greet();
    greet();
    greet();

    return 0;
}
*/
/*
//fucntion with parameter
#include <iostream>
void printNumber(int number)
{
    for (int i = 1; i <= number; i++)
        std::cout << i << std::endl;
}

int main()
{

    printNumber(10);
    printNumber(25);
    printNumber(100);

    return 0;
}*/
/*
//addition
#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int result;
    result= add(5, 10);

    std::cout << result;
    return 0;
}
*/
/*
// even or odd
#include <iostream>

bool isodd(int number1);
//   bool isodd(3);
bool isEven(int number)
{
    if (number % 2 == 0)
    {
        std::cout << "Even" << std::endl;
        return true;
    }
    else
    {
        std::cout << "odd\n";
        return false;
    }
    // return 1;
}

int main()
{

    isEven(2);
    isodd(3);

    return 0;
}
// or
bool isodd(int number1)
{
    if (!number1 % 2 == 0)
    {
        std::cout << "HEllo" << std::endl;
        return true;
    }
    else
    {
        std::cout << "bye" << std::endl;
        return false;
    }
    return 0;
}
*/
/*
// square of a number
#include <iostream>
int square(int number)
{
    std::cout<< "Sqaure "<< number<<std::endl;
    return number * number;
}

int main()
{
    int result = square(2);
    std::cout << "equal to " <<result << std::endl;


    return 0;
}   */
/*
#include <iostream>

int age()
{
    int age = 20;
    std::cout << "Your are " << age << " year old" << std::endl;
    return age;
}

void happy(std::string name)
{
    std::cout << "Happy birthda to " << name << std::endl;
    std::cout << "Happy birthda to " << name << std::endl;
    std::cout << "Happy birthda to " << name << " dear" << std::endl;
    std::cout << "Happy birthda to " << name << std::endl;

}

int main()
{
    // int age = 20;
    std::string name = "Usman";
    happy(name);
    age();

    return 0;
}
*/
/*
#include <iostream>

double square(double length);
double cube(double length);

int main()
{
    double length;
    std::cout << " enter your square ";
    std::cin >> length;
    // double lenght1;
    // std::cout << " enter your cube ";
    // std::cin >> lenght1;
    double area = square(length);
    double volume = cube(length);
    std::cout << " Area = " << area << std::endl;
      std::cout << " cube = " << volume << std::endl;

    return 0;
}

double square(double length)
{
   // double result = length * length;
   // return result;
   return length * length;
}
double cube(double length)
{
   // double result = length * length;
   // return result;
   return length * length * length;
}
*/
/*
//printing my name using function
#include <iostream>

std::string addingString(std::string string1, std::string string2);

int main()
{

    std::string firstname = "Muhammad";
    std::string lastname = "Usman";
    // std::string fullname = firstname + " " + lastname;
    // std::cout << fullname << std::endl;
    std::string fullname = addingString(firstname, lastname);
    std::cout << "Hello " <<fullname;

    return 0;
}
std::string addingString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}*/
/*
//overloaded function same name!
#include <iostream>
void bakePizza(std::string topping1);
void bakePizza();

int main(){

    bakePizza("hot ");

    return 0;
}

void bakePizza(){
    std::cout << "here is your pizza! \n";
}
void bakePizza(std::string topping1){
    std::cout << "here is your "<<topping1<< "pizza!";
}
    */
/*
    // practice function overloaded
#include <iostream>
#include <string>

void display();
void display (std::string name);
void display (std::string name,int number);

int main()
{
    display ();
    display("Usman");
    display("Usman",66);
    return 0;
}

void display()
{
    std::cout << "Hello C++ " << std::endl;
}
void display(std::string name)
{
    std::cout << "Hello C++ "<< name << std::endl;
}
void display(std::string name,int number){
    std::cout << "Hello C++ \n"<< name << '\n' << number;
}*/
