#include<iostream>
using namespace std;
class TollBooth
{
    int pcar,npcar;
    float payment;
    public:
        TollBooth()
        {
            pcar=0;
            npcar=0;
            payment=0;
        }
        void paycar()
        {
            pcar++;
            payment+=50;
        }
        void nopaycar()
        {
            npcar++;
        }
        void display()
        {
            cout<<"\nTotal Payed Cars Passed="<<pcar;
            cout<<"\nTotal Non-Payed cars Passed="<<npcar;
            cout<<"\nTotal Money Collected="<<payment;
        }
};
int main()
{
    TollBooth t1;
    int choice;
    do
    {
        cout<<"%%%%MENU%%%%";
        cout<<"\n1.Payed Car\n2.Non-Payed car\n3.Display Today's Collection\n4.Exit";
        cout<<"\nEnter your choice ";
        cin>>choice;
        switch(choice)
        {
            case 1:t1.paycar();break;
            case 2:t1.nopaycar();break;
            case 3:t1.display();break;
            case 4:cout<<"\nGood Bye";break;
            default :cout<<"\nInvalid Input!!!";break;
        }
        cout<<"\n\n\n\n\n";
    }while(choice!=4);
}

