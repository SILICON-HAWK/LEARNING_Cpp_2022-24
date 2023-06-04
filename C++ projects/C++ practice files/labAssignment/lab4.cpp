/*An  election  is  contested  by  5  candidates.  The  candidates  are  numbered  1 to 5 and the voting is done by marking the 
candidate number on the ballot paper.  Write  a  C++  program  to  read  the  ballots  and  count  the  votes  cast for  each 
candidate  using  an  array.  In  case,  a  number  read  is  outside  the range 1 to 5, the ballot should be considered as a ‘spoilt 
ballot’ and the program should also count the number of spoilt ballots.*/

#include <iostream>
using namespace std;
int main()
{
    int i, can[5], ballot, count[5];
    char ch;
    for (i = 0; i <= 5; i++)
    {
        count[i] = 0;
    }
    do
    {
        cout<< "\nEnter the candidate you would like to vote for:";
        cin>> ballot;
        switch (ballot)
        {
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++; 
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        default:
            count[0]++;
        }
        cout << " \ntype 'y' if you want to vote again\n"<<"press any other key if you want to discontinue and cout the result"<<endl<<"entier your answer = ";
        cin >> ch;
    } while (ch == 'y');
    for (i = 1; i <= 5; i++)
    {
        cout << "\nNo:of votes for candidate " << i << "=" << count[i];
    }
    cout << "\n Sploit ballots are " << count[0];
    return 0;
}