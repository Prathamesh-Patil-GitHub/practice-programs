#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums;
    vector <int>:: iterator it;
    for(int i=0;i<10;i++)
    {
    nums.push_back(10*(i+1));
    }
    cout<<"The Vector is:";
    for(int i=0;i<10;i++)
    {
        cout<<endl<<nums[i];
    }
    cout<<"\n\nCurrent Capacity="<<nums.capacity();
    cout<<"\nCurrent Size="<<nums.size();
    it=nums.begin();
    nums.insert(it+2,25);
    cout<<"\n\nAfter Insert:\n";
    for(int i=0;i<11;i++)
    {
        cout<<endl<<nums[i];
    }
    cout<<"\n\nCurrent Capacity="<<nums.capacity();
    cout<<"\nCurrent Size="<<nums.size();
    return 0;
}
