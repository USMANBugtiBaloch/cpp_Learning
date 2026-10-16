#include <iostream>
#include <cmath>

int main (){
    double f = 3.45;
    double c = 3.99;
    double x = 3;
    double y = 4;
    double z;

 //  z= std::max(x,y); // for maximam value 
 //  z = std::min(x,y); // for minimum value 

    z = pow(2,6);  // here you get error because we dont include cmath library
    //this is the power fuction pow
    z = sqrt(9); // this is a square value 
    z = abs (-3); // this is a absolute  value 3
    z = round (x); // round off 
    z = ceil (c); // round up
    z = floor(f); // round down

    std::cout<<z << std::endl;

    return 0;
}