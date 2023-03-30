#include<stdio.h>
#include<conio.h>
void main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("Entered number is divisible by 2");
  }
  if(num%3==0)
  {
    printf("Entered number is divisible by 3");
  }
  getch();
}