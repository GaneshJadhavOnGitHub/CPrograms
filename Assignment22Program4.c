/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*
Function Name : CheckSpecial
Input         : Character
Output        : Boolean
Description   : It checks whether input character is a SPECIAL Symbol or not.
Author Name   : Ganesh Kamalakar Jadhav
Date          : April 01,2021
*/

bool CheckSpecial(char cInput)
{
bool bResult=false;
 if ((cInput=='!')||(cInput=='@')||(cInput=='#')||(cInput=='$')||(cInput=='%')||(cInput=='^')||(cInput=='&')||(cInput=='*'))
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
 printf("Enter character:\n");
 scanf("%c",&cValue);
 bRet=CheckSpecial(cValue);
 if (bRet==true)
 {
  printf("%c is a SPECIAL Character.\n",cValue);
 }
 else
 {
  printf("%c is not a SPECIAL Character.\n",cValue);
 }
 return 0;
}