/*
Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/

#include<stdio.h>
#include<stdlib.h>
/*
Function Name : CountWhite
Input         : Character Pointer
Output        : Integer
Description   : It returns number of white spaces in the given string.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 02,2021
*/

int CountWhite(char *str)
{
 int iCntWhite=0;
 while (*str!='\0')
 {
  if (*str==32)
  {
    iCntWhite++;
  }
  str++;
 }
 return iCntWhite;
}

int main()
{
system("cls");
char Arr[100];
int iRet=0;
printf("Enter  string:\n");
scanf("%[^'\n']s",Arr);
iRet=CountWhite(Arr);
printf("Number of white spaces in the given string are:- %d",iRet);
return 0;
}