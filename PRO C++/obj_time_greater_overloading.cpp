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
    int operator>(Time a)
    {
        min=min+hr*60;
        a.min=a.min+a.hr*60;
        if(min>a.min)
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
    if(t1>t2)
        cout<<"\nTime-1 is greater ";
    else
        cout<<"\nTime-2 is greater ";

    return 0;
}
