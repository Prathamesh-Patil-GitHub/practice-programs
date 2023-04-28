#include<iostream>
using namespace std;
class MaxMin
{
    private:
        int Array[10];
    public:
        void read()
        {
            int i;
            cout<<"\nEnter 10 integers ";
            for(i=0;i<10;i++)
                cin>>Array[i];
        }
        void maxmin()
        {
            int i,Max=0,Min;
            Min=Array[0];
            for(i=0;i<10;i++)
            {
                if(Array[i]>Max)
                    Max=Array[i];
                if(Array[i]<Min)
                    Min=Array[i];
            }
            cout<<"\nMAXIMUM="<<Max;
            cout<<"\nMINIMUM="<<Min;
        }
};
int main()
{
    MaxMin obj;
    obj.read();
    obj.maxmin();
    return 0;
}
