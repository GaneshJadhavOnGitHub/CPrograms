/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : DifferenceSmallCapital
Input         : Character Array
Output        : Integer
Description   : It returns difference between frequency of small characters and frequency of capital characters.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

int DifferenceSmallCapital(char str[])
{
char *s=NULL;
int iCntCapital=0;
int iCntSmall=0;
s=str;
while (*s!='\0')
{
  if ((*s>=65)&&(*s<=90))
  {
   iCntCapital++;
  }
  else if ((*s>=97)&&(*s<=122))
  {
   iCntSmall++;
  }
  s++;
}
return iCntSmall-iCntCapital;
}

int main()
{
system("cls");
char Arr[30];
int iRet=0;
printf("Enter string:\n");
scanf("%[^'\n']s",Arr);
iRet=DifferenceSmallCapital(Arr);
printf("Difference between frequency of small characters and frequency of capital characters is %d",iRet);
return 0;
}