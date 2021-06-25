/*
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 0
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/

#include<stdio.h>
#include<stdlib.h>

/*
Function Name : FirstOccurance
Input         : Character Pointer , Character
Output        : Integer
Description   : It returns index of first occurrence of input character in the input string.
                Method is case sensitive.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/
int FirstOccurance(char str[], char cInput)
{
  char *s=NULL;
  int iLength=0;
  int iCnt=0;
  int iIndex=0;
  s=str;
  while (*s!='\0')
  {
   iLength++;
   s++;
  }
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
   if (str[iCnt]==cInput)
   {
	iIndex=iCnt;
	break;
   }
  }
  if (iCnt==iLength)
  {
   iIndex=-1;
  }
  return iIndex;
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
 iRet=FirstOccurance(Arr,cValue);
 if (iRet==-1)
 {
  printf("%c is not present in the given string!\n",cValue);
 }
 else
 {
  printf("%c's first location in the given string is %d\n",cValue,iRet);
 }
 return 0;
}