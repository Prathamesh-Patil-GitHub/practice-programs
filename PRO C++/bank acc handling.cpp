#include<iostream>
using namespace std;
class BankAccount
{
    private:
        int ano;
        char name[30];
        float balance;
        char acctype;
        int password;
    public:
        void getdata()
        {
            cout<<"********Opening Accounts********";
            cout<<"\nEnter the Account Number ";
            cin>>ano;
            cout<<"\nEnter the Name of the Account Holder(without space) ";
            cin>>name;
            cout<<"\nPress 'C'(Capital Only!) if the Account is Current type \nPress 'S'(Capital Only!) if the Account is Saving type ";
            cin>>acctype;
            cout<<"\nSet the password(Numbers) ";
            cin>>password;
            cout<<"\nEnter the opening Balance ";
            cin>>balance;
        }
        void withdraw()
        {
            int amt;
            cout<<"\nEnter the Amount to Withdraw ";
            cin>>amt;
            if(amt<balance)
            {
                balance=balance-amt;
                cout<<"\nThe Amount is Withdrawn!!!";
            }
            else
                cout<<"\nInsufficient Balance!!!";
        }
        void deposit()
        {
            int amt;
            cout<<"\nEnter the Amount to deposit ";
            cin>>amt;
            balance=balance+amt;
            cout<<"\nThe Amount is Deposited!!!";
        }
        void putdata()
        {
            cout<<"\nAcc. No. :   "<<ano;
            cout<<"\nName     :   "<<name;
            cout<<"\nAcc. Type:   "<<(acctype=='C'?"Current":"Saving");
            cout<<"\nBalance  :   "<<balance;
        }
        int returnano()
        {
            return ano;
        }
        int returnpass()
        {
            return password;
        }
};
int main()
{
    BankAccount acc[10];
    int i,choice,tempa,pass;
    for(i=0;i<10;i++)
        acc[i].getdata();
    do
    {
        cout<<"\n\n\n\n\n";
        cout<<"\n$$$$MENU$$$$";
        cout<<"\n1.Display Account Information\n2.Withdraw Money\n3.Deposit Money\n4.Exit";
        cout<<"\nEnter your choice ";
        cin>>choice;
        if(choice>=1 && choice<=3)
        {
            cout<<"\nEnter the Account Number in which you want to proceed ";
            cin>>tempa;
            for(i=0;i<10;i++)
            {
                if(tempa==acc[i].returnano())
                break;
            }
            cout<<"\nEnter the password ";
            cin>>pass;
            if(pass!=acc[i].returnpass())
                {
                    cout<<"\nThe Password is Incorrect !!!";
                    break;
                }
            switch(choice)
            {
                case 1:acc[i].putdata();break;
                case 2:acc[i].withdraw();break;
                case 3:acc[i].deposit();break;
            }
            cout<<"\nTHANK YOU FOR INTERACTING WITH US{<*>_<*>}";
        }
        else if(choice==4)
            cout<<"\nTHANK YOU FOR INTERACTING WITH US{<*>_<*>}";
        else
            cout<<"\nInvalid Input!!!";
    }while(choice!=4);
    return 0;
}
