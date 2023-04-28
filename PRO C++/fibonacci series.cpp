#include<iostream>
using namespace std;
int main()
{
    int x=0,y=1,n,i,sum;
    cout<<"Enter how many terms do you want";
    cin>>n;
    cout<<x<<"\t"<<y;
    for(i=1;i<=n-2;i++)
    {
        cout<<"\t"<<x+y;
        sum=x+y;
        x=y;
        y=sum;
    }
    return 0;
}
