#include<iostream>
using namespace std;
#include<string.h>
class String
{
    char str[30];
    public:
    void read()
    {
        cout<<"\nEnter the String ";
        cin.getline(str,30);
    }
    void print()
    {
        cout<<"\n"<<str;
    }
    friend String operator+(String,String);
};
int main()
{
    String s1,s2,s3;

    s1.read();
    s2.read();
    s3=s1+s2;       //s3=operator+(s1,s2);
    cout<<"\nString-1:";
    s1.print();
    cout<<"\n\nString-2";
    s2.print();
    cout<<"\n\nConcatenated String :";
    s3.print();

    return 0;
}
String operator+(String s1,String s2)
{
    String t;

    strcpy(t.str,s1.str);
    strcat(t.str,s2.str);

    return t;
}
