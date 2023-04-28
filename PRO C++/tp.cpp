#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int>nums;
int item,a=-1,b=-1,SIZE,number;
cin>>SIZE;
for(int i=0;i<SIZE;i++){
    cin>>number;
    nums.push_back(number);
}
cin>>item;
int beg=0,end=SIZE-1,mid;
while(beg<=end)
{
    mid=(beg+end)/2;
    if(nums[mid]==item)
    {
        if(nums[mid-1]==item)
        {
            a=mid-1;
            b=mid;
        }
        else if(nums[mid+1]==item)
        {
            a=mid;
            b=mid+1;
        }
        else
            a=mid;
        break;
    }
    if(item<nums[mid])
        end=mid-1;
    else
        beg=mid+1;
}
cout<<a<<" "<<b;
return 0;
}

