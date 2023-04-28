#include<iostream>
using namespace std;
class Student
{
protected:
    int rno;
    char name[30];
public:
    void get()
    {
        cout<<"\nEnter the roll no. ";
        cin>>rno;
        cout<<"\nEnter the name of the student ";
        cin>>name;
    }
    void put()
    {
        cout<<"\nRoll No.  ="<<rno;
        cout<<"\nName      ="<<name;
    }
};
class Test:virtual public Student
{
protected:
    int score1,score2;
public:
    void gettestdata()
    {
        cout<<"\nEnter Score 1 ";
        cin>>score1;
        cout<<"\nEnter Score 2 ";
        cin>>score2;
    }
    void puttestdata()
    {
        cout<<"\nScore1    ="<<score1;
        cout<<"\nScore2    ="<<score2;
    }
};
class Sports:virtual public Student
{
protected:
    int credits;
public:
    void getsportsdata()
    {
        cout<<"\nEnter the Credits ";
        cin>>credits;
    }
    void putsportsdata()
    {
        cout<<"\nS.Credits ="<<credits;
    }
};
class Result:public Test,public Sports
{
    int total;
    float avg;
public:
    void getdata()
    {
        get();
        gettestdata();
        getsportsdata();
    }
    void putdata()
    {
        put();
        puttestdata();
        putsportsdata();
        total=score1+score2+credits;
        avg=total/2.0;
        cout<<"\nTotal     ="<<total;
        cout<<"\nPercentage="<<avg;
    }
};
int main()
{
    Result r1;

    r1.getdata();
    r1.putdata();

    return 0;
}
