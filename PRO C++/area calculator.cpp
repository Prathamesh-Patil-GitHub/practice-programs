#include<iostream>
using namespace std;
class Shape
{
protected:
    float dim1,dim2;
public:
    virtual void read()=0;
    virtual void area()=0;       //Pure virtual function
};
class Rectangle:public Shape
{
public:
    void read()
    {
       cout<<"\nEnter the Length and Breadth of the rectangle ";
       cin>>dim1>>dim2;
    }
    void area()     //Function Overriding
    {
        cout<<"\nArea of the rectangle ="<<dim2*dim1<<endl;
    }
};
class Triangle:public Shape
{
public:
    void read()
    {
        cout<<"\nEnter the Base and Height of the triangle ";
        cin>>dim1>>dim2;
    }
    void area()     //Function Overriding
    {
        cout<<"\nArea of the triangle ="<<0.5*dim1*dim2<<endl;
    }
};
int main()
{
    Shape *p;
    int ch=0;
    cout<<"\nAREA CALCULATOR";
    while(ch!=3)
    {
        cout<<"\nPress 1 for Triangle Area \nPress 2 for Rectangle Area \nPress 3 To EXIT\n\n";
        cin>>ch;
        if(ch==1)
        {
            p=new Triangle;
            p->read();
            p->area();
            delete p;
        }
        else if(ch==2)
        {
            p=new Rectangle;
            p->read();
            p->area();
            delete p;
        }
        else
        break;
    }
    cout<<"\nCHALE";
    return 0;
}
