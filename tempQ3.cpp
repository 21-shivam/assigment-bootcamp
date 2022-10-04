#include<conio.h>
#include<iostream>
using namespace std;
int rev(char ch[],int p)
{
    cout<<"Reverse name is:";
    for(int i=p;i>=0;i--)
        cout<<ch[i];
        cout<<"\n";
        return 0;
}
int co(char ch[])
{
    int temp=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        temp++;
    }
    return temp;
}
int main()
{
    char ch[20];
    cout<<"Enter your name:";
    cin>>ch;
    cout<<"Your name is:";
    cout<<ch;
    int p=co(ch);
    cout<<"\n"<<rev(ch,p);
    return 0;
}
