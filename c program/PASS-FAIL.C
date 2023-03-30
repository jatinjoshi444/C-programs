#include<stdio.h>
#include<conio.h>
void main()
{
  int marks;
  printf("Enter the marks of student");
  scanf("%d",&marks);
  if(marks>=35)
  {
    printf("Congratulations you are pass");
  }
  else
  {
    printf("Unfortunately you are fail");
  }
  getch();
}