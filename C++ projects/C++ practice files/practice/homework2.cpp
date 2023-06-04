//question 3 assignment rock paper scissors. made by abhijeet 21BCE10074 

#include<iostream>
#include<algorithm>
using namespace std;


void rockPaperScissors(string move1, string move2)
{
    transform(move1.begin(), move1.end(), move1.begin(), ::tolower);
    transform(move2.begin(), move2.end(), move2.begin(), ::tolower);
    if( (move1!="rock" &&  move1!="paper" && move1!="scissors") && (move2!="rock" && move2!="paper"&& move2!="scissors"))
        cout<<"Invalid moves of "<<move1<<" and "<<move2;
    else if( move1!="rock" && move1!="paper" && move1!="scissors")
        cout<<"Invalid move of "<<move1;
    else if(move2!="rock" && move2!="paper" && move2!="scissors")
        cout<<"Invalid move of "<<move2;
    else
    {
        if(move1=="rock" && move2=="scissors")
            cout<<"Player1 wins!";
        else if(move1=="scissors" && move2=="paper")
            cout<<"Player1 wins!";
        else if(move1=="paper" && move2=="rock")
            cout<<"Player1 wins!";
        else if(move1=="rock" && move2=="paper")
            cout<<"Player2 wins!";
        else if(move1=="paper" && move2=="scissors")
            cout<<"Player2 win!s";
        else if(move1=="scissors" && move2=="rock")
            cout<<"Player2 wins!";
        else
            cout<<"TIE!";
    }
    
}

int main()
{
    string move1,move2;
    cout<<"Player 1 enter your move: ";
    cin>>move1;
    cout<<"Player 2 enter your move: ";
    cin>>move2;
    rockPaperScissors(move1,move2);

    return 0;
}