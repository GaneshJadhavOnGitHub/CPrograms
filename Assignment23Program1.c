/*
Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
#include<stdio.h>
#include<stdlib.h>
/*
Function Name : CountCapital
Input         : Character Array
Output        : Integer
Description   : It returns number of CAPITAL characters in the given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

int CountCapital(char str[])
{
 int iCnt=0;
 char *s=NULL;
 s=str;
 while (*s!='\0')
 {
  if ((*s>=65)&&(*s<=90))
  {
   iCnt++;
  }
  s++;
 }
 return iCnt;
 }
int main()
{
 char Arr[30];
 int iRet=0;
 system("cls");
 printf("Enter String:\n");
 scanf("%[^'\n']s",&Arr);
 iRet=CountCapital(Arr);
 printf("Number of CAPITAL characters in the given string are %d\n",iRet);
 return 0;

}