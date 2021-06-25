/*
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckCharacter
Input         : Character Pointer , Character
Output        : Boolean
Description   : It checks whether given character is present in the given string or not.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/
bool CheckCharacter(char *str, char cInput)
{
  bool bResult=false;
  while (*str!='\0')
  {
   if (*str==cInput)
   {
    bResult=true;
   }
   str++;
  }
  return bResult;
}

int main()
{
 system("cls");
 char Arr[30];
 char cValue='\0';
 bool bRet=false;
 printf("Enter String:\n");
 scanf("%[^'\n']s",Arr);
 printf("Enter character:\n");
 scanf(" %c",&cValue);
 bRet=CheckCharacter(Arr,cValue);
 if (bRet==true)
 {
  printf("%c is present in the entered string",cValue);
 }
 else
 {
  printf("%c is not present in the entered string",cValue);
 }
 return 0;
}