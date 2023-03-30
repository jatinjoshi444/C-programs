#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 if (num%2==0)
 {
   printf("\n You entered even number");
 }
 else
 {
   printf("\n You entered odd number");
 }
 getch();
 }