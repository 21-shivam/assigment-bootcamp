#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=0&&marks<30)
    {
        printf("Grade=C");
    }
    else if(marks>=30&&marks<=70)
    {
        printf("Grade=B");
    }
    else if(marks>=70&&marks<=90)
    {
        printf("Grade=A");
    }
    else if(marks>=90&&marks<=100)
    {
        printf("Grade=A+");
    }
    else
        printf("Invalid number");
    return 0;
}
