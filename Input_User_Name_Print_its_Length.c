#include<stdio.h>
#include<conio.h>
int main()
{
    char name[100],l=0;
    printf("Enter your name:");
    fgets(name,100,stdin);
    puts(name);
    for(int i=0;name[i]!='\0';i++)
    {
        l++;
    }
    printf("\nLength is=%d",l);
    return 0;
}
