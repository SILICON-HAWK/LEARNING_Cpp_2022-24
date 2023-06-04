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
     To display the name and balance Incorporate a constructor to provide initial values.
     make 2 types of account a savings account and a current account*/
#include <iostream>
#include <string>
using namespace std;
class bank_account
{
public:
    string name;

public:
    int account_number, type_of_account;
    float account_balance;
    float* pointerAccountBalance = &account_balance;

    void info()
    {
        cout << "input your name :: ";
        getline(cin, name);

        cout << "input your account_number :: ";
        cin >> account_number;

        while (type_of_account != 1 && 2)
        {
            cout << "select what type of account you own \n 1) SAVING \n 2) CURRENT" << endl;
            cin >> type_of_account;
            if (type_of_account != 1 && 2)
            {
                cout << "error select again, wrong account type selected";
                continue;
            }
        }

        while (account_balance < 1000)
        {
            cout << "input your account balance" << endl;
            cin >> account_balance;
        }
        // cout << "input your bank balance :: ";           changed this part into a *while* loop to check minimum balance
        // cin >> account_balance;

        cout << endl;
    };

    void display_info()
    {
        cout << "account holder name is = " << name << endl;
        cout << "account number = " << account_number << endl;
        if (type_of_account==1){
            cout<< "your account type = savings"<<endl;
        }
        if (type_of_account==2){
            cout<<"your account type = current"<<endl;
        }
        cout << "your account balance = " << account_balance << endl;
    };
};

/* a savings account is mostly used by retail customers for their day to day uses,
the account holder gets a fixed ammount of interest in this type of accounts
private banks have a minimum balance policy where as public banks dont in general*/
class bankFunctionSaving : public bank_account
{
private:
    int ChoiceVariable;
    float interestEarned, interestTimePeriod;

public:
    float amount_change;
    void holderChoice()
    {

        {
            cout << "select the action you want to take = " << endl;
            cout << "select 0 to exit" << endl;
            cout << "select 1 to deposit a amount" << endl;
            cout << "select 2 if you want to withdraw money" << endl;
            cout << "select 3 if you would like to check your profile" << endl;
            cout << "select 4 to see the amount of interest earned"<<endl;
            cin >> ChoiceVariable;

            if (ChoiceVariable == 0)
            {
                return;
            }

            if (ChoiceVariable == 1)
            {
                cout << "what amount would you like to deposit = ";
                cin >> amount_change;
                account_balance += amount_change; // formula to check amount changed after a deposit

                cout << "your total balance = " << account_balance << endl;
                return holderChoice();
            }
            if (ChoiceVariable == 2)
            {
                cout << "what amount would you like to withdraw \n";
                cin >> amount_change;

                account_balance -= amount_change;

                cout << "your final balance after withdrawl = " << account_balance << endl;

                return holderChoice();
            }
            if (ChoiceVariable == 3)
            {
                cout << "your profile is as follows \n";
                cout << name << "\n type of account = " << type_of_account;
                cout << "your account balance = " << account_balance << endl;

                return holderChoice();
            }

            if (ChoiceVariable == 4)
            {
                cout << "how long have you helt this account type in number of months";
                cin >> interestTimePeriod;

                interestEarned = interestTimePeriod * (*pointerAccountBalance); // formula to check amount changed after a transfer
                cout << "interest earned by holder = " << interestEarned;
            }

            else
                (ChoiceVariable);
            {
                cout << "wrong input select again"; // default output if you dont input a valid value in ChoiceVariable
                return holderChoice();
            }
        }
    }
};

/* a current account is a account that us owned by a business and used for conducting large transactions
the holder of the account does not recieve any interest on the money deposited,
the minimum balance of the generally higher than savings account*/
class bankFunctionCurrent : public bank_account
{
private:
    int choiceVariable1;

public:
    float amount_change;
    void holderChoice1()
    {
        {
            cout << "select the action you want to take = " << endl;
            cout << "select 0 to exit" << endl;
            cout << "select 1 to show profile"<<endl;
            cout << "select 2 to make a transfer"<<endl;

            if (choiceVariable1 == 0)
            
            if (choiceVariable1 == 1)
                cout << "your profile is as follows \n";
            cout << name << "\n type of account = " << type_of_account<<endl;
            cout << "your account balance = " << account_balance << endl;
                return holderChoice1();

            if (choiceVariable1 == 2)
                cout << "select amount to transfer"<<endl;
            cin >> amount_change;
            account_balance -= account_balance - amount_change;
            cout << "balance after making a transfer is = " << account_balance<<endl;
            return holderChoice1();
        }
    }
};

class ControlFlow : public bankFunctionSaving, public bankFunctionCurrent
{
public:
    void FuntionCall()
    {
        if (bankFunctionSaving::type_of_account == 1)
            ;
        bankFunctionSaving::holderChoice;

        if (bankFunctionSaving::type_of_account == 2)
            ;
        bankFunctionCurrent::holderChoice1;
    }
};

int main()
{
    bankFunctionSaving flow;
    bankFunctionCurrent current;
    flow.info();
    flow.display_info();
    if (flow.type_of_account == 1)
    {
        flow.holderChoice();
    };
    if (flow.type_of_account == 2)
    {
        current.holderChoice1();
    };
    return 0;
}