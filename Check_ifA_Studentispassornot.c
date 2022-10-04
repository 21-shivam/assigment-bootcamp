//Write a program to check if a student passed or failed
#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
   marks>30?printf("Student is PASS"):printf("Student is FAIL");
    return 0;
}
