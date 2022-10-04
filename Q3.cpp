#include<conio.h>
#include<iostream.h>
using namespace std;
void add(int a,int b);
int sub();
int mul(int a,int b);
void add(int a,int b)
{
    int c=a+b;
    cout<<"\nSum is="<<c;
}
int sub()
{
    int a,b;
    cout<<"\nEnter two numbers:";
    cin>>a>>b;
    return(a-b);
}
int mul(int a,int b)
{
    return(a*b);
}
int main()
{
    int a,b;
    cout<<"\nEnter two numbers:";
    cin>>a>>b;
    add(a,b);
    int c=sub();
    cout<<"\nSubtraction is="<<c;
    int p=mul(a,b);
    cout<<"\nMultiply is="<<p;
    return 0;
}
