#include<stdio.h>
#include<conio.h>
void main()
{
  float r,area,perimeter;
  printf("Enter the radius of circle");
  scanf("%f",&r);
  area=3.14*r*r;
  perimeter=2*3.14*r;
  printf("The area of circle is =%f",area);
  printf("\n  The perimeter of circle is =%f",perimeter);
  getch();
}