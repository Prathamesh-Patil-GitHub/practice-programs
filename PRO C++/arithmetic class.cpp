#include<iostream>
using namespace std;
class Arithmetic
{
    private:
        int x,y;
    public:
        void Read()
        {
            cout<<"\nEnter two numbers ";
            cin>>x>>y;
        }
        void Addition()
        {
            cout<<"\nAddition="<<x+y;
        }
        void Subtraction()
        {
            cout<<"\nSubtraction="<<x-y;
        }
        void Multi()
        {
            cout<<"\nMultiplication="<<x*y;
        }
        void Div()
        {
            cout<<"\nDivision="<<float(x)/y;
        }
        void Compute()
        {
            Addition();
            Subtraction();
            Multi();
            Div();
        }
};
int main()
{
   Arithmetic m1;
   m1.Read();
   m1.Compute();
   return 0;
}
