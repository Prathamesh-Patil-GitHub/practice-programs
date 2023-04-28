#include<iostream>
using namespace std;
int power(int,int);
float power(float,int);
int main()
{
    int x,y;
    float z;

    cout<<"Enter base and power in integer";
    cin>>x>>y;
    cout<<"\n"<<x <<"raised to "<<y<<" is "<<power(x,y);

    cout<<"\nEnter float base and integer power";
    cin>>z>>y;
    cout<<"\n"<<z<<" raised to "<<y<<" is "<<power(z,y);

    return 0;
}
int power(int a,int b)
{
    int i,pow=1;
    for(i=1;i<=b;i++)
        pow=pow*a;
    return pow;
}
float power(float a,int b)
{
    int i;
    float pow=1;
    for(i=1;i<=b;i++)
        pow=pow*a;
    return pow;
}
