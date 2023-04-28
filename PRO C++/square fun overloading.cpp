#include<iostream>
using namespace std;
int square(int);
double square(double);
int main()
{
    cout<<"\nSquare of 5 = "<<square(5);
    cout<<"\nSquare of 4.5 = "<<square(4.5);
    return 0;
}
int square(int a)
{
    return (a*a);
}
double square(double a)
{
    return (a*a);
}
