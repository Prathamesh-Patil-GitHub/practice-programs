#include<iostream>
using namespace std;
class day
{
    private:
        int day,month,year;
    public:
        void read();
        void dmy();
        void mdy();
        void dmony();
};
void day::read()
{
    cout<<"\nEnter the day,Month And Year ";
    cin>>day>>month>>year;
    if(day>31 || month>12)
    {
        cout<<"\nInvalid input\nRe-enter day\n";
        day::read();
    }
}
void day::dmy()
{
    cout<<"\nDD/MM/YY : ";
    cout<<day<<"/"<<month<<"/"<<year;
}
void day::mdy()
{
    cout<<"\nMM/DD/YY : ";
    cout<<month<<"/"<<day<<"/"<<year;
}
void day::dmony()
{
    cout<<"\nDD/MONTH//YY : ";
    switch(month)
    {
        case 1:cout<<day<<"/JAN"<<"/"<<year;break;
        case 2:cout<<day<<"/FEB"<<"/"<<year;break;
        case 3:cout<<day<<"/MAR"<<"/"<<year;break;
        case 4:cout<<day<<"/APR"<<"/"<<year;break;
        case 5:cout<<day<<"/MAY"<<"/"<<year;break;
        case 6:cout<<day<<"/JUN"<<"/"<<year;break;
        case 7:cout<<day<<"/JUL"<<"/"<<year;break;
        case 8:cout<<day<<"/AUG"<<"/"<<year;break;
        case 9:cout<<day<<"/SEP"<<"/"<<year;break;
        case 10:cout<<day<<"/OCT"<<"/"<<year;break;
        case 11:cout<<day<<"/NOV"<<"/"<<year;break;
        case 12:cout<<day<<"/DEC"<<"/"<<year;
    }
}

int main()
{
    day d1;

    d1.read();
    d1.dmy();
    d1.mdy();
    d1.dmony();

    return 0;
}
