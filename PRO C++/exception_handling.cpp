#include<iostream>
using namespace std;
int main(){
int x,y;
float f;
try{
cout<<"Division Project:\n";
cout<<"Enter two numbers ";
cin>>x>>y;
if(y==0)
    throw("Denominator can't be zero");
f=float(x)/y;
cout<<"\nThe division is "<<f;
}
catch(const char *msg)
{
cout<<msg;
}
return 0;
}
