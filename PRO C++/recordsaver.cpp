#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char name[30],phn[15],ch;
    fout.open("Records.txt",ios::app);      //OPENING FILE
    do{
        cout<<"\nEnter the name and Phone number ";
        cin>>name>>phn;

        fout<<name<<"\t"<<phn<<endl;        //Inserting data into the file

        cout<<"\nWanna add another ?(Y/N)";
        cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"\nThe records are inserted successfully! ! !";

    fout.close();       //Closing the file
}
