//Assume that a bank maintains two kind of accounts for customers, one called an savings account and the other as current account. The savings account provides interest and the current account doesn't provide interest. Current account holders should also maintain a minimum balance and if the balance falls below this level, a  service charge is imposed. Create a class account that stores customer name, account number and type of account. Form this, drive the classes Saving and Current to make them more specific to their requirements. Include necessary member function in order  achieve the following tasks:
// a) Accepts deposit from a customer and update the balance.
// b) Display the balance.
// c) Compute and deposit interest.
// d) Permit withdrawal and update the balance.
// e) Check for the minimum balance, impose penalty, necessary, and update balance.

/*
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;
class Account
{
protected:
    char name[20];
    int AccNo;
    char AccType;
public:
    void GetAccountInfo()
    {
        cout<<"\n Enter Name : ";
        cin >> name;
        cout<<"\n Enter Account No: ";
        cin>> AccNo;
        cout<<"\n Enter Account Type ' c ' for current and ' s ' s for saving : ";
        cin>> AccType;
    }
    void DisplayAccountInfo()
    {
        cout<<"Name : "<< name<<endl;
        cout<<"Account No : "<< AccNo <<endl;
        cout<<"Account Type : "<< AccType << endl;
    }
};
class Current: public Account
{
    float balance;
public:
    void DisplayBalance()
    {
        cout<<endl<<"Your saving balance is : "<< balance;
    }
    void Deposit()
    {
    float amount;
    cout<<endl<<" Enter deposit ammount : ";
    cin >>amount;
    balance = balance + amount;
    }
    void Withdraw()
    {
        float amount;
        cout<<" Enter amount to be With Drawed: ";
        cin >> amount;
        if(amount>balance)
        {
            cout<<" No Sufficient Balance ..... ";
        }
        else
            {
                balance = balance - amount;
            {
            if(balance<10000)
            {
                cout<<" You must have at least Rs. 1000";
                cout<<endl<<" !0% penalty will be imposed .... ";
            }}}
    }
};
class Saving: public Account
{
    static float balance;
public:
    void DisplayBalance()
    {
        cout<<endl<<"Your current Balance is  :" << balance;
    }
    void Deposit()
    {
        float amount;
        cout<<endl<<" Enter Deposit amount : ";
        cin >> amount;
        balance = balance + amount;
        DisplayBalance();
    }
    void WithDraw()
    {
        float amount;
        cout<<" enter amount to9 be withdrawed: ";
        cin >> amount;
        if(amount > balance)
            cout<<"\n No sufficient balance ...... ";
        else
            balance = balance - amount;
        DisplayBalance();

    }
};

void Menu()
{
    cout<<endl<<" *************** Menu *************** ";
    cout<<endl<<" 1-----> Deposit Amount. ";
    cout<<endl<<" 2-----> Withdraw Amount. ";
    cout<<endl<<" 3-----> Display Balance. ";
    cout<<endl<<" 4-----> Display Account Information. ";
    cout<<endl<<" 5-----> Exit ";
}

int main()
{
    Saving sav;
    Current cur;
    char AccType;
    int option;

    cout<<" Enter Account Tye=pe : ";
    cin >> AccType;
    if(AccType == 'c')
    {
        while(1)
        {
            Menu();
            cin>>option;
            switch(option)
            {
            case 1:
                cur.Deposit();
                break;
            case 2:
                cur.Withdraw();
            case 3:
                cur.DisplayBalance();
                break;
            case 4:
                cur.DisplayAccountInfo();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout<<" ********** Invalid Option ********** ";
            }
        }
    }
    else
    {
        while(1)
        {
            Menu();
            cin>>option;
            switch(option)
            {
            case 1:
                sav.Deposit();
                break;
            case 2:
                sav.WithDraw();
                break;
            case 3:
                sav.DisplayBalance();
                break;
            case 4:
                sav.DisplayAccountInfo();
                break;
            case 5:
                exit(1);
            default:
                cout<< " Invalid Option..... ";

            }
        }
    }



    return 0;
}

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

class Account
{
    char name[10];
    int acc_no;
    char acc_type;
public:
    void GetAccount()
    {
        cout<<"\n Enter Name : ";
        cin >> name;
        cout<<"\n Enter Account Number  : ";
        cin >> acc_no;
        cout<<"\n Enter Account Type : ['c' for Current & 's' for Saving ] ";
        cin>> acc_type;
    }
    void DisplayAccount()
    {
       cout<< "\n Name         : "<< name;
       cout<< "\n Account No   : "<< acc_no;
       cout<< "\n Account Type : "<< acc_type;
    }
};
class Current: public Account
{
     float balance;
public:
    void DisplayBalance()
    {
        cout<<"\n Your Current Balance is : "<< balance;
    }
    void Deposit()
    {
        float deposit;
        cout<<"\n Enter Deposit Amount  : ";
        cin>> deposit;
        balance += deposit;
        cout<<"\n Now Your Current Balance is  : " << balance;
    }
    void WithDraw()
    {
        float amount;
        cout<<"\n Enter Amount to WithDraw : ";
        cin >> amount;
        if(balance < amount)
        {
            cout<<"\n Your Balance is Not sufficient . . . ";
        }
        else
        {
            balance = balance - amount;
            if(balance<1000)
            {
                cout<<"\n You must have 1000 in your account. ";
                cout<<"\n      Imposing 10% Charge     : "<< balance * 0.1 ;
                balance -= balance* 0.1;
            }
            cout<<"\n      You've WithDrawn        : " << amount;
            cout<<"\n Now, Your Current Balance is : " << balance;
        }
    }
};
class Saving: public Account
{
    float balance;
public:
    void DisplayBalance()
    {
        cout<<"\n Your Current Balance is : "<< balance;
    }
    void Deposit()
    {
        float amount;
        cout<<"\n Enter Amount To Deposit : ";
        cin >> amount;
        balance += amount;
        cout<<"\n Your current amount is  : "<< balance ;
    }
    void WithDraw()
    {
        float amount;
        cout<<"\n Enter Amount To WithDraw  : ";
        cin >> amount;
        if(amount > balance)
        {
            cout<< "\n ***** Insufficient Balance ***** ";
        }
        else
        {
            cout<<"\n You've withdrawn              : "<< amount;
            cout<<"\n Now, Your Current Balance is  : "<< balance;
        }

    }
};

inline void Menu()
{
    cout<<"\n *********** Welcome To Our Service *************** \n";
    cout<<"\n 1 ---> Display   Amount. ";
    cout<<"\n 2 ---> Deposit   Amount. ";
    cout<<"\n 3 ---> WithDraw  Amount. ";
    cout<<"\n 4 ---> Exit. ";
}
int main()
{
    Current Cur;
    Saving Sav;
    char key;
    char acc_type;
    cout<<"\n Do You Have Account press 'y' for Yes & 'n' for No : ";
    cin >> key;
    if (key == 'y')
    {
        goto here;
    }
    else if(key == 'n')
        {
            cout<<"\n Which Account You Want to Open : \n 1. Saving \n 2.Current ";
            cin>>key;
            {
                if(key=='1')
                    Sav.GetAccount();
                else if(key == '2')
                    Cur.GetAccount();
                else
                    cout<<"\n Invalid Input. ";
            }
        }

    here:
    cout<<"\n Enter Account Type: ['c' for Current & 's' Saving] : ";
    cin>> acc_type;

    if(acc_type == 'c')
    {
        while(key!= '4')
        {
            Menu();
            cout<<"\n Enter Key : ";
            cin >> key;
            switch(key)
            {
            case '1':
                Cur.DisplayBalance();
                break;
            case '2':
                Cur.Deposit();
                break;
            case '3':
                Cur.WithDraw();
                break;
            default:
                cout<<"\n ***** Invalid Input **** \n ";
            }}}
        else if(acc_type == 's')
        {
            //Sav.GetAccount();
            while(key != '4')
            {
                Menu();
                cout<<"\n Enter Key : ";
                cin >>key;
                switch(key)
                {
                case '1':
                    Sav.DisplayBalance();
                    break;
                case '2':
                    Sav.Deposit();
                    break;
                case '3':
                    Sav.WithDraw();
                    break;
                default:
                    cout<<"\n ***** Invalid Option **** ";
                }
            }
        }

        cout<<"\n\n***** :) THANKS FOR VISITING :) ****** ";

        return 0;
}


