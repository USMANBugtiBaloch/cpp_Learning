// #include <iostream>

// int main (){
//     std::string name;
//     int age;

//    //  std::cout<< "what is your name? ";
//    //  std::cin>>name; //not read white spaces // std::getline(std::cin, name);

//    std::cout << "what is your Full Name? ";
//    //std::cin>>name;
//      std::getline(std::cin, name); //want full name you have to type this

//     std::cout << "what is your age? ";
//     std::cin >> age;

//     std::cout << "Hello " << name <<std::endl;
//     std::cout << "Your are "<< age << " year old"<<std::endl;

//     return 0;
// }

#include <iostream>

int main (){
    std::string name;
    int age;



      std::cout << "what is your age? ";
    std::cin >> age; // \n thats why we write  std::ws

   std::cout << "what is your Full Name? ";
   //std::cin>>name;
     std::getline(std::cin >> std::ws, name); // ws whtie space elimainate any white spaces


    std::cout << "Hello " << name <<std::endl;
    std::cout << "Your are "<< age << " year old"<<std::endl;

    return 0;
}