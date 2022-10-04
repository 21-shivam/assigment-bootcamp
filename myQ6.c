#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    float c;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    c=3.14*r*r;
    printf("area of circle is %f",c);
    getch();
}
