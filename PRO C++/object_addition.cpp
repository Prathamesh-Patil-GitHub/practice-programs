/*This program will do complex addition of numbers by using two objects.*/
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex(){}
        Complex(int a,int b)
        {
            real=a;
            img=b;
        }
        void display()
        {
            cout<<"\n"<<real<<"+"<<img<<"i";
        }
        void add(Complex a,Complex b)
        {
            real=a.real+b.real;
            img=a.img+b.img;
        }
};
int main()
{
    Complex c1(3,6),c2(4,5),c3;
    c1.display();
    c2.display();
    c3.add(c1,c2);
    cout<<"\nAddition =";
    c3.display();
    return 0;
}
