#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>array_list={11,22,33,44,55};
    array <int,5>array_list_k={1,2,3,4,5};

    cout<<"Third Array Element:"<<array_list.at(2);
    cout<<"\n\nSecond Array Element:"<<array_list[1];
    cout<<"\n\nFront Element Of Array:"<<array_list.front();
    cout<<"\n\nBack Element Of Array:"<<array_list.back();
    cout<<"\n\nFilling the array with 20";
    array_list.fill(20);
    cout<<"\nArray after filling:\n";
    for(int i=0;i<5;i++)
    cout<<" "<<array_list[i];
    cout<<"\n\nSwapping array_list And array_list_s:";
    cout<<"\narray_list is:\n";
    for(int i=0;i<5;i++)
    cout<<" "<<array_list[i];
    cout<<"\narray_list_k is:\n";
    for(int i=0;i<5;i++)
    cout<<" "<<array_list_k[i];
    cout<<"\nAFTER SWAPPING:";
    cout<<"\narray_list is:\n";
    for(int i=0;i<5;i++)
    cout<<" "<<array_list[i];
    cout<<"\narray_list_k is:\n";
    for(int i=0;i<5;i++)
    cout<<" "<<array_list_k[i];
    cout<<"\n\nSize of the array is:"<<array_list.size();

    return 0;
}
