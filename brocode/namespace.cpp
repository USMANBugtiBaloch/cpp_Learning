#include <iostream>

  namespace first {
        int x = 1;
    }
    namespace second {
        int x = 6;
    }

int main (){

// Namespace
    //       provides a solution for preventing name conflicts.
    //       A namespace aloows for identically named entities 
    //       as log as the namespace are differents.

   // int x = 0; 
   //int x = 1;
   //   if we cout this we get an error because of same names 
   //   here is a solution 
   //   we create a namespace 

   //for exmaple
  //     before int main we use 
  //    namespace first{
  //      int x = 7;
    //     }

    //   before int main we use 
  //    namespace second{
  //      int x = 7;
    //     }

//  if we want output of x we use 

//  std::cout << x;

//   if we want output of namespace of 1st or secoud 
//   we use 

// std::cout<< second::x;   or  std::cout << first::X;

//   these two colon (::)are scope resolution operator
 
//  we can also call them inside the int main()
//  like 
 //   #include <iostream>
 //    namespace first{
 //       int x =24;
// }
//      int main(){
//      using namespace first;
//      std::cout << first::x;
//      return 0;
//      }

       // std :: cout << first::x << '\n';
       // std :: cout<< second::x << '\n';
    // also use using namespace first inside of int main 
  //  using namespace first;
   // using namespace second;
   int x= 0;
    std:: cout << first::x<< '\n' << second::x <<'\n' <<x;
  //  std::cout << second::x;
    return 0;
}

// some people use 
// using namespace std;
// just for save little bit typing 
// if we use this we dont need std::
//  like exmple 

// #include <iostream>
// using namesapce std;
// int main(){
//     int y = 508;
//     cout << x;
// //     here we dont use std:: because we are using namespace std;
// }
// namespace have many entities 
//     using std::cout;
//      usig std::sting;
