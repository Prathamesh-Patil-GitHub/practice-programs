#include<iostream>
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
        int echeck;
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
            echeck=eno;
        }
        void putdata()
        {
            cout<<"\n"<<eno<<"\t"<<name<<"\t"<<age<<"\t"<<gender<<"\t"<<salary<<"\t"<<city;
        }
};
int main()
{
    Employee e[3];
    int i,ncheck;

    for(i=0;i<3;i++)
        e[i].getdata();
    cout<<"\nEnter the Emp. ID to search ";
    cin>>ncheck;
    cout<<"\nEmp.ID\tName\tAge\tGender\tSalary\tcity";
    for(i=0;i<3;i++)
    {
        if(e[i].echeck==ncheck)
            e[i].putdata();
    }

    return 0;
}
