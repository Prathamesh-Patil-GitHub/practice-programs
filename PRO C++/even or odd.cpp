#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number";
    cin>>x;
    if(x%2==0)
        cout<<"\n"<<x<<" is an even number";
    else
        cout<<"\n"<<x<<" is an odd number";
    return 0;
}
