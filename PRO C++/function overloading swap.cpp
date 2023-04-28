#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int&,int&);
void swap(float&,float&);
void swap(char&,char&);
int main()
{
    int x,y;
    cout<<"\nEnter two integer values";
    cin>>x>>y;
    cout<<"\nValues before swapping";
    cout<<"\nFirst value = "<<x<<"\nSecond value ="<<y;
    swap(x,y);
    cout<<"\nValues after swapping";
    cout<<"\nFirst value = "<<x<<"\nSecond value ="<<y;
    float i,j;
    cout<<"\nEnter two float values";
    cin>>i>>j;
    cout<<"\nValues before swapping";
    cout<<"\nFirst value = "<<i<<"\nSecond value ="<<j;
    swap(i,j);
    cout<<"\nValues after swapping";
    cout<<"\nFirst value = "<<i<<"\nSecond value ="<<j;
    char a,b;
    cout<<"\nEnter two character values";
    cin>>a>>b;
    cout<<"\nValues before swapping";
    cout<<"\nFirst value = "<<a<<"\nSecond value ="<<b;
    swap(a,b);
    cout<<"\nValues after swapping";
    cout<<"\nFirst value = "<<a<<"\nSecond value ="<<b;

    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(float &a,float &b)
{
    float temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(char &a,char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}
