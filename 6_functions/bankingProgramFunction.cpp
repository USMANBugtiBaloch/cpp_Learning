#include <iostream>
#include <iomanip>
#include <limits>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;
    do
    {

        std::cout << "+++++++++++++++++\n";
        std::cout << "Enter your Choice \n";
        std::cout << "1. Show balance" << std::endl;
        std::cout << "2. deposit\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. Exit \n";
        std::cout << "Enter choice: ";
      //  std::cin >> choice;

        //clear input buffer
        if(!(std::cin>> choice)){
            std::cout << "Invalid input! please enter a number. \n";
            std::cin.clear(); // error state clear karein
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }


        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showbalance(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout << "Thanks for using ATM ";
            break;
        default:
            std::cout << "invalid input: " << choice;
            break;
        }

    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
    std::cout << "Balance : "<< std::setprecision(2)<< std::fixed << balance << std::endl;
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter deposit amount : ";
    std::cin>>amount;

    if(amount > 0){
        return amount;
    }else {
        std::cout << "that not a valid ammout ";
        return 0;
    }

}

double withdraw(double balance)
{

    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin>> amount;

    if(amount > balance){
        std::cout << "Insifficiet Funds:\n ";
        return 0;
    }else if(amount < 0){
        std::cout << "that is not a valid amount\n ";
        return 0;
    }else {
        return amount;
    }


}
