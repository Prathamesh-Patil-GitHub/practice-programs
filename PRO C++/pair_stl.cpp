#include<iostream>
#include<string.h>
using namespace std;
class student{
private:
    int age;
    string name;
public:
    void setStudent(int a,string str){
        age=a;
        name=str;
    }
    void putdata(){
    cout<<"\nName:"<<name;
    cout<<"\nAge:"<<age;
    }
};
int main(){
pair <int,string>p1;
pair <int,student>p2;
p1=make_pair(2,"Programming");
cout<<"First Pair Test:\n";
cout<<p1.first<<endl<<p1.second;
student s1;
cout<<"\n\nSecond Pair Test:";
s1.setStudent(18,"Raj");
p2=make_pair(23,s1);
cout<<"\nRoll No:"<<p2.first;
p2.second.putdata();

return 0;
}
