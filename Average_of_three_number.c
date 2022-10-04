//program to find average of three number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    printf("Average of three number is=%d",d);
    return 0;
}
