#include<conio.h>
#include<iostream.h>
using namespace std;
void add(int a,int b);
void add(int a,int b,int c);
int main()
{
    int x,y,z;
    cout<<"\nEnter two numbers:";
    cin>>x>>y;
    add(x,y);
    cout<<"\nEnter three numbers:";
    cin>>x>>y>>z;
    add(x,y,z);
    return 0;
}
void add(int a,int b)
{
    cout<<"\nSum is="<<a+b;
}
void add(int a,int b,int c)
{
    cout<<"\nSum is="<<a+b+c;
}
