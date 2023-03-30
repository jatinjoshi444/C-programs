#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  printf("Enter the first number :-");
  scanf("%d",&a);
  printf("Enter the second number :-");
  scanf("%d",&b);
  if(a>b)
  {
    printf("%d number is greater",a);
  }
  else
  {
    printf("%d number is greater",b);
  }
  getch();
}