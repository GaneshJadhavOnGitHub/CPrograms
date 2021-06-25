/*
Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

/*
Function Name : CountCharacter
Input         : Character Pointer , Character
Output        : Integer
Description   : It returns frequency of the input character in the input string.
                Method is case sensitive.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/
int CountCharacter(char *str, char cInput)
{
 int iCount=0;
 while (*str!='\0')
 {
  if (*str==cInput)
  {
   iCount++;
  }
  str++;
 }
return iCount;
}
int main()
{
 system("cls");
 char Arr[30];
 char cValue='\0';
 int iRet=0;
 printf("Enter String:-\n");
 scanf("%[^'\n']s",Arr);
 printf("Enter character:-\n");
 scanf(" %c",&cValue);
 iRet=CountCharacter(Arr,cValue);
 printf("%c is present %d times in the given string.\n",cValue,iRet);
 return 0;
}