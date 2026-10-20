// for loop use karke 1 se 20 tak numbers print karo.

#include <iostream>

int main()
{
    // for loop use karke 1 se 20 tak numbers print karo.

    for (int i = 1; i <= 20; i++)
    {
        std::cout << i << std::endl;
    }
    std::cout << "==========\n";

    // for loop use karke 1 se 50 tak sirf even numbers print karo.
    for (int i =1; i <=50; i++){
        if(i %2 == 0 )
        std::cout << i <<std::endl;
    }
    std::cout << "==========\n";

   // User se ek number input lo aur uska multiplication table 1 se 10 tak print karo.
    // int number;
    // std::cout << "Enter a Number: ";
    // std::cin >>number;

    // for (int i=1; i <= 10; i++){
    // std::cout << number << "x" << i << " = "<< number * i << '\n';
    // }
    // std::cout << "==========\n";

    // for loop use karke 1 se 100 tak tamam numbers ka sum calculate karo.
    int sum = 0 ;
    for(int i = 1; i<=100 ; i++){
        sum = sum+i;
    }
    std::cout <<sum<<std::endl;
    
    std::cout << "==========\n";

    return 0;
}
