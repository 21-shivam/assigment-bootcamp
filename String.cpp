#include<iostream>
using namespace std;
int getlength(char ch[]);
int main()
{
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Elements is="<<getlength(name)<<endl;
    //name[2]='\0';
    //cout<<"Your name is:"<<name;
    return 0;
}
int getlength(char name[])
{

    int count=0,i;
    for(i=0; name[i] != '\0' ;i++)
    {
        count++;
    }
    return count;
}

