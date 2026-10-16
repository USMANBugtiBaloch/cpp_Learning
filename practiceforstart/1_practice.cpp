#include <iostream>
#include <string>
using namespace std;

namespace hello {
   int x= 20;
}

 int main () {
// 	char a = 65, b =66 , c = 67;
//     char d = 68;
//     cout << a;
//     cout << b;
//     cout << c;
//     cout << d;

    // char x = 36;
    //  char y = 39;
    // cout << x<<endl;
    // cout << y;

    // int item = 20;
    // double cost_per_item = 250;
    // double total_cost = item * cost_per_item;
    // string currency = " PKR";
    // cout << "Total Item: "<< item<< endl;
    // cout << "Cost per item: "<< cost_per_item<< currency<<endl;
    // cout << "Total cost: "<< total_cost<< currency<< endl;

    // int sum1 = 100 + 50;
    // int sum2 = sum1 + 250;
    // int sum3 = sum2 + 400;
    // cout << sum1<<endl<<sum2<<endl<<sum3 <<endl;
  //  cout << sum2 << endl;
  //  cout << sum3 <<endl;

//   int x = 10;
//   int y =  3;
//                         // int  : : :
//   cout << (x + y) << endl; //13   13
//   cout << (x - y) << endl; //7    7
//   cout << (x * y) << endl; // 30  30
//   cout <<(double) x / y   << endl;//3     3.3333
//   cout << (x * y) << endl;//30    30
//  // cout << (x + y) << endl;
// int z = 10;
// z+=2;
// cout << z*z ;

// int x= 15;
// ++x,--x,++x;
// cout <<x<<endl;


int peopleInRoom = 0;

//4enter
peopleInRoom++;  //1
peopleInRoom++;  //2
peopleInRoom++;  //3
peopleInRoom++;  //4

//1 left
peopleInRoom--;  //3
//1enter
peopleInRoom++; //4
// 1 left
peopleInRoom--;   //3 final out is 2.

cout << peopleInRoom<< endl;

    return 0;
}
