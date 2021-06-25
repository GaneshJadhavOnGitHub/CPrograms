/*
Write a program which accept string from user and count number of small characters.
Input : Marvellous
Output : 9
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : CountSmall
Input         : Character Array
Output        : Integer
Description   : It returns number of small characters in the given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
int CountSmall(char str[])
{
  char *s=NULL;
  int iCnt=0;
  s=str;
  while (*s!='\0')
  {
   if ((*s>=97)&&(*s<=122))
   {
    iCnt++;
   }
   s++;
  }
  return iCnt;
}

int main()
{
system("cls");
char Arr[30];
int iRet=0;
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
iRet=CountSmall(Arr);
printf("Number of small characters in the given string are %d",iRet);
return 0;
}