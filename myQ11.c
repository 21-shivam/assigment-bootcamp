//print first even number
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter a natural number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",2*i);
    getch();
}
