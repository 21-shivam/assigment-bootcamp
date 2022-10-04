#include<stdio.h>
#include<conio.h>
int main()
{

    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("Number is divisible by 2");
    else
        printf("Not divisible by 2");
    return 0;
}
