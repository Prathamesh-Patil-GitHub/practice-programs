#include<iostream>
using namespace std;
class STUDENT
{
    private:
        int roll;
        char name[30];
        int marks[3],total;
        float avg;
    public:
        void read()
        {
            int i;
            cout<<"\nEnter the roll number of student ";
            cin>>roll;
            cout<<"\nEnter the name of student ";
            cin>>name;
            cout<<"\nEnter the marks student got in three subjects";
            for(i=0;i<3;i++)
                cin>>marks[i];
        }
        void compute()
        {
            int i;
            total=0;
            for(i=0;i<3;i++)
                total=total+marks[i];
            avg=total/3.0;
        }
        void display()
        {
            cout<<"\nThe name of student is "<<name;
            cout<<"\nThe roll number is "<<roll;
            cout<<"\nTotal marks of student= "<<total;
            cout<<"\nThe average of the student marks= "<<avg;
        }
};
int main()
{
   STUDENT s1;

   s1.read();
   s1.compute();
   s1.display();

    return 0;
}
