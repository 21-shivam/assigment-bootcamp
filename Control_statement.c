#include<stdio.h>
#include<conio.h>
int main()
{

    char p;
    printf("Enter a charecter:");
    scanf("%c",&p);
    switch(p)
    {
    case 'a':
        printf("First");
        break;
    case 'b':
        printf("second");
        break;
    case 'c':
        printf("Third");
    case 'd':
        printf("Fourth");
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}
