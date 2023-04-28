/*THIS PROGRAM IS ONLY FOR UNDERSTANDING OF CONCEPT OF FUNCTION OVERLOADING*/
#include<iostream>
using namespace std;
void display(int);
void display(char);
void display(double);
int main()
{
    display(67);
    display(5.4);
    display('#');
}
void display(int a)
{
    cout<<"\nINTEGER= "<<a;
}
void display(char a)
{
    cout<<"\nCHARACTER= "<<a;
}
void display(double a)
{
    cout<<"\nREAL NUMBER= "<<a;
}
