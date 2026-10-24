/*
#include <iostream>

int main()
{
    // Pseudo-rando = NOT turly random (but close)
    srand(time(NULL));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1; //chooing 6 numebr

    std::cout << number1 <<std::endl;
    std::cout << number2 <<std::endl;
    std::cout << number3 <<std::endl;

    return 0;
}
*/

// random event generator

/*
#include <iostream>
#include <ctime>


int main (){
   srand(time(0));
   int randNumber = rand () % 5 +1;
   switch (randNumber){
       case 1 : std::cout << "You win a car \n";
       break;
       case 2 : std::cout << "you are god gifted \n";
       break;
       case 3 : std::cout << " You win a free dinner \n";
       break;
       case 4 : std::cout << "You win a motorcycle \n";
       break;
       case 5 : std::cout << "you win ultimate gift cards \n";
       break;

   }
       std::cout << "Thank for buying tickets: ";


   return 0;
}
*/
/*
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

    srand(time(0));
    int randNumer1 = rand() % 5 + 1;
    int guess;

    std::cout << "1 se 5 ke darmiyan ek number socho \n";
    std::cout << "Guess karein woh number kia hai: ";
    std::cin >> guess;

    if (guess == randNumer1)
    {
        std::cout << "Wah! apka guess bilkul sahi hai "
                  << std::endl;
    }
    else
    {
        std::cout << "Oh oh! sahi number " << randNumer1
                  << " tha. dobara try karo :" << std::endl;
    }

    return 0;
}
*/
/*
 // coin head/tails
#include <iostream>
#include <ctime>
#include <cstdlib>

int main ()
{
    srand(time(0));

    int coin = rand() % 2;

    std::cout << "coin hawa main uchal diya gaya hai ...\n";
    std::cout << "Natija: ";

    if(coin == 0){
        std::cout << "HEADS!" <<std::endl;

    } else{
        std::cout << "tails! "<< std::endl;
    }

    return 0;
}
*/

#include <iostream>

int main()
{

    int number;
    int guess;
    int tries =0;

    srand(time(NULL));
    number = (rand() % 100) + 1;

    std::cout << "===== NUMBER GUESSING GAME =====\n";

    do
    {
        std::cout << "ENTER  A GUESS (1-100): ";
        std::cin >> guess;
        tries++;


        if (guess > number)
        {
            std::cout << " Too high! \n";
        }
        else if (guess < number)
        {
            std::cout << "Too low!\n";
        }
        else
        {
            std::cout << "CORRECT # of tries:  "
                      << tries << '\n';
        }

    } while (guess != number);


    std::cout << "===================\n";

    return 0;
}
