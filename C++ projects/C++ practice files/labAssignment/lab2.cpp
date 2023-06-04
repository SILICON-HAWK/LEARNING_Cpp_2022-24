/*LAB ASSIGNMENT 2 by Abhijeet A S 
Guess-the-number-game:  Write a program that pays the game of “guess the number” as follows: Your program choose the number to be
guess by selecting  an  integer  at  randomin  the  range  1  to  1000.  The  program  then displays the following:I have a number 
between 1 and 1000.Can you guess my number?Please type your first guess.The player then type a first guess. The program responds with 
one of the following:1.Excellent ! youguessed the number!Would like to play again (y or n)?2.Too low. Try again.3.Too high. Try again.
If the payer’s guess is incorrect, your program should loop until the player finally get the number right. Your program should keep 
telling the player Too highor Too low to help the player “zero in” on the correct answer.*/
 
#include <iostream>
#include<cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));
    int num, n;
    char play_again;
    while (1)
    {
        int n = (rand() % 1000) + 1;
        cout << ("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess:\n");
        cin >> num;
        while (1)
        {
 
            if (num > n)
            {
                cout << ("Too high.Try again.\n");
            }
            else if (num < n)
            {
                cout << ("Too low.Try again.\n");
            }
            else if (num == n)
            {
                cout << ("Excellent! you guessed the number!\n");
                break;
            }
            cout << ("Please type your guess:\n");
            cin >> num;
        }
        cout << ("Do you want to play again?\nPress 'y' for yes or 'n' for no\n");
        cin >> play_again;
        if (play_again == 'y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}