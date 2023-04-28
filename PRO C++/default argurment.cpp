#include<iostream>
using namespace std;
int pow(int x,int y=2);
int main()
{
    int n1,n2;
    n1=pow(2,5);
    cout<<"\nWith both parameters, 2 as base and 5 as index result = "<<n1;
    n2=pow(2);
    cout<<"\nOnly with one parameter i.e. 2 base as and square of 2 = "<<n2;
    return 0;
}
int pow(int a,int b)
{
    int i,pow=1;
    for(i=1;i<=b;i++)
        pow=pow*a;
    return pow;
}
