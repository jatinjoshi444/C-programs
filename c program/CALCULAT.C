#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,d,s,p,r,div;
  clrscr();
  printf("Enter the value of a & b");
  scanf("%d%d",&a,&b);
  s=a+b;
  d=a-b;
  p=a*b;
  div=a/b;
  r=a%b;
  printf("\n Addition=%d",s);
  printf("\n Subtrction=%d",d);
  printf("\n Multiplication=%d",p);
  printf("\n Division=%d",div);
  printf("\n Remainder=%d",r);
  getch();
}