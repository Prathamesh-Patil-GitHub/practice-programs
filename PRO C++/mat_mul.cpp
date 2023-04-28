#include<iostream>
#include<stdlib.h>
using namespace std;
class Matrix
{
    int **a,r,c;
public:
    Matrix(int r1,int c1)
    {
        r=r1;
        c=c1;
        a=new int* [r];
        for(int i=0;i<r;i++)
            a[i]=new int[c];
    }
    void read()
    {
        int i,j;
        cout<<"\nEnter the values for the matrix having dimensions "<<r<<"X"<<c<<endl;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            cin>>a[i][j];
    }
    void display()
    {
        int i,j;
        for(int i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                cout<<a[i][j]<<"\t";
            cout<<"\n";
        }
    }
    Matrix operator*(Matrix &m)
    {
        Matrix t(r,m.c);
        int i,j,k;
        for(i=0;i<r;i++)
        {
            for(j=0;j<m.c;j++)
            {
                t.a[i][j]=0;
                for(k=0;k<c;k++)
                t.a[i][j]=t.a[i][j]+a[i][k]*m.a[k][j];
            }
        }
    return t;
    }
    ~Matrix()
    {
        for(int i=0;i<r;i++)
            delete []a[i];
        delete []a;
    }
};
int main()
{
    int r1,c1,r2,c2;
    cout<<"\nEnter the dimensions of first matrix ";
    cin>>r1>>c1;
    cout<<"\nEnter the dimensions of second matrix ";
    cin>>r2>>c2;
    while(c1!=r2)
    {
        cout<<"\nThe column dimension of 1 matrix is not matching with row dimension of 2 matrix\nPlease re-enter the dimensions ";
        cout<<"\nEnter the dimensions of first matrix ";
        cin>>r1>>c1;
        cout<<"\nEnter the dimensions of second matrix ";
        cin>>r2>>c2;
    }
    Matrix m1(r1,c1),m2(r2,c2),m3(r1,c2);
    m1.read();
    m2.read();
    m3=m1*m2;
    cout<<"\nThe Multiplied matrix is:\n";
    m3.display();

    return 0;
}
