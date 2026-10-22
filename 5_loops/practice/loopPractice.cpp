// for loop use karke 1 se 20 tak numbers print karo.

#include <iostream>

int main()
{
    // for loop use karke 1 se 20 tak numbers print karo.

    for (int i = 1; i <= 20; i++)
    {
        std::cout << i << std::endl;
    }
    std::cout << "==========\n";

    // for loop use karke 1 se 50 tak sirf even numbers print karo.
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
            std::cout << i << std::endl;
    }
    std::cout << "==========\n";

    //  User se ek number input lo aur uska multiplication table 1 se 10 tak print karo.
    int number;
    std::cout << "Enter a Number: ";
    std::cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << "x" << i << " = " << number * i << '\n';
    }
    std::cout << "==========\n";

    //  for loop use karke 1 se 100 tak tamam numbers ka sum calculate karo.
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    std::cout << sum << std::endl;

    std::cout << "==========\n";

    // Ek ATM program banao jo user se 3 baar withdrawal amount input le aur har attempt ki amount print kare.
    // int withdrwal;
    // std::cout << "enter withdrwal amount: ";
    // std::cin>>withdrwal;

    // std::cout << "Withdrwal amount =" <<withdrwal;

    for (int i = 1; i <= 3; i++)
    {
        int withdrwal;
        std::cout << "enter withdrwal amount: ";
        std::cin >> withdrwal;

        std::cout << "Withdrwal amount =" << withdrwal << std::endl;
    }
    std::cout << "==========\n";

    //    5 subjects ke marks user se input lo aur unka total aur average calculate karo.
    int totalmarks = 500;
    double average;
    int marks;
    int total_obtained = 0;
    // int mark = 100;
    for (int i = 1; i <= 5; i++)
    {
        // int marks;
        std::cout << "Enter you marks for Subject" << i << ": ";
        std::cin >> marks;
        marks = marks + marks + marks + marks + marks;
        total_obtained = total_obtained + marks;
        //   average = marks /totalmarks * 100;
    }
    average = ((double)total_obtained / totalmarks) * 100;

    std::cout << "Obtain Marks: " << marks << '\n';
    std::cout << "Total Marks: " << totalmarks << '\n';
    std::cout << "average OF MARKS: " << average << std::endl;

    std::cout << "==========\n";

    // User se ek non-negative integer input lo aur uska factorial calculate karo.
    int n;
    double factorial = 1;

    std::cout << "Enter a positive Number: ";
    std::cin >> n;

    if (n < 0)
    {
        std::cout << "Error! Factorial negative Number does't exist " << std::endl;
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            // factorial = factorial *i;
            factorial *= i;
        }
        std::cout << "Factorical of " << n << " = " << factorial << std::endl;
    }
    std::cout << "=================\n";

    //  User se ek number input lo. for loop use karke us number ke multiples 1 se 10 tak print karo.
    int number_1;

    std::cout << "Enter Your Number: ";
    std::cin >> number_1;

    for (int i = 1; i <= 10; i++)
    {

        int result = number_1 * i;

        // std::cout<< "Your number is: \n";
        std::cout << i << "." << result << std::endl;
    }
    std::cout << "=================\n";
    int numbers;
    char y = 'y';
    char N = 'N';
    do
    {
        std::cout << "Enter your number: ";
        std::cin >> numbers;
        std::cout << "You Entered " << numbers << std::endl;

        std::cout << "DO You Want to contiune?(Y ? N)";
        std::cin >> y;

    } while (y == 'y' || y == 'Y');

    std::cout << "Thank You: ";
    std::cout << "================\n";

    int guessingNumber = 7;

    do
    {
        std::cout << "Enter guessing Number: ";
        std::cin >> guessingNumber;
        if (guessingNumber != 7)
        {
            std::cout << "Wrong Guess Try again " << std::endl;
        }
    } while (guessingNumber != 7);
    std::cout << "Correct guess Thank You : ";
    std::cout << "==================\n";
//  Pactice questions are ..
//  Square pattern
//  Repeated numbers
//  Increasing star triangle
//  Number triangle
//  Multiplication tables
//  Reverse triangle
//  Repeated-number triangle
//  Multiplication grid
    int row;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            std::cout << j;
        std::cout << std::endl;
    }

    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
            std::cout << i << "x" << j << "= " << i * j << std::endl;

        std::cout << std::endl;
    }
    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
            std::cout << "*";

        std::cout << std::endl;
    }
    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            std::cout << i;

        std::cout << std::endl;
    }
    std::cout << "==============\n";

    for (int i = 1; i <= 5; i++)

    {
        for (int j = 1; j <= 5; j++)
            std::cout << i * j << " ";

        std::cout << std::endl;
    }
    std::cout << "==============\n";

    return 0;
}
