#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int x,y;
    cout<<"Enter two values";
    cin>>x>>y;
    cout<<"\nBefore using swap function";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
    swap(x,y);
    cout<<"\n\nAfter using swap function";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
    return 0;
}
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
