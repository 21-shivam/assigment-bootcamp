//swapping two number
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
    getch();
}
