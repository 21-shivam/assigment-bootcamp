//cheak weather a no. is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("odd number");
    }
    getch();
}
