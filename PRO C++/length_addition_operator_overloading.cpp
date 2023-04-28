#include<iostream>
using namespace std;
class Length
{
    int foot,inch;
    public:
        void read()
        {
            cout<<"\nEnter the feet value ";
            cin>>foot;
            cout<<"\nEnter inch value ";
            cin>>inch;
        }
        void display()
        {
            cout<<"\n"<<foot<<"'"<<inch<<"\"";
        }
        friend Length operator+(Length,Length);
};
int main()
{
    Length l1,l2,l3;

    l1.read();
    l1.display();
    l2.read();
    l2.display();
    l3=l1+l2;   //operator+(l1,l2)
    cout<<"\n\nAddition is:";
    l3.display();

    return 0;
}
Length operator+(Length l1,Length l2)
{
    Length t;

    t.inch=l1.inch+l2.inch;
    t.foot=l1.foot+l2.foot+t.inch/12;
    t.inch%=12;
    return t;
}
