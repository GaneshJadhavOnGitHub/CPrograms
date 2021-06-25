/*
 Accept Character from user and check whether it is small case or not
(a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : CheckSmallCase
Input         : Character
Output        : Boolean
Description   : It checks whether given character is small case or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
bool CheckSmallCase(char cInput)
{
 bool bResult=false;
 if ((cInput>='a')&&(cInput<='z')) //((cInput>=97)&&(cInput<=122))
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

bRet=CheckSmallCase(cValue);

if (bRet==true)
{
 printf("%c is a small case letter\n",cValue);
}
else
{
 printf("%c is not a small case letter\n",cValue);
}

return 0;
}