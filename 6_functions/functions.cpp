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
