#include <iostream>

int main (){

    // if statements = do something if a condition is ture.
    //                 if not, the then don't do it.

    int age;

    std::cout<< "enter Your age: ";
    std::cin>>age;

   if(age >=100){
        std::cout<< "your are old! ";
     }
     else if (age >= 18){
         std::cout << "Welcome to jungle!";
     }
     else if (age < 0){
      std::cout << "Your are a child go away! ";
     }
   else{
      std::cout << "Your are not enough to enter! ";
   }
   
  return 0;
}
