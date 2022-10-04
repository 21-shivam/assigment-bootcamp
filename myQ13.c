//print first n odd natural numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1;
    printf("Enter a natural number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",2*i-1);
        i++;
    }
    getch();
}
