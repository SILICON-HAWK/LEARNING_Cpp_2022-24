#include <iostream>
#include <string>
using namespace std;
class bank_account
{
public:
    string name;

public:
    int account_number, type_of_account;
    int account_balance;
    int* pointerAccountBalance = &account_balance;

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
            if (type_of_account == 1);
            break;
            if (type_of_account == 2);
            break;
        }

        account_balance = 0;
        while (account_balance<1000)
        {
            cout <<"input your account balance"<<endl;
            cin>>account_balance;
            if(account_balance<1000){
                cout<<"your account balance is less than minimum, please make the balance above Rs 1000"<<endl;
            };
        }
        // cout << "input your bank balance :: ";           changed this part into a *while* loop to check minimum balance 
        // cin >> account_balance;

        cout << endl;
    };

    void display_info()
    {
        cout << "account holder name is = " << name << endl;    
        cout << "account number = " << account_number << endl;
        if (type_of_account ==1){
            cout<<"your account type = savings"<<endl;
        }
        if (type_of_account ==2){
            cout<<"your account type = current"<<endl;
        }
        cout << "your account balance = " << *pointerAccountBalance << endl;
    };
};


/* a savings account is mostly used by retail customers for their day to day uses,
the account holder gets a fixed ammount of interest in this type of accounts
private banks have a minimum balance policy where as public banks dont in general*/
class bankFunctionSaving : public bank_account
{
private:
    int ChoiceVariable, interestTimePeriod;
    float interestEarned;
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
                cout << "what amount would you like to deposit = "<<endl;
                cin >> amount_change;
                account_balance += amount_change;                           //formula to check amount changed after a deposit

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
                cout << name << "\n type of account = " << type_of_account<<endl;
                cout << "your account balance = " << account_balance << endl;
            
                return holderChoice();
            }

            if (ChoiceVariable == 4)
            {
                cout<<"how long have you held this account type in number of months"<<endl;
                cin >> interestTimePeriod;

                interestEarned = interestTimePeriod*(*pointerAccountBalance);        //formula to check amount changed after a transfer
                cout<<"interest earned by holder = "<<interestEarned<<endl;
            }

            else (ChoiceVariable);
            {
                cout << "wrong input select again"<<endl;     //default output if you dont input a valid value in ChoiceVariable
                return holderChoice();
            }
        }
    }
};


class bankFunctionCurrent : public bank_account
{
private:
    int choiceVariable1;

    public:
    float amount_change;
    void holderChoice1()
    {
        cout << "select the action you want to take = " << endl;
        cout << "select 0 to exit" << endl;
        cout << "select 1 to show profile"<<endl;
        cout << "select 2 to make a transfer"<<endl;

        cin>>choiceVariable1;

        if(choiceVariable1 == 0)
            {
            return;
            }
        if(choiceVariable1 == 1)
            {
            cout << "your profile is as follows \n";
            cout << name << "\n type of account = current"<<endl;
            cout << "your account balance = 10000"<< endl;
            return holderChoice1();
            }
        if(choiceVariable1 == 2)
            {
                cout << "what amount would you like to transfer \n";
                cin >> amount_change;

                account_balance -= amount_change;

                cout << "your final balance after transfer = " << account_balance << endl;

                return holderChoice1();
            }
    }
};


int main(){
    bankFunctionSaving flow;
    bankFunctionCurrent current;
    flow.info();
    flow.display_info();
    if (flow.type_of_account == 1){
        flow.holderChoice();};
    if (flow.type_of_account == 2){ 
        current.holderChoice1();};
    return 0;
}