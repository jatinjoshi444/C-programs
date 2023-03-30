#include<stdio.h>
#include<conio.h>
void main()
{
  float a, b, area;
  printf("Enter the value of length :");
  scanf("%f", &a);
  printf("Enter the value of width :");
  scanf("%d", &b);
  area=a*b;
  printf("Area of rectangle is =%f", area);
  clrscr();
  getch();
}