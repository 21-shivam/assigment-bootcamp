#include<stdio.h>
#include<conio.h>
int Factorial(int n);
int main()
{
    int n,p;
    printf("Enter a number:");
    scanf("%d",&n);
   p=Factorial(n);
   printf("Factorial is=%d",p);
   return 0;

}
int Factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int x=1;
    x=Factorial(n-1)*n;
    return x;
}
