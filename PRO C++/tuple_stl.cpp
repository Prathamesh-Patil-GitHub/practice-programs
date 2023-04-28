#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <int,string,float> student;
    student=make_tuple(16,"Rajesh",91.60);
    cout<<"Roll No   :"<<get<0>(student)<<endl;
    cout<<"Name      :"<<get<1>(student)<<endl;
    cout<<"Percentage:"<<get<2>(student);
    return 0;
}
