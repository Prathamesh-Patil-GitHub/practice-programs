#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"\nTable of "<<n;
    for(i=1;i<=10;i++)
        cout<<"\n"<<n<<"X"<<i<<" ="<<"\t"<<n*i;
    return 0;
}
