#include<iostream>
#include<string.h>
using namespace std;
class String
{
    char str[30];
    public:
    void read()
    {
        cout<<"\nEnter the string ";
        cin.getline(str,30);
    }
    int operator==(String a)
    {
        if(!strcmp(str,a.str))
            return 1;
        else
            return 0;
    }
};
int main()
{
    String s1,s2;

    s1.read();
    s2.read();
    if(s1==s2)
        cout<<"\nBoth the Strings are Equal";
    else
        cout<<"\nBoth Strings are Not Equal";

    return 0;
}
