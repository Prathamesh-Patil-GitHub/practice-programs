#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    char ch,src[30],dest[30];
    int line=0;
    cout<<"\nEnter the source file name ";
    cin>>src;
    fin.open(src);
    if(fin!=0)
    {
        cout<<"\nEnter the destination file name ";
        cin>>dest;
        fout.open(dest);
        while(1)
        {
            ch=fin.get();
            if(fin.eof())
                break;
            if(ch=='\n')
                line++;
            fout<<ch;
        }
        cout<<"\nThe file "<<src<<" is copied to file "<<dest;
        cout<<"\nThe no. of lines copied are: "<<line;
    }
    else
        cout<<"\nThe file can't be open ";
    fin.close();
    fout.close();
    return 0;
}
