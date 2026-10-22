#include <iostream>

int main()
{
    // Pseudo-rando = NOT turly random (but close)
    srand(time(NULL));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1; //chooing 6 numebr

    std::cout << number1 <<std::endl;
    std::cout << number2 <<std::endl;
    std::cout << number3 <<std::endl;

    return 0;
}
