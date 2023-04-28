#include<iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>
using namespace std;
class Employee
{
    private:
        int eno;
        char name[30];
        int age;
        char gender;
        float salary;
        char city[20];
    public:
        void getdata()
        {
            cout<<"\nEnter the Employee ID ";
            cin>>eno;
            cout<<"\nEnter the Employee Name ";
            cin>>name;
            cout<<"\nEnter the age ";
            cin>>age;
            cout<<"\nPress M for Male and Press F for Female ";
            cin>>gender;
            cout<<"\nEnter the salary ";
            cin>>salary;
            cout<<"\nEnter the city ";
            cin>>city;
        }
        void putdata()
        {
            cout<<"\n"<<eno<<"\t\t"<<name<<"\t\t"<<age<<"\t\t"<<gender<<"\t\t"<<salary<<"\t\t"<<city;
        }
        void see()
        {
            cout<<"\nEmp number:-\t"<<eno;
            cout<<"\nName:-\t"<<name;
            cout<<"\nAge:-\t"<<age;
            cout<<"\nGender:-\t"<<gender;
            cout<<"\nSalary:-\t"<<salary;
            cout<<"\nCity:-\t"<<city;
        }
        int eno_return()
        {
            return eno;
        }
        char* name_return()
        {
            return name;
        }
};

int main()
{
    int ch,f,eno;
    Employee obj;
    ifstream fin;
    ofstream fout;
    do{
        system("cls");
        cout<<"\n~~~~~MENU~~~~~";
        cout<<"\n1.Add Employee\n2.Delete Employee\n3.Search Employee\n4.Display All\n5.Exit ";
        cout<<"\n\nEnter the choice ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            fout.open("empdata.bin",ios::app|ios::binary);
            obj.getdata();
            fout.write((char*)&obj,sizeof(obj));
            cout<<"\nEmployee Added Successfully!!!";
            fout.close();
            break;
        case 2:
            fin.open("empdata.bin",ios::in|ios::binary);
            if(fin==NULL)
            {
                cout<<"\nNo records to delete :(";
                break;
            }
            fout.open("emptemp.bin",ios::out|ios::binary);
            cout<<"\nEnter the Employee ID to delete ";
            cin>>eno;
            f=0;
            while(1)
            {
                fin.read((char*)&obj,sizeof(obj));
                if(fin.eof())
                    break;
                if(obj.eno_return()==eno)
                    f=1;
                else
                    fout.write((char*)&obj,sizeof(obj));
            }
            if(f==0)
                cout<<"\nEmp ID not found";
            else
                cout<<"\nEmployee "<<obj.name_return()<<" is deleted from the Records!!! ";
            fin.close();
            fout.close();
            remove("empdata.bin");
            rename("emptemp.bin","empdata.bin");
            break;
        case 3:
            fin.open("empdata.bin",ios::in|ios::binary);
            if(fin==NULL)
            {
                cout<<"\nEnter the records first, to search :(";
            }
            cout<<"\nEnter the Employee ID to search ";
            cin>>eno;
            f=0;
            while(1)
            {
                fin.read((char*)&obj,sizeof(obj));
                if(fin.eof())
                    break;
                if(obj.eno_return()==eno)
                 {
                    cout<<"\nEmployee Found!!! \n\n";
                    obj.see();
                    f=1;
                 }
            }
            if(f==0)
            {
                cout<<"\nThe Employee is not found :(";
            }
            fin.close();
            break;
        case 4:
            fin.open("empdata.bin",ios::in|ios::binary);
            if(fin==NULL)
            {
                cout<<"\nEnter some records to see :(";
                break;
            }
            cout<<"\nEno\t\tName\t\tAge\t\tGender\t\tSalary\t\tCity";
            while(1)
            {
                fin.read((char*)&obj,sizeof(obj));
                if(fin.eof())
                    break;
                obj.putdata();
            }
            fin.close();
            break;
        case 5:
            cout<<"\nThank You for interacting with us :)";
            break;
        default:cout<<"\nIncorrect Choice :(";
        }
        cout<<"\n\nPress Any Key To Continue !!!";
        getch();
    }while(ch!=5);
    return 0;
}
