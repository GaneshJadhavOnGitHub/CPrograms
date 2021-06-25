/*
Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/

#include<stdio.h>
#include<stdlib.h>

/*
Function Name : ToggleCase
Input         : Character Pointer
Output        : Void
Description   : It toggle the case of given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 02,2021
*/
void ToggleCase(char *str)
{
 while (*str!='\0')
 {
  if ((*str>=65)&&(*str<=90))
  {
   *str=*str+32;
  }
  else if((*str>=97)&&(*str<=122))
  {
   *str=*str-32; 
  }
  else
  {
   *str=*str+0;
  }
  str++;
 }
}

int main()
{
system("cls");
char Arr[30];
printf("Enter string:\n");
scanf("%[^'\n']s",Arr);
ToggleCase(Arr);
printf("String after toggling the case is %s",Arr);
return 0;
}

