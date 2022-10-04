#include<Stdio.h>
#include<conio.h>
void Table(int a);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    Table(n);
    return 0;
}
void Table(int a)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}
