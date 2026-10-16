
//                      University Scholarship Eligibility
// Topics: Comparison operators, if-else, logical operators, ternary operator
// University students ko scholarship deni hai.
// Requirements:
//     • Student ke marks (0–100) aur attendance percentage input lo.
//     • Scholarship ke liye marks kam az kam 85 aur attendance kam az kam 80% honi chahiye.
//     • Agar marks 0 se kam ya 100 se zyada hon, to invalid marks show karo.
//     • Agar attendance 0 se kam ya 100 se zyada ho, to invalid attendance show karo.
//     • Warna eligibility check karo.
//     • Ternary operator se final message print karo: "Scholarship Approved" ya "Scholarship Rejected".
// Extra: Scholarship eligible hone ke liye dono conditions true honi chahiye.

#include <iostream>

int main(){
    int marks;
    double attendance;
  //  int scholarship;

    std::cout << " Enter Your Marks: ";
    std::cin>>marks;

    std::cout << "Enter Your atendance: ";
    std::cin>>attendance;

    if(marks < 0 || marks > 100){
        std::cout << "Invalid marks ";
        return 0;
    }
    else if (attendance < 0 || attendance > 100){
        std::cout << " Invalid attendance ";
        return 0;
    }
    
   // std::cout << (num == 0? "zero" : (num > 0 ? "postive " : "Negative"));

        
       // scholarship = marks && attendance;
        std::cout << (marks >=85 && attendance >=80  ? "Scholarship Approved " : "scholarship Rejected");
    

    return 0;
}