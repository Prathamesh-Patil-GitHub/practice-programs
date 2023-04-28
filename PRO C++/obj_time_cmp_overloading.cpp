#include<iostream>
using namespace std;
class Time
{
    int hr,min;
    public:
    void read()
    {
        cout<<"\nEnter the time in hr and min ";
        cin>>hr>>min;
    }
    int operator==(Time t)
    {
        if(hr==t.hr && min==t.min)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1,t2;
    t1.read();
    t2.read();
    if(t1==t2)      //t1.operator(t2);
        cout<<"\nTimes are Equal";
    else
        cout<<"\nTimes are Not Equal";

    return 0;
}
