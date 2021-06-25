/*
Write a program which accept string from user and convert it into upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : ToUpperCase
Input         : Character Pointer
Output        : Void
Description   : It displays string in upper case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 02,2021
*/

void ToUpperCase(char *str)
{
 while (*str!='\0')
 {
  if ((*str>=97)&&(*str<=122))
  {
    *str=*str-32;
  }
  str++;
 }
}

int main()
{
char Arr[30];
system("cls");
printf("Enter String\n");
scanf("%[^'\n']s",Arr);
ToUpperCase(Arr);
printf("String after converting to UPPER CASE is %s",Arr);

return 0;
}