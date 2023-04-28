#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void read()
    {
        int i,j;
        cout<<"\nEnter elements for 3*3 matrix ";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>a[i][j];
        }
    }
    void print()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            cout<<"\n";
            for(j=0;j<3;j++)
                cout<<a[i][j]<<"\t";
        }
    }
    friend Matrix operator*(Matrix,Matrix);
};
int main()
{
    Matrix m1,m2,m3;

    m1.read();
    m2.read();
    m3=m1*m2;       //m3=operator*(m1,m2)
    cout<<"\nMatrix-1:";
    m1.print();
    cout<<"\nMatrix-2";
    m2.print();
    cout<<"\nMatrix Multiplication is :";
    m3.print();

    return 0;
}
Matrix operator*(Matrix m1,Matrix m2)
{
    Matrix t;
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t.a[i][j]=0;

            for(k=0;k<3;k++)
                t.a[i][j]=t.a[i][j]+m1.a[i][k]*m2.a[k][j];
        }
    }
    return t;
}
