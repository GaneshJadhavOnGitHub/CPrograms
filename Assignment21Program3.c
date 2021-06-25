/*
 Accept Character from user and check whether it is Digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : CheckDigit
Input         : Character
Output        : Boolean
Description   : It checks whether given character is Digit or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
bool CheckDigit(char cInput)
{
 bool bResult=false;
 if ((cInput>=48)&&(cInput<=57))
 {
  bResult=true;
 }
 return bResult;
}

int main()
{
system("cls");
char cValue='\0';
bool bRet=false;

printf("Enter a character: \n");
scanf("%c",&cValue);

bRet=CheckDigit(cValue);

if (bRet==true)
{
 printf("%c is a Digit\n",cValue);
}
else
{
 printf("%c is not a Digit\n",cValue);
}

return 0;
}