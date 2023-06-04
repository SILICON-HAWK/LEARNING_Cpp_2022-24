#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class atm
{
    private :
    long int AN;
    int PIN;
    string Name;
    double BAL;
    string MOB;

    public:

    void Data(long int AN1,int PIN2,string Name1,double BAL1, string MOB1)
    {
        AN=AN1;
        PIN=PIN2;
        Name=Name1;
        BAL=BAL1;
        MOB=MOB1;
    }

    long int getan()
    {
        return AN;
    }
    int getpin()
    {
        return PIN;

    }
    string getname()
    {
        return Name;
    }
    string getmob()
    {
        return MOB;
    }
    double getbal()
    {
        return BAL;
    }

    void cash_wi(int amount)
    {
        if ((amount>0) && (amount<BAL))
        {
            BAL = BAL - amount;
            cout<<" please collect cash !!! "<<endl;
            cout<<" available balance is : "<<BAL<<endl;
            getch();
        }
        else
        {
            cout<<" invalid input or insufficient balance XXX";
            getch();
        }

    }
    void update(string oldmob, string new_mob)
    {
        if (oldmob == MOB)
        {
            MOB= new_mob;
            cout<<" Mobile number updated !!! ";
            getch();
        }
        else
        {
            cout<<" invalid input mobile number ";
            getch();
        }
    }
};
int main()
{
    long int accountno=0;
    int Pin3=0;
    int choice=0;
    system("cls");
    atm user;
    user.Data(907210110, 2233, "Boboo", 450000, "9131364480");
do
    {
        system ("cls");
        cout<<" **WELCOME TO THE ATM**"<<endl;
        cout<<" ENTER ACCOUNT NUMBER:- ";
        cin>>accountno;
        cout<<endl<<"ENTER PIN:- ";
        cin>>Pin3;





        if ((accountno==user.getan()) && (Pin3==user.getpin()))
        {
            do
            {

                int amount=0;
                string oldmob;
                string new_mob;
                system ("cls");
                cout<<" **WELCOME TO THE ATM**"<<endl;
                cout<<" SELECT OPTIONS"<<endl;
                cout<<" 1.CHECK BALANCE :- "<<endl;
                cout<<" 2.CASH WITHDRAW :- "<<endl;
                cout<<" 3.SHOW USER DETAILS :-"<<endl;
                cout<<" 4.UPDATE MPBILE NUMBER :-"<<endl;
                cout<<" 5.EXIT!!! "<<endl;
                cout<<" ENTER YOUR CHOICE ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    {
                        cout<<" your account balance is  "<<user.getbal();
                        getch();
                        break;
                    }
                    case 2:
                    {
                        cout<<" enter amount to be withdraw ";
                        cin>>amount;
                        user.cash_wi( amount);
                        break;
                    }
case 3:
                    {
                        cout<<" user details are !!!!"<<endl;
                        cout<<"   account number :- "<<user.getan()<<endl;
                        cout<<"  account holder name :-"<<user.getname()<<endl;
                        cout<<"  account balance is :-"<<user.getbal()<<endl;
                        cout<<"  account holder's mobile number :- "<<user.getmob()<<endl;
                        getch();
                        break;
                    }
                    case 4:
                    {
                        cout<<" Enter your current mobile number ";
                        cin>>oldmob;
                        cout<<" Enter the new mobile number ";
                        cin>>new_mob;
                        user.update(oldmob, new_mob);
                        break;
                    }
                    case 5:
                    {
                        exit(0);
                        break;
                    }
                    default:
                    {
                        cout<<" enter valid data !!!!"<<endl;
                        break;
                    }

                }


            }
            while(1);

        }
        else
        {
            cout<<" invalid input or user not found !!!";
        }



    }
    while(1);
    return 0;

}