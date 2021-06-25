/*
 Accept Character from user and check whether it is Capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : CheckCapital
Input         : Character
Output        : Boolean
Description   : It checks whether given character is CAPITAL or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
bool CheckCapital(char cInput)
{
 bool bResult=false;
 if ((cInput>='A')&&(cInput<='Z'))
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

bRet=CheckCapital(cValue);

if (bRet==true)
{
 printf("%c is a CAPITAL letter\n",cValue);
}
else
{
 printf("%c is not a CAPITAL letter\n",cValue);
}

return 0;
}