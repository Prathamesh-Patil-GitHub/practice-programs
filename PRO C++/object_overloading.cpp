#include<iostream>
using namespace std;
class Sample
{
    int x;

    public:
    Sample()
    {
        x=0;
    }
    void operator++()
    {
        x++;
    }
    void operator--()
    {
        x--;
    }

    void display()
    {
        cout<<"\nx="<<x;
    }
     void operator++(int)
    {
        ++x;
    }
    void operator--(int)
    {
        --x;
    }
};
int main()
{
    Sample obj;

    obj.display();
    obj++;
    ++obj;
    obj.display();
    obj--;
    --obj;
    obj.display();

    return 0;
}
