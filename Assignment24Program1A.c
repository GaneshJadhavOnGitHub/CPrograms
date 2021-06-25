/*
Write a program which accept string from user and convert it into lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : ToLowerCase
Input         : Character Array
Output        : Character Array
Description   : It displays array in lower case.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

char * ToLowerCase(char str[])
{
  char *s=NULL;
  int iCnt=0;
  int iLength=0;
  char copiedArray[30];
  char *cReturn=NULL;
  s=str;
  while (*s!='\0')
  {
   iLength++;
   s++;
  }
  for (iCnt=0;iCnt<iLength;iCnt++)
  {
   if ((str[iCnt]>=65)&&(str[iCnt]<=90))
   {
    copiedArray[iCnt]=str[iCnt]+32;
   }
   else
   {
    copiedArray[iCnt]=str[iCnt];
   }
  }
  copiedArray[iCnt+1]='\0';
  cReturn=copiedArray;
  return cReturn;
  //return copiedArray;
}

int GetStringLength(char str[])
{
 char *s=NULL;
 int iLength=0;
 s=str;
 while (*s!='\0')
 {
  iLength++;
  s++;
 }
 return iLength;
}
int main()
{
system("cls");
char Arr[30];
char arrRet[30];
char *cRet=NULL;
int iLength=0;
int iCnt=0;
printf("Enter String:\n");
scanf("%[^'\n']s",Arr);
iLength=GetStringLength(Arr);
printf("Length of Array is %d\n",iLength);
printf("String after conversion to lower case is as below\n");
cRet=ToLowerCase(Arr);
printf("----------------\n");
//printf("%s",*cRet);
/*
for (iCnt=0;iCnt<iLength;iCnt++)
{
  printf("%c",*cRet);
}
*/

while (*cRet!='\0')
{
 printf("%c",*cRet);
 cRet++;
}

return 0;
}