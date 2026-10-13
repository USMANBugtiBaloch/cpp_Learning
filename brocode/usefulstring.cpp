#include <iostream>

int main(){

    //name.length

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    if(name.length() > 12){
        std::cout<<" Your name cant be over 12 charachters ";
    }
    else{
        std::cout << "Welcome " << name <<'\n' ;
    }

    return 0;

}