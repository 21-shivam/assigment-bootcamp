#include<conio.h>
#include<stdio.h>
int main()
{
 char a[4][7];
 int i;
 printf("ENter 4 names:");
 for(i=0;i<=3;i++)
 {
 fgets(a[i],7,stdin);
 }
 for(i=0;i<4;i++)
 {
 printf("%s",a[i]);
 }
 return 0;
}
