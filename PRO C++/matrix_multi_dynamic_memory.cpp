#include<iostream>
using namespace std;
class Matrix
{
    int **a,**b,**c,c1,c2,r1,r2;
public:
    Matrix()
    {
        cout<<"\nEnter the dimensions of 1st matrix ";
        cin>>r1>>c1;
        cout<<"\nEnter the dimensions of 2nd matrix ";
        cin>>r2>>c2;
        while(c1!=r2)
        {
            cout<<"\nThe column no of 1st matrix is not matching with the row no of 2nd matrix!\nPlease enter  valid Dimensions again";
            cout<<"\nEnter the dimensions of 1st matrix ";
            cin>>r1>>c1;
            cout<<"\nEnter the dimensions of 2nd matrix ";
            cin>>c2>>r2;
        }
        a=new int*[r1];
        for(int i=0;i<r1;i++)
            a[i]=new int[c1];
        b=new int*[r2];
        for(int i=0;i<r2;i++)
            b[i]=new int[c2];
        c=new int*[r1];
        for(int i=0;i<r1;i++)
            c[i]=new int[c2];

    }
    void read()
    {
        int i,j;
        cout<<"\nEnter the elements of 1st array having dimensions"<<r1<<"X"<<c1<<"\n";
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
            {
                cin>>a[i][j];
            }
        cout<<"\nEnter the elements of 2nd array having dimensions"<<r2<<"X"<<c2<<"\n";
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
            {
                cin>>b[i][j];
            }
    }
    void compute()
    {
        int i,j,k;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }

    }
    void display()
    {
        int i,j;
        cout<<"\nFirst matrix is :\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            cout<<a[i][j]<<"\t";
            cout<<"\n";
        }
        cout<<"\nSecond Matrix  is:\n";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            cout<<b[i][j]<<"\t";
            cout<<"\n";
        }
        cout<<"\nMultiplied Matrix  is:\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            cout<<c[i][j]<<"\t";
            cout<<"\n";
        }
    }
    ~Matrix()
    {
        int i;
        for(i=0;i<r1;i++)
            delete []a[i];
        delete []a;
        for(i=0;i<r2;i++)
            delete []b[i];
        delete []b;
        for(i=0;i<r1;i++)
            delete []c[i];
        delete []c;
    }
};
int main()
{
    Matrix m;

    m.read();
    m.compute();
    m.display();

    return 0;
}
