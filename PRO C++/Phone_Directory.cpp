#include<iostream>
#include<fstream>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    int ch,f;
    char name[30],ph[15],str[30];
    do{
        system("cls");
        cout<<"\n####%%%%MENU%%%%####";
        cout<<"\n1.Add Contact\n2.Search Contact\n3.Delete Contact\n4.Display All \n5.Exit";
        cout<<"\nEnter the choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                fout.open("Contacts.dat",ios::app);
                cout<<"\nEnter the Name and Phone no.: ";
                cin>>name>>ph;
                fout<<name<<"\t"<<ph<<"\n";
                cout<<"\nRecords Added!!!";
                fout.close();
                break;
            case 2:
                fin.open("Contacts.dat");
                if(fin==NULL)
                {
                    cout<<"\nAdd some contacts to search :(";
                    break;
                }
                cout<<"\nEnter the name to search: ";
                cin>>str;
                f=0;
                while(1)
                {
                    fin>>name>>ph;
                    if(fin.eof())
                        break;
                    if(!stricmp(name,str))
                    {
                        cout<<"\nContact Found!!!";
                        cout<<"\n\nName:\t"<<name;
                        cout<<"\nPhone:\t"<<ph;
                        f=1;
                    }
                }
                if(f==0)
                    cout<<"\nContact Not Found :(";
                fin.close();
                break;
            case 3:
                fin.open("Contacts.dat");
                fout.open("temp.dat");
                cout<<"\nEnter the name to Delete the Contact: ";
                cin>>str;
                f=0;
                while(1)
                {
                    fin>>name>>ph;
                    if(fin.eof())
                        break;
                    if(stricmp(name,str))
                    {
                        fout<<name<<"\t"<<ph<<"\n";
                    }
                    else
                        f=1;
                }
                if(f==0)
                    cout<<"\nNo such Contact Exist :(";
                else
                    cout<<"\n"<<str<<" is deleted from the Contacts!!! ";
                fin.close();
                fout.close();
                remove("Contacts.dat");
                rename("temp.dat","Contacts.dat");
                break;
            case 4:
                fin.open("Contacts.dat");
                if(fin==NULL)
                {
                    cout<<"\nAdd some contacts to display :(";
                    break;
                }
                cout<<"\nName\tPhone";
                while(1)
                {
                    fin>>name>>ph;
                    if(fin.eof())
                        break;
                    cout<<"\n"<<name<<"\t"<<ph;
                }
                fin.close();
                break;
            case 5:
                cout<<"\nSee ya later!!!";break;
            default:
                cout<<"\nChoose the correct choice :(";
        }
        getch();

    }while(ch!=5);

    return 0;
}
