#include<iostream>
using namespace std;
int maximum(int,int);
double maximum(double,double);
int maximum(int,int,int);
int main()
{
   cout<<"\nMaximum between 67 and 76 is "<<maximum(67,76);
   cout<<"\nMaximum between 4.55 and 4.7 is "<<maximum(4.55,4.7);
   cout<<"\nMaximum among 35,70 and 17 is "<<maximum(35,70,17);

   return 0;
}
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
double maximum(double a,double b)
{
    if(a>b)
        return a;
    else
        return b ;
}
int maximum(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}
