/*
Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
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
Function Name : LastOccurance
Input         : Character Pointer , Character
Output        : Integer
Description   : It returns index of last occurrence of input character in the input string.
                Method is case sensitive.
Author Name   : Ganesh Kamalakar Jadhav.
Date          : April 03,2021.
*/

int LastOccurance(char str[], char cInput)
{
 char *s=NULL;
 int iIndex=0;
 int iCnt=0;
 int iLength=0;
 s=str;
 while (*s!='\0')
 {
  iLength++;
  s++;
 }
 //printf("*s is %c",*s);
 printf("iLength is %d\n",iLength);
 for (iCnt=iLength-1;iCnt>=0;iCnt--)
 {
  if (str[iCnt]==cInput)
  {
   iIndex=iCnt;
   break;
  }
  if (iCnt==0) //Last Iteration
  {
   iIndex=-1;
  }
 }
 return iIndex;
}

int main()
{
char Arr[30];
char cValue='\0';
int iRet=0;
system("cls");
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
printf("Enter character:\n");
scanf(" %c",&cValue);
//printf("iRet is %d",iRet);
iRet=LastOccurance(Arr,cValue);
//printf("iRet is %d",iRet);
if (iRet==-1)
{
 printf("%c is not present in the given string.\n",cValue);
}
else
{
printf("%c's last location in the given string is %d\n",cValue,iRet);
}
return 0;
}