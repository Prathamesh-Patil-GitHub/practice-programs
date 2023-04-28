#include<iostream>
using namespace std;
class MaxMin
{
    private:
        int x,y,z;
    public:
        void Read()
        {
            cout<<"\nEnter three integers";
            cin>>x>>y>>z;
        }
        void Max()
        {
            if(x>y)
                cout<<"\nMaximum="<<x;
            else if(y>z)
                cout<<"\nMaximum="<<y;
            else
                cout<<"\nMaximum="<<z;
        }
        void Min()
        {
            if(x<y)
                cout<<"\nMinimum="<<x;
            else if(y<z)
                cout<<"\nMinimum="<<y;
            else
                cout<<"\nMinimum="<<z;
        }
};
int main()
{
    MaxMin obj;

    obj.Read();
    obj.Max();
    obj.Min();

    return 0;
}
