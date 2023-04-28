#include<iostream>
using namespace std;
class Sample
{
    private:
        int x;
        float y;
    public:
        void set(int a,float b)
        {
            x=a;
            y=b;
        }
        void display()
        {
            cout<<"\nx = "<<x;
            cout<<"\ny = "<<y;
        }
};
int main()
{
    Sample obj;
    obj.set(20,2.1);
    obj.display();
    return 0;
}
