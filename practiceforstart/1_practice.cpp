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


// int peopleInRoom = 0;

// //4enter
// peopleInRoom++;  //1
// peopleInRoom++;  //2
// peopleInRoom++;  //3
// peopleInRoom++;  //4

// //1 left
// peopleInRoom--;  //3
// //1enter
// peopleInRoom++; //4
// // 1 left
// peopleInRoom--;   //3 final out is 2.

// cout << peopleInRoom<< endl;

// Q1. 🛒 Shopping Bill
// Ek shop par:
// - Shirt = Rs. 1,500
// - Shoes = Rs. 3,000
// - Cap = Rs. 500
// Tum ek shirt, ek pair of shoes aur 2 caps khareedte ho.
// Task: Har item ki price variables mein store karo aur total bill calculate karke print karo.


    // int shirt = 1500;
    // int shoes = 3000;
    // int cap = 500*2;
    // double total_cost =  shirt + shoes + cap;


    // cout << total_cost<<endl;


/*
//     2. 💰 Monthly Savings
// Tumhari monthly salary Rs. 45,000 hai. Monthly expenses Rs. 32,500 hain.
// Task:
// 1. Monthly savings calculate karo.
// 2. 12 months ki total savings calculate karo.


    int monthly_salary = 45000;
    int monthly_expenses = 32500;
    int monthly_saving = monthly_salary - monthly_expenses;
    int yearly_saving = monthly_saving *12;
    string currency = " PKR";

    cout << "Monthly Salary: "<< monthly_salary << currency <<endl;
    cout << "Monthly Expenses: "<< monthly_expenses<<currency<<endl;
    cout << "Monthly Saving: "<< monthly_saving<<currency<<endl;
    cout << "1 Year OF saving: "<< yearly_saving<<currency<<endl;
*/

/*
// Restaurant Bill Split
// Ab ek real-life problem solve karo.
// Situation:
// - Restaurant bill = Rs. 3,600
// - Friends = 4
// - Har friend Rs. 1,000 deta hai.

    int total_recipt = 3600;
    int friends = 4;
    int each_friends = 1000;
    int friend_total = friends * each_friends;
    int remaining =  friend_total - total_recipt;
    int each_friend_given = total_recipt /friends;
    string currencey  = " PKR";

     cout << " Friends : "<< friends << currencey <<endl;
     cout << "Each friends Give: "<< each_friends<<endl;
     cout << "Friends total: "<<friend_total<<endl;
     cout << "Total Bill: "<< total_recipt<<endl;
       cout << " Remaining amount: "<< remaining << currencey <<endl;
        cout << " Friend amount given : "<< each_friend_given << currencey <<endl;

*/

//         Q4: ATM Notes Calculator
// Ab integer division (/) aur remainder operator (%) ki real-life practice karte hain.
// Problem: Tumhare paas Rs. 4,700 hain. Calculate karo ke is amount mein kitne Rs. 1,000 ke notes aur kitne Rs. 500 ke notes aa sakte hain, aur aakhir mein kitni amount bachti hai.
// Requirements:
// 1. int amount = 4700; declare karo.
// 2. Rs. 1,000 ke notes ki quantity calculate karo.
// 3. Remaining amount calculate karo.
// 4. Rs. 500 ke notes ki quantity calculate karo.
// 5. Aakhir mein remaining amount print karo.

    int amount = 4700;
    int note1 = 1000;
    int quantity1 = amount / note1;
    int remaining1 = amount /note1 *note1;
    int note2 = 500;
    int quantity2 = amount / note2;
   // int remaining_after_notes =
 //   int quantity_note1 = amount / note1;
  //  int quantity_note2 = amount /note2;
  //  int remaining =
    cout << remaining1;


    return 0;
}
