#include<iostream>
using namespace std;
class Time
{
    int hr,min;
    public:
        void read()
        {
            cout<<"\nEnter hours ";
            cin>>hr;
            cout<<"\nEnter minutes ";
            cin>>min;
        }
        void display()
        {
            cout<<"\n"<<hr<<":"<<min;
        }
        friend Time add(Time a,Time b);
};
int main()
{
    Time t1,t2,t3;
    t1.read();
    t1.display();
    t2.read();
    t2.display();
    t3=add(t1,t2);
    cout<<"\nAddition of time is:";
    t3.display();
    return 0;
}
Time add(Time a,Time b)
{
    Time t;
    t.min=a.min+b.min;
    t.hr=a.hr+b.hr+(t.min/60);
    t.min=t.min%60;
    return t;
}


