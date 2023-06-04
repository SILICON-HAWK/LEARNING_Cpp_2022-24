/*LAB ASSIGNMENT MADE BY ABHIJEET A S. 21BCE10074
Design   a   class   to represent   a   bank   account.   
Include   the   following members.
Data Members
     Name of the depositor
     Account number
     Type of account
     Balance amount in the account
Methods
     To assign initial values
     To deposit an amount
     To withdraw an amount after checking balance
     To display the name and balance Incorporate a constructor to provide initial values.*/

#include<iostream>
#include<string>
using namespace std;
class bank_account{
    public:
    string name, type_of_account;
    public:
    int account_number;
    float account_balance;
    
    void info(){
        cout<<"input your name :: ";
        getline(cin,name);

        cout<<"input your account_number :: ";
        cin>>account_number; 
        
        cout<<"input your accout type :: ";
        cin>>type_of_account;
        
        cout<<"input your bank balance :: ";
        cin>>account_balance;
        
        cout<<"\n \n";
    };
    
    void display_info(){
        cout<<"account holder name is = "<<name<<endl;
        cout<<"account number = "<<account_number<<endl;
        cout<<"account type = "<<type_of_account<<endl;
        cout<<"your account balance = "<<account_balance<<endl;
    };
};

class bank_functions : public bank_account
{
public:
    int choice_variable; // this variable takes user input the decide what part of the code to execute next
    float amount_change;
    // this is the methord to print the options that the customer can take

    void holder_choice()
    {
        do
        {
            cout << "select the action you want to take = " << endl;
            cout << "select 0 to exit" << endl;
            cout << "select 1 to deposit a amount" << endl;
            cout << "select 2 if you want to withdraw money" << endl;
            cout << "select 3 if you would like to check your profile" << endl;

            cin >> choice_variable;
            switch (choice_variable)
            {
            case 0:
                break;

            case 1:{
                cout << "what amount would you like to deposit = ";
                cin >> amount_change;
                account_balance += amount_change;

                cout << "your total balance = " << account_balance <<endl;
                break;

            case 2:
                cout << "what amount would you like to withdraw \n";
                cin >> amount_change;

                account_balance -= amount_change;

                cout << "your final balance after withdrawl =  \n";
                break;

            case 3:
                cout << "your profile is as follows \n";
                cout << name << "\n type of account = " << type_of_account;
                cout << "your account balance = " << account_balance << endl;
                break;

            default:
                cout << "error wrong input select again \n";
                break;
            }
            }
        }while(choice_variable<4);
    }
};

int main(){

    bank_functions f;
    f.info();
    f.display_info();
    f.holder_choice();
}