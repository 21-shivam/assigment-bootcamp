/* default arguments */
#include<conio.h>
#include<iostream.h>
using namespace std;
int sum(int a,int b=0,int c=0);
int sum(int a,int b,int c)
{
    return(a+b+c);
}
int main()
{
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
      int q=sum(x,y);
      cout<<"\nSum is="<<q;
    int p;
    cout<<"\nEnter three numbers:";
    cin>>x>>y>>p;
    int s=sum(x,y,p);
    cout<<endl<<"Sum is="<<s;
    return 0;
}
