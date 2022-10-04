/* Program related Refrence variable */
#include<conio.h>
#include<iostream.h>
using namespace std;
void change(int &x,int &y);
void change(int &x,int &y)
{
    x++;
    y++;
    cout<<"\nValue of x="<<x;
    cout<<"\nValue of y="<<y;
}
int main()
{
    int a,b;
    cout<<"\nEnter two numbers:";
    cin>>a>>b;
    change(a,b);
    cout<<"\nReal value of a="<<a;
    cout<<"\nReal value of b="<<b;
    return 0;

}
