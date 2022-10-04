#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;
  printf("Enter a character:-");
  scanf("%c",&ch);
  switch(ch)
  {
  case 'a':
    printf("shivam");
    break;
  case 'b':
    printf("Kumar");
    break;
  case 'c':
    printf("Singh");
    break;
  default :
    printf("Invalid input");
    break;
  }
  getch();
  return 0;
}
