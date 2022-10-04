#include<conio.h>
#include<iostream.h>
using namespace std;
void add(int &x,int &y);
void add(int &x,int &y)
{
    cout<<"Sum is="<<x+y;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    add(x,y);
    return 0;
}
