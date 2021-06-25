/*
 Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
Function Name : CheckAlphabet
Input         : Character
Output        : Boolean
Description   : It checks whether given character is alphabet or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/
bool CheckAlphabet(char cInput)
{
 bool bResult=false;
 if (((cInput>='A')&&(cInput<='Z'))||((cInput>='a')&&(cInput<='z')))
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

bRet=CheckAlphabet(cValue);

if (bRet==true)
{
 printf("%c is an alphabet\n",cValue);
}
else
{
 printf("%c is not an alphabet\n",cValue);
}

return 0;
}