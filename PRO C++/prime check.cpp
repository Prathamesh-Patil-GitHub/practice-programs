#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        cout<<"\n"<<n<<" is a prime number";
    else
        cout<<"\n"<<n<<" is not a prime number";
    return 0;
}
