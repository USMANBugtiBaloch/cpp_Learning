#include <iostream>

int main()
/*
// fullname.at(0) — pehla character.
// fullname.at(fullname.length() - 1) — aakhri character.
// fullname.length() — total characters.
{   // if yur wan more string its in cplusplus.com website.
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
    */
/*
    {

        // name.empty
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    if(name.empty()){
        std::cout << "you didn't enter your name";
    }
    else {
        std::cout << "Hello "<< name;
    }

}
*/

/*    {
    //name.clear
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    name.clear();

    std::cout << "hello "<< name;
}
*/

   /* {
    //name.append
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    name.append("@gamil.com");

    std::cout << "Your username is now "<< name;
    
    return 0;
}
*/
  /*  {
    //name.at
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    std::cout << name.at(5);
   
    return 0;
}
    */
/*
 {
    //name.insert()
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    name.insert(2, "@");

    std::cout << name;
   
    return 0;
}
*/

/*    {
    //name.Find()
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

   std::cout << name.find(' ');

    //std::cout << name;
   
    return 0;
}*/
{
    //name.Find()
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin,name);

    name.erase (0 , 5);

    std::cout << name;
   
    return 0;
}