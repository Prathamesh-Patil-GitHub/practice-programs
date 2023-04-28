#include<iostream>
#include<stdio.h>
using namespace std;
class Address
{
    int pin;
    int plotno;
    char city[10];
    char area[20];
public:
    void readAddress()
    {
        cout<<"\n\n##ENTER ADDRESS INFO.##\n\n";
        cout<<"\nEnter the Pin Code ";
        cin>>pin;
        cout<<"\nEnter the City ";
        fflush(stdin);
        gets(city);
        cout<<"\nEnter the Area ";
        fflush(stdin);
        gets(area);
        cout<<"\nEnter the Plot No ";
        cin>>plotno;
    }
    void printAddress()
    {
        cout<<"\n\nPin Code\t="<<pin;
        cout<<"\n\nCity    \t="<<city;
        cout<<"\n\nArea    \t="<<area;
        cout<<"\n\nPlot No \t="<<plotno;
    }
};
class Person
{
    char name[30];
    char mob[11];
    char profession[20];
    Address add;
public:
    void read()
    {
        cout<<"\nEnter the Name ";
        gets(name);
        cout<<"\nEnter the Mobile No. ";
        fflush(stdin);
        gets(mob);
        cout<<"\nEnter the Profession ";
        fflush(stdin);
        gets(profession);
        add.readAddress();
    }
    void print()
    {
        cout<<"\n\t\t##INFO##";
        cout<<"\n\nName    \t="<<name;
        cout<<"\n\nMobile No.\t="<<mob;
        cout<<"\n\nProfession\t="<<profession;
        add.printAddress();
    }
};
int main()
{
    Person me;

    cout<<"\n\t\t##PROGRAM TO READ INFO AND PRINT INFO ;)##";
    me.read();
    me.print();

    return 0;
}
