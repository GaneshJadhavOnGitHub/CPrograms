/*
Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo”
Output :
*/

#include<stdio.h>
#include<stdlib.h>

/*
Function Name : DisplayDigit
Input         : Character Pointer
Output        : Void
Description   : It displays digits in the given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 02,2021
*/

void DisplayDigit(char *str)
{
  while (*str!='\0')
  {
   if ((*str>=48)&&(*str<=57))
   {
    printf("%c",*str);
   }
   str++;
  }
}

int main()
{
system("cls");
char Arr[30];
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
DisplayDigit(Arr);
return 0;
}