/*THIS PROGRAM IS ONLY FOR UNDERSTANDING OF CONCEPT OF INLINE FUNCTION*/
#include<iostream>
using namespace std;
inline int square(int a)
{
    return (a*a);
}
int main()
{
    int y;
    y=square(5);
    cout<<"\nSquare of 5 is "<<y;
    return 0;
}
