#include <iostream>

int main (){

        // && = check if two condition are true
        // || = check if at least one of two confitions is true 
        // ! = reverses the logical state of its operand

        // AND

        // ask user what is the temperature
/*
        int temp;

        std::cout << "Enter the temperature: ";
        std::cin >> temp;

        if(temp > 0 && temp < 30){
            std::cout << "The temperature is good! ";
        }
        else {
            std::cout << "the temperature is bad";
        }
*/

      //  OR 
     /* 
            int temp;

        std::cout << "Enter the temperature ";
        std::cin >> temp;

        if(temp <=0 || temp >= 30){
            std::cout << "The temperature is bad! ";
        }
        else {
            std::cout << "the temperature is good";
        }
*/
     //   ! not 
        int temp;
        bool sunny = false;

        std::cout << "Enter the temperature:  ";
        std::cin >> temp;

        if(temp <=0 || temp >= 30){
            std::cout << "The temperature is bad! \n";
        }
        else {
            std::cout << "the temperature is good\n";
        }

        if (!sunny) //sunny=true
        {
            std::cout << "It is cloudy outside~ ";
        }
        else{
            std::cout << "It is  sunny  outside! ";
        }
    return 0;
}