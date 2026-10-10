 
 
 //typedef = reserved keyword used to create an additional ame
                // (alias) for anoter data type.
                // New identifier for an existing type.
                // Helps with readability and reduces typos


#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::String, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using number_t = int ;
using text_t = std::string;

int main () {


  //  pairlist_t pairlist;
//
text_t firstName = "usman BUgit"; //std::string firstName = "Usman";
number_t age = 21;  //int age = 21;
std::cout << age;
std::cout << firstName << std::endl;

       return 0;
}