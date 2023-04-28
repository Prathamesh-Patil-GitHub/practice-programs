#include<iostream>
using namespace std;
class Sample2;  //Previous Declaration For Friend Function
class Sample1   //Class Sample1
{
    int x;
    public:
        void read()
        {
            cout<<"\nEnter the value for Sample1::x ";
            cin>>x;
        }
        void display()
        {
            cout<<"\nSample1::x="<<x;
        }
        friend void Swap(Sample1&,Sample2&);    //Friend
};
class Sample2   //Class Sample2
{
    int y;
    public:
        void read()
        {
            cout<<"\nEnter the value for Sample2::y ";
            cin>>y;
        }
        void display()
        {
            cout<<"\nSample2::y="<<y;
        }
        friend void Swap(Sample1&,Sample2&);    //Friend
};
int main()
{
    Sample1 s1;
    Sample2 s2;

    s1.read();
    s2.read();
    cout<<"\nBefore Swapping ";
    s1.display();
    s2.display();
    Swap(s1,s2);
    cout<<"\nAfter Swapping ";
    s1.display();
    s2.display();

    return 0;
}
void Swap(Sample1 &s1,Sample2 &s2)  //Swapping Logic
{
    int temp;
    temp=s1.x;
    s1.x=s2.y;
    s2.y=temp;
}
