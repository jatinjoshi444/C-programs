#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 printf("Enter a character");
 scanf("%c",&ch);
 switch(ch)
 {
 case 'a':
 printf("Entered character is vowel \n");
 break;
 case 'e':
 printf("Entered character is vowel \n");
 break;
 case 'i':
 printf("Entered charcter is vowel \n");
 break;
 case 'o':
 printf("Entered charcter is vowel \n");
 break;
 case 'u':
 printf("Entered charcter is vowel \n");
 break;
 default:
 printf("Entered charcter is consanent \n");
 }
 getch();
}